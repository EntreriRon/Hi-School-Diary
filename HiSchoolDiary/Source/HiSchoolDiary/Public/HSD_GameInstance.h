// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "HSD_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class HISCHOOLDIARY_API UHSD_GameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	// Constructor
	UHSD_GameInstance();
	UHSD_GameInstance(const FObjectInitializer& ObjectInitializer);

	bool isOnline();
};
