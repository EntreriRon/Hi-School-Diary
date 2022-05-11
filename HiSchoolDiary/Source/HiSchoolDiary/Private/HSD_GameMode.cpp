// Fill out your copyright notice in the Description page of Project Settings.


#include "HSD_GameMode.h"
#include "HSD_GameSession.h"




AHSD_GameMode::AHSD_GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

	GameSessionClass = AHSD_GameSession::StaticClass();
}
