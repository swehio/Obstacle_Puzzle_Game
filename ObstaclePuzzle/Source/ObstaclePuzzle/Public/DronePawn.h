// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DronePawn.generated.h"

class UCapsuleComponent;
class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

UCLASS()
class OBSTACLEPUZZLE_API ADronePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADronePawn();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveSetting")
	float Sensitivity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveSetting")
	float XYSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveSetting")
	float UDSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveSetting")
	float AirFriction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveSetting")
	float GravityMin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveSetting")
	float GravityMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveSetting")
	float XYFloorSpeed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MoveSetting")
	bool IsOnFloor;

	UFUNCTION()
	void MoveXY(const FInputActionValue& value);
	UFUNCTION()
	void MoveUD(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);
	UFUNCTION()
	void Roll(const FInputActionValue& value);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCapsuleComponent* Collision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USkeletalMeshComponent* SkeletalMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCameraComponent* CameraComp;
	FHitResult HitResult;
	float Gravity;

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
