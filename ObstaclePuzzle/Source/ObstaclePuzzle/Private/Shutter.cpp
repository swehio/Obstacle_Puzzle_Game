// Fill out your copyright notice in the Description page of Project Settings.


#include "Shutter.h"
#include "OPGGameState.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
AShutter::AShutter():
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
	
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(SceneComp);

	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	CollisionComp->SetupAttachment(SceneComp);
	CollisionComp->SetCollisionProfileName(TEXT("BlockAll"));

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneComp);


}

// Called when the game starts or when spawned
void AShutter::BeginPlay()
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

void AShutter::ComparePhase()
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

void AShutter::OpenDoor(float DeltaTime)
{
	if (GetActorLocation().Z - DoorStartLocation.Z < MoveRange)
		AddActorLocalOffset(FVector(0, 0, MoveSpeed) * DeltaTime);
	else
		Destroy();
}

// Called every frame
void AShutter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bOpen)
	{
		OpenDoor(DeltaTime);
	}
}

