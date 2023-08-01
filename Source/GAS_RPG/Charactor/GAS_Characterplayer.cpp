// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS_Characterplayer.h"
#include "GAS_RPG\GAS_PlayerState.h"
#include"GAS_RPG/AbilitySystem/GAS_AbilitySystemComponent.h"
#include"GAS_RPG\AbilitySystem\attributeset\playedsAttributeSet.h"

#pragma region InitAbilityActorinfo

void AGAS_Characterplayer::InitAbilityActorinfo()
{

	//將ps中的ASC和AS指針傳遞過來，并且初始化

	AGAS_PlayerState* GAS_PlayerState = Cast<AGAS_PlayerState>(GetPlayerState());
	if (GAS_PlayerState)
	{
		GAS_AbilitySystemComponent = GAS_PlayerState->GAS_AbilitySystemComponent;
		playedsAttributeSet = GAS_PlayerState->playedsAttributeSet;
		if (GAS_AbilitySystemComponent)
		{
			GAS_AbilitySystemComponent->InitAbilityActorInfo(GAS_PlayerState, this);

		}
	}
}

//服務器和客戶端分別初始化actorinfo
void AGAS_Characterplayer::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	InitAbilityActorinfo();
}

#pragma endregion

