#include "PlayerPawn.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "OPGPlayerController.h"
#include "EnhancedInputComponent.h"

APlayerPawn::APlayerPawn()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	Collision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
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

	NomalSpeed = 5.0f;
	SprintSpeedMultiplier = 1.7f;
	SprintSpeed = NomalSpeed * SprintSpeedMultiplier;
	Sensitivity = 1.0f;
}


void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent)) 
	{
		if (AOPGPlayerController* PlayerController = Cast<AOPGPlayerController>(GetController()))
		{
			if (PlayerController->MoveAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Triggered,
					this,
					&APlayerPawn::Move
				);
			}
			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&APlayerPawn::Look
				);
			}

		}
	}

}

void APlayerPawn::Move(const FInputActionValue& value)
{
	if (!Controller) return;

	const FVector2D MoveInput = value.Get<FVector2D>();
	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		AddActorWorldOffset(GetControlRotation().RotateVector(FVector::ForwardVector)*FVector(1, 1, 0) * MoveInput.X *NomalSpeed);
	}
	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		AddActorWorldOffset(GetControlRotation().RotateVector(FVector::RightVector) * MoveInput.Y * NomalSpeed);
	}
}

void APlayerPawn::Look(const FInputActionValue& value)
{
	FVector2D LookInput = value.Get<FVector2D>();

	AddControllerYawInput(LookInput.X * Sensitivity);
	AddControllerPitchInput(LookInput.Y * Sensitivity);
}



