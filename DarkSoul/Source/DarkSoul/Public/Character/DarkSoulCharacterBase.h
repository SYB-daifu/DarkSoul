// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DarkSoulCharacterBase.generated.h"

UCLASS(Abstract)
class DARKSOUL_API ADarkSoulCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADarkSoulCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Battle")
	TObjectPtr<USkeletalMeshComponent> Weapon;
};
