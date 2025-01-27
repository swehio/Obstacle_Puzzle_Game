// Fill out your copyright notice in the Description page of Project Settings.


#include "DropingPlatform.h"
#include "Kismet/GameplayStatics.h"

ADropingPlatform::ADropingPlatform()
{
	DropDelay = 3;
	StaticMesh->SetSimulatePhysics(false);
}

void ADropingPlatform::ActivatePlatform(AActor* Activator)
{
	GetWorld()->GetTimerManager().SetTimer(
		DropTimerHandle, 
		this, 
		&ADropingPlatform::DropPlatform, 
		DropDelay,
		false);
	
}

void ADropingPlatform::DropPlatform()
{
	StaticMesh->SetSimulatePhysics(true);
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("drop!")));
}
