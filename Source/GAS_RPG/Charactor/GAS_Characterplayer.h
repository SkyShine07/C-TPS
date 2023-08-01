// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GAS_CharacterBase.h"


#include "GAS_Characterplayer.generated.h"

/**
 * 
 */
UCLASS()
class GAS_RPG_API AGAS_Characterplayer : public AGAS_CharacterBase
{
	GENERATED_BODY()
	
public:

#pragma region InitAbilityActorinfo

	void InitAbilityActorinfo();

	virtual void PossessedBy(AController* NewController) override;

	//virtual void OnRep_PlayerState() override£»

#pragma endregion

};
