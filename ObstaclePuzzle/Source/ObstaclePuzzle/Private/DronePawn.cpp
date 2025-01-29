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
	Collision->SetCapsuleSize(40.0, 92.0);
	Collision->SetSimulatePhysics(false);
	SetRootComponent(Collision);

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMesh->SetRelativeLocation(FVector(0.0, 0.0, -92.0));
	SkeletalMesh->SetSimulatePhysics(false);
	SkeletalMesh->SetupAttachment(Collision);

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(Collision);
	SpringArmComp->TargetArmLength = 300.0f;
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
}

void ADronePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Gravity = IsOnFloor ? GravityMin: GravityMax;
	AddActorWorldOffset(GetActorUpVector() * Gravity, true, &HitResult);
	
	if (HitResult.bBlockingHit && HitResult.GetActor()->ActorHasTag("Floor"))
	{
		IsOnFloor = true;
	}
	else
	{
		IsOnFloor = false;
	}
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
	}
	if (!FMath::IsNearlyZero(MoveInputXY.Y))
	{
		AddActorWorldOffset(GetActorRightVector() * MoveInputXY.Y * XYSpeed, true);
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
	const float RollInput = value.Get<float>();
	if (!FMath::IsNearlyZero(RollInput))
	{
		AddControllerRollInput(RollInput * Sensitivity);
	}
}



