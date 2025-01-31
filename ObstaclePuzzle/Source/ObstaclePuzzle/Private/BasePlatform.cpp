// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlatform.h"
#include "Components/BoxComponent.h"
#include "DronePawn.h"


ABasePlatform::ABasePlatform()
{
	PrimaryActorTick.bCanEverTick = true;
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	BoxCollision->SetupAttachment(Scene);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetCollisionProfileName(TEXT("BlockAll"));
	StaticMesh->SetupAttachment(BoxCollision);


	StaticMesh->OnComponentBeginOverlap.AddDynamic(this, &ABasePlatform::OnPlatformOverlap);

	PlatformSpeed = 3;
	ShouldMovePlatform = true;

}

void ABasePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(ShouldMovePlatform) AddActorWorldOffset(FVector(-PlatformSpeed, 0, 0), true);
}

void ABasePlatform::OnPlatformOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor && OtherActor->ActorHasTag("Player")) || OtherComp && OtherComp->ComponentHasTag("Player"))
	{
		Cast<ADronePawn>(OtherActor)->Destroy();
	}
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("%s"), *OtherComp->GetName()));
}

void ABasePlatform::OnPlatformEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void ABasePlatform::ActivatePlatform(AActor* Activator)
{
}

FName ABasePlatform::GetPlatformType() const
{
	return FName();
}

void ABasePlatform::DestroyPlatform()
{
	Destroy();
}

