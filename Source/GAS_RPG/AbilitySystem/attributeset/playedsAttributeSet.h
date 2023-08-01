// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include"GAS_RPG/AbilitySystem/GAS_AbilitySystemComponent.h"
#include "playedsAttributeSet.generated.h"

/**
 *  *---------- 用宏生成基礎的屬性Get,Set,Init函數----------------
 * To use this in your game you can define something like this, and then add game-specific functions as necessary:
 * 
 *	#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
 *	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
 *	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
 *	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
 *	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
 * 
 *	ATTRIBUTE_ACCESSORS(UMyHealthSet, Health)
 */
 
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)


UCLASS()
class GAS_RPG_API UplayedsAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	
	virtual void GetLifetimeReplicatedProps(TArray< class FLifetimeProperty >& OutLifetimeProps) const override;
	
	//--------------重寫函數進行屬性值改變后的Clamp之類的處理
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)override; 
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
		


	//---定義屬性值

	UPROPERTY(ReplicatedUsing= OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UplayedsAttributeSet, Health)

	UPROPERTY(ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UplayedsAttributeSet, MaxHealth)



	UFUNCTION()
	void OnRep_Health(FGameplayAttributeData oldvalue);

	UFUNCTION()
	void OnRep_MaxHealth(FGameplayAttributeData oldvalue);


};
