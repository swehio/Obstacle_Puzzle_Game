// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePlatform.h"
#include "MovingPlatform.generated.h"

class UMovingComponent;

UCLASS()
class OBSTACLEPUZZLE_API AMovingPlatform : public ABasePlatform
{
	GENERATED_BODY()

public:
	AMovingPlatform();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMovingComponent* MovingComp;
	FTimerHandle MovingTimerHandle;
	float RepeatCycle;
	bool IsVisible;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void SwitchingRedering();
	
};
