// Fill out your copyright notice in the Description page of Project Settings.


#include "HSD_GameInstance.h"

#include "OnlineSubsystem.h"
#include "Online.h"


UHSD_GameInstance::UHSD_GameInstance()
	: Super()
{
}
UHSD_GameInstance::UHSD_GameInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	IOnlineSubsystem* const OnlineSub = IOnlineSubsystem::Get();
	check(OnlineSub);
	IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface();
	check(Sessions);

}
