// Fill out your copyright notice in the Description page of Project Settings.


#include "HSD_GameSession.h"

AHSD_GameSession::AHSD_GameSession()
	:Super()
{
	UE_LOG(LogGameSession, Log, TEXT("------ AHSD_GameSession::AHSD_GameSession"));
}

void AHSD_GameSession::OnStartSessionComplete(FName InSessionName, bool bWasSuccessful)
{
	AGameSession::OnStartSessionComplete(InSessionName, bWasSuccessful);
	UE_LOG(LogGameSession, Log, TEXT("------ OnStartSessionComplete"));
}



void AHSD_GameSession::PostLogin(APlayerController* NewPlayer)
{
	UE_LOG(LogGameSession, Log, TEXT("------ AHSD_GameSession::PostLogin"));
}