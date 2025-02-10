// Fill out your copyright notice in the Description page of Project Settings.


#include "OPGGameState.h"
#include "OPGPlayerController.h"
#include "DronePawn.h"
#include "OPGGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"

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


	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UOPGGameInstance* OPGGameInstance = Cast<UOPGGameInstance>(GameInstance);
		if (OPGGameInstance)
		{
			CurrentLevelIndex = OPGGameInstance->CurrentLevelIndex;

			if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
			{
				if (AOPGPlayerController* OPGPlayerController = Cast<AOPGPlayerController>(PlayerController))
				{
					OPGPlayerController->ShowGameHUD();
					Cast<ADronePawn>(OPGPlayerController->GetPawn())->SetHealth(OPGGameInstance->PlayerHealth);
				}
			}
			
		}
	}

	if (FPhaseEnd.IsBound() == true) FPhaseEnd.Broadcast();

	GetWorldTimerManager().SetTimer(PhaseTimerHandle, this, &AOPGGameState::OnPhaseTimeUp, PhaseDuration, true);
}

void AOPGGameState::OnPhaseTimeUp()
{
	CurrentPhase++;
	if (FPhaseEnd.IsBound() == true) FPhaseEnd.Broadcast();
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

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UOPGGameInstance* OPGGameInstance = Cast<UOPGGameInstance>(GameInstance);
		if (OPGGameInstance)
		{
			++CurrentLevelIndex;
			OPGGameInstance->CurrentLevelIndex = CurrentLevelIndex;
			
			if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
			{
				if (AOPGPlayerController* OPGPlayerController = Cast<AOPGPlayerController>(PlayerController))
				{
					OPGGameInstance->PlayerHealth = Cast<ADronePawn>(OPGPlayerController->GetPawn())->GetHealth();
				}
			}

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
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AOPGPlayerController* OPGPlayerController = Cast<AOPGPlayerController>(PlayerController))
		{
			if (UUserWidget* HUDWidget = OPGPlayerController->GetHUDWidget())
			{
				if (UTextBlock* TimeText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("PhaseRemainTime"))))
				{
					float RemainingTime = GetWorldTimerManager().GetTimerRemaining(PhaseTimerHandle);
					TimeText->SetText(FText::FromString(FString::Printf(TEXT("%.1f"), RemainingTime)));
				}
				if (UTextBlock* LevelText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("CurrentLevel"))))
				{
					LevelText->SetText(FText::FromString(FString::Printf(TEXT("Zone %d"), CurrentLevelIndex+1)));
				}
				if (UTextBlock* PhaseText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("CurrentPhase"))))
				{
					PhaseText->SetText(FText::FromString(FString::Printf(TEXT("Phase %d"), CurrentPhase + 1)));
				}
			}
		}
	}

}


