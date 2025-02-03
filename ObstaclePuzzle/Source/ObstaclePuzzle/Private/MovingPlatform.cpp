// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"
#include "MovingComponent.h"

AMovingPlatform::AMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;
	//MovingComp = CreateDefaultSubobject<UMovingComponent>(TEXT("Moving"));

	StartLocation = GetActorLocation();
	ActivateAttribute = 200;
	MaxRange = 200;

	RepeatCycle = 3;
	IsVisible = true;
}

void AMovingPlatform::ActivatePlatform(float DeltaTime)
{
	if (FMath::Abs(GetActorLocation().Y - StartLocation.Y) > MaxRange)
		ActivateAttribute *= -1;
	AddActorWorldOffset(FVector(0, ActivateAttribute, 0) * DeltaTime);
}

void AMovingPlatform::SetActivateAttribute(float Attribute)
{
	this->ActivateAttribute = Attribute;
}

void AMovingPlatform::SwitchingRedering()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("Switch")));
	if (IsVisible) //보이면 안 보이게
	{
		StaticMesh->SetCollisionProfileName(TEXT("NoCollision"));
		StaticMesh->SetVisibility(false);
		IsVisible = false;
	}
	else //안 보이면 보이게
	{
		StaticMesh->SetCollisionProfileName(TEXT("BlockAll"));
		StaticMesh->SetVisibility(true);
		IsVisible = true;
	}
}
