// Fill out your copyright notice in the Description page of Project Settings.


#include "OPGPlayerController.h"
#include "EnhancedInputSubsystems.h"

AOPGPlayerController::AOPGPlayerController() :
	InputMappingContext(nullptr),
	MoveXYAction(nullptr),
	MoveUDAction(nullptr),
	LookAction(nullptr), 
	RollAction(nullptr)
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
}
