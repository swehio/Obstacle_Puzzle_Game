// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformSpawner.generated.h"



UCLASS()
class OBSTACLEPUZZLE_API APlatformSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatformSpawner();

	UFUNCTION()
	AActor* SpawnActor(TSubclassOf<AActor> PlatformClass);
	UFUNCTION(BlueprintCallable, Category = "Spawning")
	AActor* SpawnRandomPlatform();
	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void VoidSpawnRandomPlatform();
	UFUNCTION()
	void SpawnComparePhase();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USphereComponent* SpawnVolume; //앞에 class 붙이면 전방선언이구나!
	UPROPERTY(EditAnywhere, BlueprintReadWrite , Category = "Spawning")
	UDataTable*  PlatformDataTable;
	FTimerHandle SpawnTimerHandle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnRepeatTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float PlatformSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	int ActivePhase;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Spawning")
	bool bActive;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Spawning")
	int CurrentPhase;


	struct FPlatformSpawnRow* GetRandomPlatform() const;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
