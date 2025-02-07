// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Shutter.generated.h"

UCLASS()
class OBSTACLEPUZZLE_API AShutter : public AActor
{
	GENERATED_BODY()
	
public:	
	AShutter();
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* SceneComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Phase")
	int OpenPhase;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Phase")
	bool bOpen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Phase")
	int MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Phase")
	int MoveRange;

	FVector DoorStartLocation;

	UFUNCTION()
	void ComparePhase();

	void OpenDoor(float DeltaTime);

public:	
	virtual void Tick(float DeltaTime) override;

};
