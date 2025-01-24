
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

class UCapsuleComponent;
class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

UCLASS()
class OBSTACLEPUZZLE_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	APlayerPawn();

protected:
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Setting")
	float SprintSpeedMultiplier;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Setting")
	float Sensitivity;

	UFUNCTION()
	void Move(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);
	UFUNCTION()
	void StartJump(const FInputActionValue& value);
	UFUNCTION()
	void StopJump(const FInputActionValue& value);
	UFUNCTION()
	void StartSprint(const FInputActionValue& value);
	UFUNCTION()
	void StopSprint(const FInputActionValue& value);

	void OnDeath();

	UCapsuleComponent* Collision;
	USkeletalMeshComponent* SkeletalMesh;
	USpringArmComponent* SpringArmComp;
	UCameraComponent* CameraComp;



	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	float NomalSpeed;
	float SprintSpeed;
};
