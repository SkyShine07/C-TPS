// Fill out your copyright notice in the Description page of Project Settings.


#include "playedsAttributeSet.h"

void UplayedsAttributeSet::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	
}

void UplayedsAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
}

void UplayedsAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
}

void UplayedsAttributeSet::OnRep_Health(FGameplayAttributeData oldvalue)
{
	//----�A�y�꣬���Ԇ����A�yϵ�y---
	GAMEPLAYATTRIBUTE_REPNOTIFY(UplayedsAttributeSet, Health, oldvalue);

}

void UplayedsAttributeSet::OnRep_MaxHealth(FGameplayAttributeData oldvalue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UplayedsAttributeSet, MaxHealth, oldvalue);
}
