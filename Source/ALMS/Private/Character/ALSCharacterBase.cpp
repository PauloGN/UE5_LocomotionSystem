// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ALSCharacterBase.h"


AALSCharacterBase::AALSCharacterBase()
{

	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), "WeaponHandSocket");
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}


void AALSCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}
