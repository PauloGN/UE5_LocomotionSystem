// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ALSCharacterBase.h"

// Sets default values
AALSCharacterBase::AALSCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AALSCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AALSCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AALSCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

