// Fill out your copyright notice in the Description page of Project Settings.


#include "OPGCharacter.h"

// Sets default values
AOPGCharacter::AOPGCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOPGCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOPGCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOPGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

