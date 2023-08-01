// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS_PlayerState.h"
#include"GAS_RPG/AbilitySystem/GAS_AbilitySystemComponent.h"
#include"GAS_RPG\AbilitySystem\attributeset\playedsAttributeSet.h"

AGAS_PlayerState::AGAS_PlayerState()
{
	//���ľW�j�����l��
	NetUpdateFrequency = 100;

	//��ASC��AS����playerstate��
	GAS_AbilitySystemComponent = CreateDefaultSubobject<UGAS_AbilitySystemComponent>(FName("GAS_AbilitySystemComponent"));
	playedsAttributeSet = CreateDefaultSubobject<UplayedsAttributeSet>(FName("playedsAttributeSet"));
	GAS_AbilitySystemComponent->SetIsReplicated(true);
	GAS_AbilitySystemComponent->ReplicationMode = EGameplayEffectReplicationMode::Mixed;

}

UAbilitySystemComponent* AGAS_PlayerState::GetAbilitySystemComponent() const
{
	return GAS_AbilitySystemComponent;
}
