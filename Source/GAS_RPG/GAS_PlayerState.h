// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GAS_PlayerState.generated.h"

/**
 * 
 */
UCLASS()
class GAS_RPG_API AGAS_PlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	AGAS_PlayerState();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UGAS_AbilitySystemComponent* GAS_AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UplayedsAttributeSet* playedsAttributeSet;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;

	FORCEINLINE UplayedsAttributeSet* GetAttributeSet() const { return playedsAttributeSet; };

};
