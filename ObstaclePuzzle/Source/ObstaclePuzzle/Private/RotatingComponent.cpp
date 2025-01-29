#include "RotatingComponent.h"

URotatingComponent::URotatingComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	RotationSpeedX = 1.0f;
	RotationSpeedY = 1.0f;
	RotationSpeedZ = 1.0f;
}

void URotatingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	GetOwner()->AddActorLocalRotation(FRotator(RotationSpeedY, RotationSpeedZ, RotationSpeedX)*DeltaTime);
	
}

