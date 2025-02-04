// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DronePawn.generated.h"

class UBoxComponent;
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

	void GameOver();
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting|Look")
	float Sensitivity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting|Move")
	float XYSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting|Move")
	float UDSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting|Move")
	float AirFriction;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Setting|Move")
	float GravityMin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting|Move")
	float GravityMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting|Move")
	float XYFloorSpeed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Setting|Move")
	bool IsOnFloor;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MoveSetting|Move")
	FRotator FlightRotation;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MoveSetting|Move")
	FRotator FlightStartRotation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MoveSetting")
	float WingRotation;

	UFUNCTION()
	void MoveXY(const FInputActionValue& value);
	UFUNCTION()
	void MoveUD(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);
	UFUNCTION()
	void Roll(const FInputActionValue& value);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* BoxCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* FlightComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* WingLeftComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* WingRightComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCameraComponent* CameraComp;

	FHitResult HitResult;
	float Gravity;

	void RotateWings(float DeltaTime);

	virtual void  EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
