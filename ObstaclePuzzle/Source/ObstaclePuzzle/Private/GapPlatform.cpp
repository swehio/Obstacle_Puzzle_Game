// Fill out your copyright notice in the Description page of Project Settings.


#include "GapPlatform.h"
#include "Components/BoxComponent.h"

AGapPlatform::AGapPlatform()
{
	GapDamage = 30;
}

float AGapPlatform::GetDamage()
{
	return GapDamage;
}


