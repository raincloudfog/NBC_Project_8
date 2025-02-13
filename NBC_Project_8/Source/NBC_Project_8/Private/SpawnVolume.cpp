// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnVolume.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SpartaGameStateBase.h"



// Sets default values
ASpawnVolume::ASpawnVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	SpawningBox = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawningBox"));
	SpawningBox->SetupAttachment(Scene);

	ItemDataTable = nullptr;
	ItemDataTableInstance = nullptr;
}

AActor* ASpawnVolume::SpawnRandomItem()
{
	if (FItemSpawnRow* SelectedRow = GetRandomItem())
	{
		if (UClass* ActualClass = SelectedRow->ItemClass.Get())
		{
			return SpawnItem(ActualClass);
		}
	}

	return nullptr;
}


FItemSpawnRow* ASpawnVolume::GetRandomItem() const
{
	if (!ItemDataTable) return nullptr;

	if (!ItemDataTableInstance) return nullptr;

	TArray<FItemSpawnRow*> AllRows;
	static const FString ContextString(TEXT("ItemSpawnContext"));
	ItemDataTableInstance->GetAllRows(ContextString, AllRows);

	if (AllRows.IsEmpty()) return nullptr;

	float TotalChance = 0.0f;
	for (const FItemSpawnRow* Row : AllRows)
	{
		if (Row)
		{
			TotalChance += Row->SpawnChance;
		}
	}

	const float RandValue = FMath::FRandRange(0.0f, TotalChance);
	float AccumulateChance = 0.0f;

	for (FItemSpawnRow* Row : AllRows)
	{
		AccumulateChance += Row->SpawnChance;
		if (RandValue <= AccumulateChance)
		{
			return Row;
		}
	}


	return nullptr;
}


#pragma region version 2

//FItemSpawnRow* ASpawnVolume::GetRandomItem() const
//{
//	if (!ItemDataTable) return nullptr;
//
//	if (!ItemDataTableInstance) return nullptr;
//
//	TArray<FItemSpawnRow*> AllRows;
//	static const FString ContextString(TEXT("ItemSpawnContext"));
//	ItemDataTableInstance->GetAllRows(ContextString, AllRows);
//
//	if (AllRows.IsEmpty()) return nullptr;
//
//	float TotalChance = 0.0f;
//	for (const FItemSpawnRow* Row : AllRows)
//	{
//		if (Row)
//		{
//			TotalChance += Row->SpawnChance;
//		}
//	}
//
//	const float RandValue = FMath::FRandRange(0.0f, TotalChance);
//	float AccumulateChance = 0.0f;
//
//	for (FItemSpawnRow* Row : AllRows)
//	{
//		AccumulateChance += Row->SpawnChance;
//		if (RandValue <= AccumulateChance)
//		{
//			return Row;
//		}
//	}
//
//
//	return nullptr;
//}
#pragma endregion



#pragma region  version1 
//FItemSpawnRow* ASpawnVolume::GetRandomItem() const
//{
//	if (!ItemDataTable) return nullptr;
//
//	TArray<FItemSpawnRow*> AllRows;
//	static const FString ContextString(TEXT("ItemSpawnContext"));
//	ItemDataTable->GetAllRows(ContextString, AllRows);
//
//	if (AllRows.IsEmpty()) return nullptr;
//
//	float TotalChance = 0.0f;
//	for (const FItemSpawnRow* Row : AllRows)
//	{
//		if (Row)
//		{
//			TotalChance += Row->SpawnChance; 
//		}
//	}
//
//	const float RandValue = FMath::FRandRange(0.0f, TotalChance);
//	float AccumulateChance = 0.0f;
//
//	for (FItemSpawnRow* Row : AllRows)
//	{
//		AccumulateChance += Row->SpawnChance;
//		if (RandValue <= AccumulateChance)
//		{
//			return Row;
//		}
//	}
//
//
//	return nullptr;
//}
#pragma endregion



FVector ASpawnVolume::GetRandomPointInVolume() const
{

	//�ڽ��� ������
	FVector BoxExtent = SpawningBox->GetScaledBoxExtent();
	//�ڽ��� �߽�
	FVector BoxOrigin = SpawningBox->GetComponentLocation();

	//�ڽ��� -������ + ������
	return BoxOrigin + FVector(
		FMath::FRandRange(-BoxExtent.X, BoxExtent.X),
		FMath::FRandRange(-BoxExtent.Y, BoxExtent.Y),
		FMath::FRandRange(-BoxExtent.Z, BoxExtent.Z)
	);
}



AActor* ASpawnVolume::SpawnItem(TSubclassOf<AActor> ItemClass)
{
	if (!ItemClass) return nullptr;

	// SpawnActor�� �����ϸ� ������ ������ �����Ͱ� ��ȯ��
	AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(
		ItemClass,
		GetRandomPointInVolume(),
		FRotator::ZeroRotator
	);

	return SpawnedActor;
}

void ASpawnVolume::SetItemDataTableInstance(int32 level, int32 wave)
{
	if (wave < 0 || wave > 2)
		return;

	ItemDataTableInstance = WaveDataTables[level].WaveData[wave];
}







