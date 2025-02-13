// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemSpawnRow.h"
#include "WaveDataTable.h"
#include "SpawnVolume.generated.h"


class UBoxComponent;

UCLASS()
class NBC_PROJECT_8_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnVolume();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
    USceneComponent* Scene;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
    UBoxComponent* SpawningBox;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    UDataTable* ItemDataTable;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    TArray<UDataTable*> ItemDataTables;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
    UDataTable* ItemDataTableInstance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    TArray<FWaveDataTable> WaveDataTables;

    UFUNCTION(BlueprintCallable, Category = "Spawning")
    AActor* SpawnRandomItem();

    
    FVector GetRandomPointInVolume() const;
    FItemSpawnRow* GetRandomItem() const;
    UFUNCTION(BlueprintCallable, Category = "Spawning")
    AActor* SpawnItem(TSubclassOf<AActor> ItemClass);

    void SetItemDataTableInstance(int32 level = 0, int32 wave = 0);

    
};
