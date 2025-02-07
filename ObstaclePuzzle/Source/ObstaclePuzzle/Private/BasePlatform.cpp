// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlatform.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DronePawn.h"


ABasePlatform::ABasePlatform() :
	PlatformSpeed(1000),
	ShouldMovePlatform(true),
	PlatformDamage(20),
	bPlatformOverlapDoOnce(false)
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


	StaticMesh->OnComponentBeginOverlap.AddDynamic(this, &ABasePlatform::OnPlatformBeginOverlap);
	StaticMesh->OnComponentEndOverlap.AddDynamic(this, &ABasePlatform::OnPlatformEndOverlap);
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

void ABasePlatform::OnPlatformBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (((OtherActor && OtherActor->ActorHasTag("Player")) || OtherComp && OtherComp->ComponentHasTag("Player")) && !bPlatformOverlapDoOnce)
	{
		UGameplayStatics::ApplyDamage(OtherActor, PlatformDamage, nullptr, this, UDamageType::StaticClass());
		bPlatformOverlapDoOnce = true;
	}
}

void ABasePlatform::OnPlatformEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (((OtherActor && OtherActor->ActorHasTag("Player")) || OtherComp && OtherComp->ComponentHasTag("Player")) && !bPlatformOverlapDoOnce)
	{
		bPlatformOverlapDoOnce = false;
	}
}

void ABasePlatform::ActivatePlatform(float DeltaTime)
{

}

void ABasePlatform::SetActivateAttribute(float Attribute)
{

}

float ABasePlatform::GetDamage()
{
	return PlatformDamage;
}

FName ABasePlatform::GetPlatformType() const
{
	return FName();
}

void ABasePlatform::DestroyPlatform()
{
	Destroy();
}

