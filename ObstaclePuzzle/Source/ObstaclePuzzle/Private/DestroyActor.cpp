// Fill out your copyright notice in the Description page of Project Settings.


#include "DestroyActor.h"
#include "Components/BoxComponent.h"

// Sets default values
ADestroyActor::ADestroyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	Collision->SetCollisionProfileName("OverlapAll");
	SetRootComponent(Collision);
	Collision->OnComponentBeginOverlap.AddDynamic(this, &ADestroyActor::OnPlatformOverlap);

}

void ADestroyActor::OnPlatformOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	OtherActor->Destroy();
}


