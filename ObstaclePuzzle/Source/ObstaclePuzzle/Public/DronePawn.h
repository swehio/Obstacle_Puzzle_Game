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

	UFUNCTION(BlueprintCallable, Category = "Game")
	void GameOver();

	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealth() const;
	UFUNCTION(BlueprintCallable, Category = "Health")
	void OperateHealth(float Amount, bool bIsPlus);
	UFUNCTION(BlueprintCallable, Category = "Health")
	float TakeDamage(float DamageAmount, AActor* DmageCauser);

protected:
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

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Health")
	float Health;

	UFUNCTION()
	void MoveXY(const FInputActionValue& value);
	UFUNCTION()
	void MoveUD(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);
	UFUNCTION()
	void Roll(const FInputActionValue& value);

	FHitResult HitResult;
	float Gravity;

	void RotateWings(float DeltaTime);
	void OnDeath();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void  EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
