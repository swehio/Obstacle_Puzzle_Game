// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformSpawnerShutter.h"
#include "OPGGameState.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

APlatformSpawnerShutter::APlatformSpawnerShutter() :
	SceneComp(nullptr),
	CollisionComp(nullptr),
	StaticMeshComp(nullptr),
	OpenPhase(0),
	bOpen(false),
	MoveSpeed(0),
	MoveRange(0),
	DoorStartLocation(FVector::ZeroVector)
{
	PrimaryActorTick.bCanEverTick = true;

	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	CollisionComp->SetupAttachment(RootComponent);
	CollisionComp->SetCollisionProfileName(TEXT("BlockAll"));

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(CollisionComp);
}

void APlatformSpawnerShutter::BeginPlay()
{
	Super::BeginPlay();
	DoorStartLocation = GetActorLocation();

	AGameStateBase* GameState = GetWorld()->GetGameState();
	if (GameState)
	{
		AOPGGameState* OPGGameState = Cast<AOPGGameState>(GameState);
		if (OPGGameState)
		{
			OPGGameState->FPhaseEnd.AddUFunction(this, FName("ComparePhase"));
		}
	}
}

void APlatformSpawnerShutter::ComparePhase()
{
	AGameStateBase* GameState = GetWorld()->GetGameState();
	if (GameState)
	{
		AOPGGameState* OPGGameState = Cast<AOPGGameState>(GameState);
		if (OPGGameState)
		{
			if (OPGGameState->CurrentPhase == OpenPhase && !bOpen)
			{
				bOpen = true;
			}
		}
	}
}

void APlatformSpawnerShutter::OpenDoor(float DeltaTime)
{
	if (GetActorLocation().Z - DoorStartLocation.Z < MoveRange)
		AddActorLocalOffset(FVector(0, 0, MoveSpeed) * DeltaTime);
	else
		Destroy();
}

// Called every frame
void APlatformSpawnerShutter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bOpen)
	{
		OpenDoor(DeltaTime);
	}
}