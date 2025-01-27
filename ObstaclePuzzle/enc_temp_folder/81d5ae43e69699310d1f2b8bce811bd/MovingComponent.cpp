
#include "MovingComponent.h"

UMovingComponent::UMovingComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	StartLocation = FVector(0, 0, 0);
	MoveDist = 0.0f;
	MoveSpeed = 1.0f;
	MaxRange = 50.0f;
	addSpeed = 1.0f;
	MoveX = false;
	MoveY = false;
	MoveZ = false;

}


void UMovingComponent::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetOwner()->GetActorLocation();
}


void UMovingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (MoveX == true || MoveY == true || MoveZ == true)
	{
		MoveDist += MoveSpeed;

		if (MoveDist < -MaxRange)
		{
			MoveSpeed = 1.0f;
		}
		else if (MoveDist > MaxRange)
		{
			MoveSpeed = -1.0f;
		}

		if (MoveX == true)
		{
			GetOwner()->SetActorLocation(StartLocation+FVector(MoveDist, 0, 0));
		}
		else if (MoveY == true)
		{
			GetOwner()->SetActorLocation(StartLocation + FVector(0, MoveDist, 0));
		}
		else if (MoveZ == true)
		{
			GetOwner()->SetActorLocation(StartLocation + FVector(0, 0, MoveDist));
		}
	}


		
}

