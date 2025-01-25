

#include "OPGPlatform.h"
#include "Components/BoxComponent.h"

AOPGPlatform::AOPGPlatform()
{
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	BoxCollision->SetupAttachment(Scene);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(BoxCollision);
}

void AOPGPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void AOPGPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOPGPlatform::SwitchRendering()
{

}

void AOPGPlatform::Drop()
{

}
