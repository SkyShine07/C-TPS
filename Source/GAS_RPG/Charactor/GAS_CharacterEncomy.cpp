// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS_CharacterEncomy.h"
#include"GAS_RPG/AbilitySystem/GAS_AbilitySystemComponent.h"
#include"GAS_RPG\AbilitySystem\attributeset\playedsAttributeSet.h"


AGAS_CharacterEncomy::AGAS_CharacterEncomy()
{
	GAS_AbilitySystemComponent = CreateDefaultSubobject<UGAS_AbilitySystemComponent>(FName("GAS_AbilitySystemComponent"));
	playedsAttributeSet = CreateDefaultSubobject<UplayedsAttributeSet>(FName("playedsAttributeSet"));
	GAS_AbilitySystemComponent->SetIsReplicated(true);
	GAS_AbilitySystemComponent->ReplicationMode = EGameplayEffectReplicationMode::Mixed;

}

void AGAS_CharacterEncomy::BeginPlay()
{
	GAS_AbilitySystemComponent->InitAbilityActorInfo(this,this);
}
