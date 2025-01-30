// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePlatform.h"
#include "GapPlatform.generated.h"

/**
 * 
 */
UCLASS()
class OBSTACLEPUZZLE_API AGapPlatform : public ABasePlatform
{
	GENERATED_BODY()

public:
	AGapPlatform();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh2;

};
