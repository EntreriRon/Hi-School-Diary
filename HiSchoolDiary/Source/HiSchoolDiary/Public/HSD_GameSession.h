// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "HSD_GameSession.generated.h"

/**
 * 
 */
UCLASS()
class HISCHOOLDIARY_API AHSD_GameSession : public AGameSession
{
	GENERATED_BODY()

	/**
		* Called by GameMode::PostLogin to give session code chance to do work after PostLogin
		*
		* @param NewPlayer player logging in
		*/
	virtual void PostLogin(APlayerController* NewPlayer) override;

public:
	AHSD_GameSession();

protected:
	void OnStartSessionComplete(FName InSessionName, bool bWasSuccessful) override;
};
