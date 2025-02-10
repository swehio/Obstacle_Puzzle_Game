// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformSpawner.h"
#include "OPGGameState.h"
#include "Components/SphereComponent.h"

#include "PlatformSpawnRow.h"
#include "BasePlatform.h"

// Sets default values
APlatformSpawner::APlatformSpawner()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	SpawnVolume = CreateDefaultSubobject<USphereComponent>(TEXT("SpawnVolume"));
	SpawnVolume->SetupAttachment(RootComponent);

	PlatformDataTable = nullptr;
	SpawnRepeatTime = 5.0f;
	PlatformSpeed = 400;
	ActivePhase = 0;
	CurrentPhase = 0;
	bActive = false;
}

AActor* APlatformSpawner::SpawnActor(TSubclassOf<AActor> PlatformClass)
{
	if (!PlatformClass) return nullptr;

	float RandomNum = FMath::RandRange(0, 45);
	float RandomAttribute = FMath::RandRange(0, 150);
	AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(PlatformClass, GetActorLocation()+FVector(0, 0, RandomNum), FRotator(0, 0, RandomNum));

	Cast<ABasePlatform>(SpawnedActor)->SetPlatformSpeed(PlatformSpeed + (PlatformSpeed*CurrentPhase)/2);
	Cast<ABasePlatform>(SpawnedActor)->SetActivateAttribute(RandomAttribute);

	return SpawnedActor;
}

AActor* APlatformSpawner::SpawnRandomPlatform()
{
	if (FPlatformSpawnRow* SelectedRow = GetRandomPlatform())
	{
		if (UClass* ActualClass = SelectedRow->PlatformClass.Get())
		{
			return SpawnActor(ActualClass);
		}
	}
	return nullptr;
}

void APlatformSpawner::VoidSpawnRandomPlatform()
{
	if (bActive)
		AActor* SpawnedPlatform = SpawnRandomPlatform();
}

FPlatformSpawnRow* APlatformSpawner::GetRandomPlatform() const
{
	if(!PlatformDataTable) return nullptr;

	TArray<FPlatformSpawnRow*> AllRows;
	static const FString ContextString(TEXT("PlatformSpawnContext"));
	PlatformDataTable->GetAllRows(ContextString, AllRows);

	if (AllRows.IsEmpty()) return nullptr;

	float TotalChance = 0;
	for (const FPlatformSpawnRow* Row : AllRows)
	{
		if (Row)
		{
			TotalChance += Row->SpawnChance;
		}
	}

	const float RandValue = FMath::FRandRange(0.0f, TotalChance);
	float AccumulateChance = 0.0f;

	for (FPlatformSpawnRow* Row : AllRows)
	{
		AccumulateChance += Row->SpawnChance;
		if (RandValue <= AccumulateChance)
		{
			return Row;
		}
	}
	return nullptr;
}

// Called when the game starts or when spawned
void APlatformSpawner::BeginPlay()
{
	Super::BeginPlay();

	AGameStateBase* GameState = GetWorld()->GetGameState();
	if (GameState)
	{
		AOPGGameState* OPGGameState = Cast<AOPGGameState>(GameState);
		if (OPGGameState)
		{
			OPGGameState->FPhaseEnd.AddUFunction(this, FName("SpawnComparePhase"));
		}
	}
	
	GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &APlatformSpawner::VoidSpawnRandomPlatform, SpawnRepeatTime, true, 0.0f);
}

void APlatformSpawner::SpawnComparePhase()
{
	AGameStateBase* GameState = GetWorld()->GetGameState();
	if (GameState)
	{
		AOPGGameState* OPGGameState = Cast<AOPGGameState>(GameState);
		if (OPGGameState)
		{
			this->CurrentPhase = OPGGameState->CurrentPhase;
			if (CurrentPhase == ActivePhase && !bActive)
			{
				bActive = true;
			}
		}
	}

}

// Called every frame
void APlatformSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

