// Fill out your copyright notice in the Description page of Project Settings.


#include "DeadHiveCharacterBase.h"

// Sets default values
ADeadHiveCharacterBase::ADeadHiveCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADeadHiveCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeadHiveCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADeadHiveCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

