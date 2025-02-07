// Fill out your copyright notice in the Description page of Project Settings.


#include "OPGGameState.h"
#include "OPGPlayerController.h"
#include "OPGGameInstance.h"
#include "Kismet/GameplayStatics.h"

AOPGGameState::AOPGGameState() :
	CurrentLevelIndex(0),
	MaxLevel(3),
	PhaseDuration(20),
	CurrentPhase(0),
	MaxPhase(3)
{
}

void AOPGGameState::BeginPlay()
{
	Super::BeginPlay();

	StartLevel();

	GetWorldTimerManager().SetTimer(HUDUpdateTimerHandle, this, &AOPGGameState::UpdateHUD, 0.1f, true);
}

void AOPGGameState::StartGame()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName("Level1"));

	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AOPGPlayerController* OPGPlayerController = Cast<AOPGPlayerController>(PlayerController))
		{
			OPGPlayerController->SetPause(false);
		}
	}
	
}

void AOPGGameState::StartLevel()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AOPGPlayerController* OPGPlayerController = Cast<AOPGPlayerController>(PlayerController))
		{
			OPGPlayerController->ShowGameHUD();
		}
	}

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UOPGGameInstance* OPGGameInstance = Cast<UOPGGameInstance>(GameInstance);
		if (OPGGameInstance)
		{
			CurrentLevelIndex = OPGGameInstance->CurrentLevelIndex;
		}
	}

	GetWorldTimerManager().SetTimer(PhaseTimerHandle, this, &AOPGGameState::OnPhaseTimeUp, PhaseDuration, false);
}

void AOPGGameState::OnPhaseTimeUp()
{
	CurrentPhase++;
}


void AOPGGameState::OnGameOver()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AOPGPlayerController* OPGPlayerController = Cast<AOPGPlayerController>(PlayerController))
		{
			OPGPlayerController->SetPause(true);
			OPGPlayerController->ShowRestartMenu();
		}
	}
}

void AOPGGameState::EndLevel()
{
	GetWorldTimerManager().ClearTimer(PhaseTimerHandle);
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("EndLevel Work")));

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UOPGGameInstance* OPGGameInstance = Cast<UOPGGameInstance>(GameInstance);
		if (OPGGameInstance)
		{
			++CurrentLevelIndex;
			OPGGameInstance->CurrentLevelIndex = CurrentLevelIndex;

			if (CurrentLevelIndex >= MaxLevel)
			{
				OnGameOver();
				return;
			}
			if (LevelMapNames.IsValidIndex(CurrentLevelIndex))
			{
				UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);
			}
			else
			{
				OnGameOver();
			}
		}
	}
}

void AOPGGameState::UpdateHUD()
{
}


