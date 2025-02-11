// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformInterface.h"
#include "BasePlatform.generated.h"

class UStaticMeshComponent;
class UBoxComponent;

UCLASS()
class OBSTACLEPUZZLE_API ABasePlatform : public AActor, public IPlatformInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePlatform();

	void SetPlatformSpeed(float Speed);
	virtual void SetActivateAttribute(float ActivateAttribute) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform")
	FName PlatformType;
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Scene;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform")
	float PlatformSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform")
	bool ShouldMovePlatform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform")
	float PlatformDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform")
	bool bPlatformOverlapDoOnce;


	UFUNCTION(BlueprintCallable, Category = "Platform")
	virtual float GetDamage();

	virtual void Tick(float DeltaTime);
	virtual void OnPlatformBeginOverlap(UPrimitiveComponent* OverlappedComp, 
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, 
		bool bFromSweep, 
		const FHitResult& SweepResult) override;
	virtual void OnPlatformEndOverlap(UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex) override;
	virtual void ActivatePlatform(float DeltaTime) override;

	virtual FName GetPlatformType() const override;
	void DestroyPlatform();

public:	

};
