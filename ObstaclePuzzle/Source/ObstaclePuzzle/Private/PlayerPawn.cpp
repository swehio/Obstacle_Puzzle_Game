#include "PlayerPawn.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
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
}


void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent)) 
	{
		
	}

}

void APlayerPawn::Move(const FInputActionValue& value)
{
}

void APlayerPawn::Look(const FInputActionValue& value)
{
}

void APlayerPawn::StartJump(const FInputActionValue& value)
{
}

void APlayerPawn::StopJump(const FInputActionValue& value)
{
}

void APlayerPawn::StartSprint(const FInputActionValue& value)
{
}

void APlayerPawn::StopSprint(const FInputActionValue& value)
{
}

void APlayerPawn::OnDeath()
{
}


