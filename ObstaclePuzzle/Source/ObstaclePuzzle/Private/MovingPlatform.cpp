// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"
#include "MovingComponent.h"

AMovingPlatform::AMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;
	//MovingComp = CreateDefaultSubobject<UMovingComponent>(TEXT("Moving"));

	StartLocation = GetActorLocation();
	MoveSpeed = 200;
	MaxRange = 200;

	RepeatCycle = 3;
	IsVisible = true;
}

void AMovingPlatform::SetMoveSpeed(float Speed)
{
	MoveSpeed = Speed;
}

void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	//GetWorld()->GetTimerManager().SetTimer(MovingTimerHandle, this, &AMovingPlatform::SwitchingRedering, RepeatCycle, true);
}

void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (FMath::Abs(GetActorLocation().Y - StartLocation.Y) > MaxRange)
		MoveSpeed *= -1;
	AddActorWorldOffset(FVector(0, MoveSpeed, 0) * DeltaTime);
}

void AMovingPlatform::SwitchingRedering()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("Switch")));
	if (IsVisible) //보이면 안 보이게
	{
		StaticMesh->SetCollisionProfileName(TEXT("NoCollision"));
		StaticMesh->SetVisibility(false);
		IsVisible = false;
	}
	else //안 보이면 보이게
	{
		StaticMesh->SetCollisionProfileName(TEXT("BlockAll"));
		StaticMesh->SetVisibility(true);
		IsVisible = true;
	}
}
