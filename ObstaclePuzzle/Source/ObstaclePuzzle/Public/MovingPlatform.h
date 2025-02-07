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

	UFUNCTION()
	virtual void SetActivateAttribute(float Attribute) override;

protected:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//UMovingComponent* MovingComp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attribute")
	float ActivateAttribute;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attribute")
	float MaxRange;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Platform")
	float MovingDamage;

	FVector StartLocation;
	FTimerHandle MovingTimerHandle;
	float RepeatCycle;
	bool IsVisible;

	virtual float GetDamage() override;
	virtual void ActivatePlatform(float DeltaTime);
	void SwitchingRedering();
	
};
