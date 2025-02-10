// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "OPGGameInstance.generated.h"

UCLASS()
class OBSTACLEPUZZLE_API UOPGGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UOPGGameInstance();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GameData")
	int32 CurrentLevelIndex;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GameData")
	int32 PlayerHealth;
};
