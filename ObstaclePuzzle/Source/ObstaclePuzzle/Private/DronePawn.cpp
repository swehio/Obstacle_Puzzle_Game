// Fill out your copyright notice in the Description page of Project Settings.


#include "DronePawn.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "OPGPlayerController.h"
#include "EnhancedInputComponent.h"

// Sets default values
ADronePawn::ADronePawn()
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

	Sensitivity = 1;
	XYSpeed = 1;
	UDSpeed = 4;
	XYFloorSpeed = 3;
	IsOnFloor = true;
	AirFriction = 0.7f;
	GravityMax = -8;
	GravityMin = -1;
	FlightRotation = FlightComp->GetRelativeRotation();
	FlightStartRotation = FlightComp->GetRelativeRotation();
	WingRotation = 720;
	FlightRotationSpeed = 10;
}



void ADronePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorWorldOffset(GetActorUpVector() * Gravity * DeltaTime, true, &HitResult);
	FlightRotation = FlightComp->GetRelativeRotation();
	
	IsOnFloor = (HitResult.bBlockingHit && (HitResult.GetActor()->ActorHasTag("Floor")|| HitResult.GetComponent()->ComponentHasTag("Floor"))) ? true : false;

	if (IsOnFloor)
	{
		Gravity = GravityMin;
		GEngine->AddOnScreenDebugMessage(1, 0.1f, FColor::Green, FString::Printf(TEXT("On the floor!")));
	}
	else
	{
		float XYRollDirection = 1;
		float XYPitchDirection =1;
		Gravity = GravityMax;
		XYRollDirection = (FlightRotation.Roll > 0 && FlightRotation.Roll < 90) ? 500 : -500;
		XYPitchDirection = (FlightRotation.Pitch > 0 && FlightRotation.Pitch < 90) ? 500 : -500;

		AddActorWorldOffset(GetActorForwardVector() * (FMath::Abs(FlightRotation.Roll) / 45) * XYSpeed * XYRollDirection * DeltaTime, true);
		AddActorWorldOffset(GetActorRightVector() * (FMath::Abs(FlightRotation.Pitch) / 45) * XYSpeed * XYPitchDirection * DeltaTime, true);
	}

	RotateWings(DeltaTime);

	//if (!FMath::IsNearlyZero(FlightRotation.Roll))
	//{
	//	if(FlightRotation.Roll > 0)
	//		FlightComp->AddRelativeRotation(FRotator(-1, 0, 0) * DeltaTime);
	//	else
	//		FlightComp->AddRelativeRotation(FRotator(1, 0, 0) * DeltaTime);
	//}
	//if (!FMath::IsNearlyZero(FlightRotation.Pitch))
	//{
	//	if (FlightRotation.Pitch > 0)
	//		FlightComp->AddRelativeRotation(FRotator(0, 0, -1) * DeltaTime);
	//	else
	//		FlightComp->AddRelativeRotation(FRotator(0, 0, 1) * DeltaTime);
	//}
	
	//SetActorRotation(FRotator(0, GetControlRotation().Yaw, 0));
}

void ADronePawn::RotateWings(float DeltaTime)
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
	if (IsOnFloor)
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
	else
	{
		float StopRoll = 1;
		float StopPitch = 1;
		if (!FMath::IsNearlyZero(MoveInputXY.X))
		{
			if (FlightRotation.Roll > 45 && FlightRotation.Roll < 90)
			{
				StopRoll = MoveInputXY.X > 0 ? 0 : 1;
			}
			else if (FlightRotation.Roll < -45 && FlightRotation.Roll > -90)
			{
				StopRoll = MoveInputXY.X > 0 ? 1 : 0;
			}
			FlightComp->AddRelativeRotation(FRotator(0, 0, MoveInputXY.X)* StopRoll);
		}
		if (!FMath::IsNearlyZero(MoveInputXY.Y))
		{
			if (FlightRotation.Pitch > 45 && FlightRotation.Pitch < 90)
			{
				StopPitch = MoveInputXY.Y > 0 ? 0 : 1;
			}
			else if (FlightRotation.Pitch < -45 && FlightRotation.Pitch > -90)
			{
				StopPitch = MoveInputXY.Y > 0 ? 1 : 0;
			}
			FlightComp->AddRelativeRotation(FRotator(MoveInputXY.Y* StopPitch, 0, 0));
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
	float RollInput = value.Get<float>();
	if (!FMath::IsNearlyZero(RollInput) && !IsOnFloor)
	{
		//AddControllerRollInput(RollInput * Sensitivity);
		FlightComp->AddRelativeRotation(FRotator(RollInput, 0, 0), true);
	}
}

void ADronePawn::GameOver()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("GameOver")));
}

void ADronePawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	GameOver();
	Super::EndPlay(EndPlayReason);
}

