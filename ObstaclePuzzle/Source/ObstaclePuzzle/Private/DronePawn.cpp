
#include "DronePawn.h"
#include "OPGGameState.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "OPGPlayerController.h"
#include "EnhancedInputComponent.h"

ADronePawn::ADronePawn() :
	Sensitivity(1),
	XYSpeed(1),
	UDSpeed(4),
	XYFloorSpeed(5),
	WingRotation(720),
	GravityMin(-1),
	GravityMax(-8),
	AirFriction(0.8f),
	MaxHealth(100),
	Health(MaxHealth),
	IsOnFloor(true),
	FlightRotation(FRotator::ZeroRotator),
	FlightStartRotation(FRotator::ZeroRotator)
{
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetCollisionProfileName(TEXT("BlockAll"));
	BoxCollision->SetSimulatePhysics(false);
	SetRootComponent(BoxCollision);
	
	FlightComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlightMesh"));
	FlightComp->SetSimulatePhysics(false);
	FlightComp->SetRelativeScale3D(FVector(0.1));
	FlightComp->SetRelativeRotation(FRotator(0, 0, -90));
	FlightComp->SetupAttachment(BoxCollision);

	WingLeftComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WingLeftMesh"));
	WingLeftComp->SetSimulatePhysics(false);
	WingLeftComp->SetRelativeLocation(FVector(248, -100, 15));
	WingLeftComp->SetupAttachment(FlightComp);

	WingRightComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WingRightMesh"));
	WingRightComp->SetSimulatePhysics(false);
	WingRightComp->SetRelativeLocation(FVector(-248, -100, 15));
	WingRightComp->SetupAttachment(FlightComp);

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(BoxCollision);
	SpringArmComp->TargetArmLength = 100.0f;
	SpringArmComp->SetRelativeLocation(FVector(0.0, 0.0, 40.0));
	SpringArmComp->bUsePawnControlRotation = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false;
}

void ADronePawn::BeginPlay()
{
	Super::BeginPlay();
	FlightRotation = FlightComp->GetRelativeRotation();
	FlightStartRotation = FlightComp->GetRelativeRotation();
}

void ADronePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//�߷� ����
	AddActorWorldOffset(GetActorUpVector() * Gravity * DeltaTime, true, &HitResult);
	//Todo : ��� ���� on/off�� �ٸ� �߷� ����

	RotateWings(DeltaTime);

	//��� �޽��� �����̼� ����
	FlightRotation = FlightComp->GetRelativeRotation();

	//�ٴ� ����
	IsOnFloor = (HitResult.bBlockingHit && (HitResult.GetActor()->ActorHasTag("Floor")|| HitResult.GetComponent()->ComponentHasTag("Floor"))) ? true : false;

	if (IsOnFloor)
	{
		Gravity = GravityMin;
		GEngine->AddOnScreenDebugMessage(1, 0.1f, FColor::Green, FString::Printf(TEXT("On the floor!")));
		//Todo : UI�� �����ֱ�
	}
	else
	{
		//���⸦ �̵��� �����ϴ� �ڵ�
		float XYRollDirection = 1;
		float XYPitchDirection =1;
		Gravity = GravityMax;
		XYRollDirection = (FlightRotation.Roll > 0 && FlightRotation.Roll < 90) ? 10 : -10;
		XYPitchDirection = (FlightRotation.Pitch > 0 && FlightRotation.Pitch < 90) ? 10 : -10;

		AddActorWorldOffset(GetActorForwardVector() * (FMath::Abs(FlightRotation.Roll) / 45) * XYSpeed * XYRollDirection * DeltaTime, true);
		AddActorWorldOffset(GetActorRightVector() * (FMath::Abs(FlightRotation.Pitch) / 45) * XYSpeed * XYPitchDirection * DeltaTime, true);
	}

	//���⸦ Zero�� �����ϴ� �ڵ�
	if(!FMath::IsNearlyZero(FlightRotation.Roll))
	{
		if(FlightRotation.Roll > 0)
			FlightComp->AddRelativeRotation(FRotator(0, 0, -FlightRotation.Roll*1.5) * DeltaTime);
		else if(FlightRotation.Roll < 0)
			FlightComp->AddRelativeRotation(FRotator(0, 0, -FlightRotation.Roll * 1.5) * DeltaTime);
				
	}
	if (!FMath::IsNearlyZero(FlightRotation.Pitch))
	{
		if (FlightRotation.Pitch > 0)
			FlightComp->AddRelativeRotation(FRotator(-FlightRotation.Pitch * 1.5, 0, 0) * DeltaTime);
		else if (FlightRotation.Pitch < 0)
			FlightComp->AddRelativeRotation(FRotator(-FlightRotation.Pitch * 1.5, 0, 0) * DeltaTime);
	}
}

void ADronePawn::RotateWings(float DeltaTime) //��� �����緯 ȸ����Ű�� �ڵ�
{
	WingLeftComp->AddLocalRotation(FRotator(0, WingRotation * DeltaTime, 0));
	WingRightComp->AddLocalRotation(FRotator(0, WingRotation * DeltaTime, 0));
}



void ADronePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (AOPGPlayerController* PlayerController = Cast<AOPGPlayerController>(GetController()))
		{
			if (PlayerController->MoveXYAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveXYAction,
					ETriggerEvent::Triggered,
					this,
					&ADronePawn::MoveXY
				);
			}			
			if (PlayerController->MoveUDAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveUDAction,
					ETriggerEvent::Triggered,
					this,
					&ADronePawn::MoveUD
				);
			}
			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&ADronePawn::Look
				);
			}
			if (PlayerController->RollAction)
			{
				EnhancedInput->BindAction(
					PlayerController->RollAction,
					ETriggerEvent::Triggered,
					this,
					&ADronePawn::Roll
				);
			}
		}
	}
}

void ADronePawn::MoveXY(const FInputActionValue& value)
{
	if (!Controller) return;
	
	XYSpeed = IsOnFloor ? XYFloorSpeed : XYFloorSpeed * AirFriction;
	const FVector2D MoveInputXY = value.Get<FVector2D>();
	if (IsOnFloor) //���� ���� �� �̵�
	{
		if (!FMath::IsNearlyZero(MoveInputXY.X))
		{
			AddActorWorldOffset(GetActorForwardVector() * MoveInputXY.X * XYSpeed, true);
			//AddActorWorldOffset(GetControlRotation().RotateVector(FVector::ForwardVector) * FVector(1, 1, 0) * MoveInputXY.X * XYSpeed, true);
		}
		if (!FMath::IsNearlyZero(MoveInputXY.Y))
		{
			AddActorWorldOffset(GetActorRightVector() * MoveInputXY.Y * XYSpeed, true);
			//AddActorWorldOffset(GetControlRotation().RotateVector(FVector::RightVector) * MoveInputXY.Y * XYSpeed, true);
		}
	}
	else //���߿� ���� �� �̵�(�������� ���Ⱑ �ǵ��� �� �Է�)
	{
		float StopRoll = 1;
		float StopPitch = 1;
		if (!FMath::IsNearlyZero(MoveInputXY.X))
		{
			if (FlightRotation.Roll > 10 && FlightRotation.Roll < 90)
			{
				StopRoll = MoveInputXY.X > 0 ? 0 : 1;
			}
			else if (FlightRotation.Roll < -10 && FlightRotation.Roll > -90)
			{
				StopRoll = MoveInputXY.X > 0 ? 1 : 0;
			}
			FlightComp->AddRelativeRotation(FRotator(0, 0, MoveInputXY.X)* StopRoll);
			AddActorWorldOffset(GetActorForwardVector() * MoveInputXY.X * (FMath::Abs(FlightRotation.Roll) / 45) * XYFloorSpeed * 3, true);

		}
		if (!FMath::IsNearlyZero(MoveInputXY.Y))
		{
			if (FlightRotation.Pitch > 30 && FlightRotation.Pitch < 90)
			{
				StopPitch = MoveInputXY.Y > 0 ? 0 : 1;
			}
			else if (FlightRotation.Pitch < -30 && FlightRotation.Pitch > -90)
			{
				StopPitch = MoveInputXY.Y > 0 ? 1 : 0;
			}
			FlightComp->AddRelativeRotation(FRotator(MoveInputXY.Y* StopPitch, 0, 0));
			AddActorWorldOffset(GetActorRightVector() * MoveInputXY.Y * (FMath::Abs(FlightRotation.Pitch) / 45) * XYFloorSpeed, true);
		}
	}

}

void ADronePawn::MoveUD(const FInputActionValue& value)
{
	const float MoveInputUD = value.Get<float>();
	if (!FMath::IsNearlyZero(MoveInputUD))
	{
		//AddActorWorldOffset(FVector(0, 0, MoveInputUD* UDSpeed), true);
		AddActorWorldOffset(GetControlRotation().RotateVector(FVector::UpVector) * MoveInputUD * UDSpeed, true);
	}
}

void ADronePawn::Look(const FInputActionValue& value)
{
	FVector2D LookInput = value.Get<FVector2D>();

	AddControllerYawInput(LookInput.X * Sensitivity);
	AddControllerPitchInput(LookInput.Y * Sensitivity);

}

void ADronePawn::Roll(const FInputActionValue& value)
{
	float StopRoll = 1;
	float RollInput = value.Get<float>();
	if (!FMath::IsNearlyZero(RollInput) && !IsOnFloor) //�������� ������ Roll
	{
		if (FlightRotation.Pitch > 45 && FlightRotation.Pitch < 90)
		{
			StopRoll = RollInput > 0 ? 0 : 1;
		}
		else if (FlightRotation.Pitch < -45 && FlightRotation.Pitch > -90)
		{
			StopRoll = RollInput > 0 ? 1 : 0;
		}
		FlightComp->AddRelativeRotation(FRotator(RollInput * StopRoll, 0, 0), true);
	}
}

float ADronePawn::GetHealth() const
{
	return Health;
}

void ADronePawn::OperateHealth(float Amount, bool bIsPlus)
{
	if (bIsPlus)
	{
		Health = FMath::Clamp(Health+Amount, 0.0f, MaxHealth);
	}
	else
	{
		Health = FMath::Clamp(Health - Amount, 0.0f, MaxHealth);
	}
}

float ADronePawn::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	OperateHealth(DamageAmount, false);
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("%f"), Health));

	if (Health <= 0.0)
	{
		OnDeath();
	}

	return DamageAmount;
}

void ADronePawn::OnDeath()
{
	AOPGGameState* OPGGameState = GetWorld() ? GetWorld()->GetGameState<AOPGGameState>() : nullptr;
	if (OPGGameState)
	{
		OPGGameState->OnGameOver();
	}
}



