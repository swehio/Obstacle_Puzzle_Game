
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "OPGGameState.generated.h"

UCLASS()
class OBSTACLEPUZZLE_API AOPGGameState : public AGameState
{
	GENERATED_BODY()
	
public: 
	AOPGGameState();

	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite, Category = "Level")
	int32 CurrentLevelIndex;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Level")
	int32 MaxLevel;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Phase")
	int32 PhaseDuration;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Phase")
	int32 CurrentPhase;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Phase")
	int32 MaxPhase;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Level")
	TArray<FName> LevelMapNames;

	FTimerHandle PhaseTimerHandle;
	FTimerHandle HUDUpdateTimerHandle;

	UFUNCTION(BlueprintCallable, Category = "Level")
	void OnGameOver();

	UFUNCTION(BlueprintCallable, Category = "Game")
	void StartGame();
	void StartLevel();
	void OnPhaseTimeUp();
	UFUNCTION(BlueprintCallable, Category = "Game")
	void EndLevel();
	void UpdateHUD();

	virtual void BeginPlay() override;
};
