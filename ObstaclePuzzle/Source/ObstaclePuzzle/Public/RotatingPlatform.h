// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePlatform.h"
#include "RotatingPlatform.generated.h"

UCLASS()
class OBSTACLEPUZZLE_API ARotatingPlatform : public ABasePlatform
{
	GENERATED_BODY()

public:
	void ARotationgPlatform();
	virtual void SetActivateAttribute(float Attribute) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	float ActivateAttribute;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform")
	float RotatingDamage;

	virtual void ActivatePlatform(float DeltaTime) override;
	virtual float GetDamage() override;
	
};
