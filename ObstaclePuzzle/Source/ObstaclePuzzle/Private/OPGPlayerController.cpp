// Fill out your copyright notice in the Description page of Project Settings.


#include "OPGPlayerController.h"
#include "OPGGameState.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"

AOPGPlayerController::AOPGPlayerController() :
	InputMappingContext(nullptr),
	MoveXYAction(nullptr),
	MoveUDAction(nullptr),
	RollAction(nullptr),
	LookAction(nullptr),
	HUDWidgetClass(nullptr),
	HUDWidgetInstance(nullptr),
	StartMenuWidgetClass(nullptr),
	StartMenuWidgetInstance(nullptr),
	RestartMenuWidgetClass(nullptr),
	RestartMenuWidgetInstance(nullptr),
	SelectMapMenuWidgetClass(nullptr),
	SelectMapMenuWidgetInstance(nullptr)
{
}

void AOPGPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}

	FString CurrentMapName = GetWorld()->GetMapName();
	if (CurrentMapName.Contains("LevelStart"))
	{
		ShowStartMenu();
	}
	else if (CurrentMapName.Contains("LevelSelectMap"))
	{
		ShowSelectMapMenu();
	}
}

void AOPGPlayerController::InitializeWidgetInstance()
{
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	if (StartMenuWidgetInstance)
	{
		StartMenuWidgetInstance->RemoveFromParent();
		StartMenuWidgetInstance = nullptr;
	}

	if (RestartMenuWidgetInstance)
	{
		RestartMenuWidgetInstance->RemoveFromParent();
		RestartMenuWidgetInstance = nullptr;
	}
}

UUserWidget* AOPGPlayerController::GetHUDWidget() const
{
	return HUDWidgetInstance;;
}

void AOPGPlayerController::ShowGameHUD()
{
	InitializeWidgetInstance();

	if (HUDWidgetClass)
	{
		HUDWidgetInstance = CreateWidget<UUserWidget>(this, HUDWidgetClass);
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->AddToViewport();

			bShowMouseCursor = false;
			SetInputMode(FInputModeGameOnly());
		}

		AOPGGameState* OPGGameState = GetWorld() ? GetWorld()->GetGameState<AOPGGameState>() : nullptr;
		if (OPGGameState)
		{
			OPGGameState->UpdateHUD();
		}
	}
}



void AOPGPlayerController::ShowStartMenu()
{
	InitializeWidgetInstance();

	if (StartMenuWidgetClass)
	{
		StartMenuWidgetInstance = CreateWidget<UUserWidget>(this, StartMenuWidgetClass);
		if (StartMenuWidgetInstance)
		{
			StartMenuWidgetInstance->AddToViewport();

			bShowMouseCursor = true;
			SetInputMode(FInputModeUIOnly());
		}
	}
}

void AOPGPlayerController::ShowSelectMapMenu()
{
	InitializeWidgetInstance();


	if (SelectMapMenuWidgetClass)
	{
		SelectMapMenuWidgetInstance = CreateWidget<UUserWidget>(this, SelectMapMenuWidgetClass);
		
		if (SelectMapMenuWidgetInstance)
		{
			SelectMapMenuWidgetInstance->AddToViewport();

			bShowMouseCursor = true;
			SetInputMode(FInputModeUIOnly());
		}
	}
}

void AOPGPlayerController::ShowRestartMenu()
{
	InitializeWidgetInstance();

	if (RestartMenuWidgetClass)
	{
		RestartMenuWidgetInstance = CreateWidget<UUserWidget>(this, RestartMenuWidgetClass);
		if (RestartMenuWidgetInstance)
		{
			RestartMenuWidgetInstance->AddToViewport();

			bShowMouseCursor = true;
			SetInputMode(FInputModeUIOnly());
		}
	}
}
