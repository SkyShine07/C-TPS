// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS_PlayerState.h"
#include"GAS_RPG/AbilitySystem/GAS_AbilitySystemComponent.h"
#include"GAS_RPG\AbilitySystem\attributeset\playedsAttributeSet.h"

AGAS_PlayerState::AGAS_PlayerState()
{
	//更改網絡更新頻率
	NetUpdateFrequency = 100;

	//將ASC和AS放在playerstate上
	GAS_AbilitySystemComponent = CreateDefaultSubobject<UGAS_AbilitySystemComponent>(FName("GAS_AbilitySystemComponent"));
	playedsAttributeSet = CreateDefaultSubobject<UplayedsAttributeSet>(FName("playedsAttributeSet"));
	GAS_AbilitySystemComponent->SetIsReplicated(true);
	GAS_AbilitySystemComponent->ReplicationMode = EGameplayEffectReplicationMode::Mixed;

}

UAbilitySystemComponent* AGAS_PlayerState::GetAbilitySystemComponent() const
{
	return GAS_AbilitySystemComponent;
}
