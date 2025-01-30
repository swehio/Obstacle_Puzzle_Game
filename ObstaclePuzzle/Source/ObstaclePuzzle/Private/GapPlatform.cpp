// Fill out your copyright notice in the Description page of Project Settings.


#include "GapPlatform.h"
#include "Components/BoxComponent.h"

AGapPlatform::AGapPlatform()
{
	SetRootComponent(Scene);
	BoxCollision->SetupAttachment(Scene);
	StaticMesh->SetupAttachment(BoxCollision);
	StaticMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh2"));
	StaticMesh2->SetupAttachment(BoxCollision);
}


