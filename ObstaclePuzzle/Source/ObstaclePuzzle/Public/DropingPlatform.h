// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePlatform.h"
#include "DropingPlatform.generated.h"

UCLASS()
class OBSTACLEPUZZLE_API ADropingPlatform : public ABasePlatform
{
	GENERATED_BODY()

public:
	ADropingPlatform();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DropDelay;

	FTimerHandle DropTimerHandle;
	virtual void ActivatePlatform(AActor* Activator) override;
	void DropPlatform();
	
};
