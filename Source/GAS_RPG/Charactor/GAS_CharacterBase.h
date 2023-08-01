// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include"GAS_RPG\AbilitySystem\attributeset\playedsAttributeSet.h"



#include "GAS_CharacterBase.generated.h"


class UGAS_AbilitySystemComponent;


UCLASS()
class GAS_RPG_API AGAS_CharacterBase : public ACharacter,public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGAS_CharacterBase();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UGAS_AbilitySystemComponent* GAS_AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UplayedsAttributeSet* playedsAttributeSet;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//åç¨FΩ”ø⁄∫Øîµ
	virtual UAbilitySystemComponent* GetAbilitySystemComponent () const;
	
	FORCEINLINE UplayedsAttributeSet* GetAttributeSet() const {return playedsAttributeSet;};
};
