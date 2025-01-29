// Fill out your copyright notice in the Description page of Project Settings.


#include "DronePawn.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "OPGPlayerController.h"
#include "EnhancedInputComponent.h"

// Sets default values
ADronePawn::ADronePawn()
{
	PrimaryActorTick.bCanEverTick = true;

	Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	Collision->SetCollisionProfileName(TEXT("BlockAll"));
	Collision->SetCapsuleSize(40.0, 40.0);
	Collision->SetSimulatePhysics(false);
	SetRootComponent(Collision);

	FlightComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlightMesh"));
	FlightComp->SetSimulatePhysics(false);
	FlightComp->SetupAttachment(Collision);

	WingLeftComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WingLeftMesh"));
	WingLeftComp->SetSimulatePhysics(false);
	WingLeftComp->SetupAttachment(FlightComp);

	WingRightComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WingRightMesh"));
	WingRightComp->SetSimulatePhysics(false);
	WingRightComp->SetupAttachment(FlightComp);

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(Collision);
	SpringArmComp->TargetArmLength = 100.0f;
	SpringArmComp->SetRelativeLocation(FVector(0.0, 0.0, 40.0));
	SpringArmComp->bUsePawnControlRotation = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false;

	Sensitivity = 1;
	XYSpeed = 0;
	UDSpeed = 10;
	XYFloorSpeed = 3;
	IsOnFloor = true;
	AirFriction = 0.4f;
	GravityMax = -2;
	GravityMin = -1;
	RollNum = 0;
	WingRotation = 720;
}

void ADronePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorWorldOffset(GetActorUpVector() * Gravity * DeltaTime, true, &HitResult);
	RollNum = GetControlRotation().Roll;
	
	IsOnFloor = (HitResult.bBlockingHit && HitResult.GetActor()->ActorHasTag("Floor")) ? true : false;

	if (IsOnFloor)
	{
		Gravity = GravityMin;
	}
	else
	{
		Gravity = GravityMax;
		if (RollNum > 0 && RollNum < 90)
		{
			AddActorWorldOffset(GetActorRightVector() * (RollNum / 45) * 30 * DeltaTime, true);
		}
		else if (RollNum > 270 && RollNum < 360)
		{
			AddActorWorldOffset(-GetActorRightVector() * ((360 - RollNum) / 45) * 30 *DeltaTime, true);
		}

	}

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

void ADronePawn::MoveUD(const FInputActionValue& value)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("MoveUpDown")));
	const float MoveInputUD = value.Get<float>();
	if (!FMath::IsNearlyZero(MoveInputUD))
	{
		AddActorWorldOffset(FVector(0, 0, MoveInputUD* UDSpeed), true);
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
	float StopRoll = 1;
	if (!FMath::IsNearlyZero(RollInput) && !IsOnFloor)
	{
		if (RollNum > 45 && RollNum < 90 )
		{
			StopRoll = RollInput > 0 ? 0 : 1;
		}
		else if (RollNum >270 && RollNum < 315)
		{
			StopRoll = RollInput > 0 ? 1 : 0;
		}
		AddControllerRollInput(RollInput * StopRoll * Sensitivity);
	}
}



