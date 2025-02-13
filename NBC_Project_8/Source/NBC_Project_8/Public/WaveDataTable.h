// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemSpawnRow.h"
#include "WaveDataTable.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FWaveDataTable
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DataTable")
	TArray<UDataTable*> WaveData;

};
