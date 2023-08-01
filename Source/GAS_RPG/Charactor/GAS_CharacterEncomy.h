// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GAS_CharacterBase.h"
#include "GAS_CharacterEncomy.generated.h"

/**
 * b
 */
UCLASS()
class GAS_RPG_API AGAS_CharacterEncomy : public AGAS_CharacterBase
{
	GENERATED_BODY()
	
public:
	AGAS_CharacterEncomy();

	virtual void BeginPlay()override;
};
