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

	PlatformSpeed = 1000;
	ShouldMovePlatform = true;

}

void ABasePlatform::SetPlatformSpeed(float Speed)
{
	PlatformSpeed = Speed;
}

void ABasePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(ShouldMovePlatform) AddActorWorldOffset(FVector(-PlatformSpeed, 0, 0)*DeltaTime, true);

	ActivatePlatform(DeltaTime);
}

void ABasePlatform::OnPlatformOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor && OtherActor->ActorHasTag("Player")) || OtherComp && OtherComp->ComponentHasTag("Player"))
	{
		Cast<ADronePawn>(OtherActor)->Destroy();
	}
}

void ABasePlatform::ActivatePlatform(float DeltaTime)
{

}

void ABasePlatform::SetActivateAttribute(float Attribute)
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

