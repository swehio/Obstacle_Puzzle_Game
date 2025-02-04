// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingPlatform.h"

void ARotatingPlatform::ARotationgPlatform()
{
	PrimaryActorTick.bCanEverTick = true;
	ActivateAttribute = 1000;
}

void ARotatingPlatform::SetActivateAttribute(float Attribute)
{
	ActivateAttribute = Attribute;
}

void ARotatingPlatform::ActivatePlatform(float DeltaTime)
{
	Super::ActivatePlatform(DeltaTime);
	AddActorLocalRotation(FRotator(0, 0, ActivateAttribute) * DeltaTime);
}

