// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ALSCharacterBase.generated.h"

UCLASS(Abstract)
class ALMS_API AALSCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:

	AALSCharacterBase();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combate")
	TObjectPtr<USkeletalMeshComponent> Weapon;

};
