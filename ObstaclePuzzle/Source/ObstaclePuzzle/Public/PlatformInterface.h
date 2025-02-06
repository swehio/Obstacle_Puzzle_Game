// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlatformInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlatformInterface : public UInterface
{
	GENERATED_BODY()
};

class OBSTACLEPUZZLE_API IPlatformInterface
{
	GENERATED_BODY()

public:
	UFUNCTION()
	virtual void OnPlatformBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) = 0;
	virtual void OnPlatformEndOverlap(UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex) = 0;
	virtual void ActivatePlatform(float DeltaTime) = 0;
	virtual void SetActivateAttribute(float Attribute) = 0;
	virtual FName GetPlatformType() const = 0;

	
};
