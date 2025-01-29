// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OPGPlatform.generated.h"

class UStaticMeshComponent;
class UBoxComponent;

UCLASS()
class OBSTACLEPUZZLE_API AOPGPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	AOPGPlatform();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Scene;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxCollision;


	FTimerHandle PlatformTimerHandle;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Timer")
	float RepeatTime;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Timer")
	float DropDelay;


	void SwitchRendering();
	void Drop();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
