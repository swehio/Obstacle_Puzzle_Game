// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PlatformSpawnRow.generated.h"

USTRUCT(BlueprintType)
struct FPlatformSpawnRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PlatformName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> PlatformClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnChance;

};
