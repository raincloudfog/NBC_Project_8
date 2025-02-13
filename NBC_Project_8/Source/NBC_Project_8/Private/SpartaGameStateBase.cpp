// Fill out your copyright notice in the Description page of Project Settings.


#include "SpartaGameStateBase.h"
#include "SpartaPlayerController.h"
#include "SpartaGameInstance.h"
#include "SpawnVolume.h"
#include "CoinItem.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

ASpartaGameStateBase::ASpartaGameStateBase()
{
	Score = 0;
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;
	LevelDuration = 30.0f;
	CurrentLevelIndex = 0;
	MaxLevels = 3;
	Wave = 0;
	RemainingTime = 0;
}

void ASpartaGameStateBase::BeginPlay() {
	Super::BeginPlay();

	//UpdateHUD();
	StartLevel();

	//tick으로 안하는 이유 생각해보기
	GetWorldTimerManager().SetTimer(
		HUDUpdateTimerHandle,
		this,
		&ASpartaGameStateBase::UpdateHUD,
		0.1f,
		true
	);
}

int32 ASpartaGameStateBase::GetScore() const
{
	return Score;
}

void ASpartaGameStateBase::AddScore(int32 Amount)
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		USpartaGameInstance* SpartaGameInstance = Cast<USpartaGameInstance>(GameInstance);
		if (SpartaGameInstance)
		{
			SpartaGameInstance->AddToScore(Amount);
		}
	}	
	else {
		UE_LOG(LogTemp, Log, TEXT("No have Instance"));
	}

	if (Score >= 50)
	{
		
	}
}



void ASpartaGameStateBase::StartLevel()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (ASpartaPlayerController* SpartaPlayerController = Cast<ASpartaPlayerController>(PlayerController))
		{
			SpartaPlayerController->ShowGameHUD();
		}
	}

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		USpartaGameInstance* SpartaGameInstance = Cast<USpartaGameInstance>(GameInstance);
		if (SpartaGameInstance)
		{
			CurrentLevelIndex = SpartaGameInstance->CurrentLevelIndex;
		}
	}

	ChangeWave();

#pragma region  Before - sapwnlogic

	/*SpawnedCoinCount = 0;
	CollectedCoinCount = 0;

	TArray<AActor*> FoundVolumes;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(),
		FoundVolumes);

	const int32 ItemToSpawn = 40;

	if (FoundVolumes.Num() > 0)
	{
		ASpawnVolume* SpawnVolume = Cast<ASpawnVolume>(FoundVolumes[0]);
		if (SpawnVolume)
		{
			for (int32 i = 0; i < ItemToSpawn; i++)
			{
				AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
				if (SpawnedActor && SpawnedActor->IsA(ACoinItem::StaticClass()))
				{
					SpawnedCoinCount++;
				}
			}
		}
	}*/

#pragma endregion

	GetWorldTimerManager().SetTimer(
		LevelTimerHandle,
		this,
		&ASpartaGameStateBase::OnLevelTimeUp,
		LevelDuration,
		false
	);


}

void ASpartaGameStateBase::OnLevelTimeUp()
{
	//나중에 웨이브 넣을 때 wave 3 까지 갔고 그이후 시간 초과시 end level실행 시켜줄것
	EndLevel();
}

void ASpartaGameStateBase::OnCoinCollected()
{
	CollectedCoinCount++;

	if (SpawnedCoinCount > 0 && CollectedCoinCount >= SpawnedCoinCount)
	{
		EndLevel();
	}
}

void ASpartaGameStateBase::EndLevel()
{
	GetWorldTimerManager().ClearTimer(LevelTimerHandle);


	if (UGameInstance* GameInstance = GetGameInstance())
	{
		USpartaGameInstance* SpartaGameInstance = Cast<USpartaGameInstance>(GameInstance);
		if (SpartaGameInstance)
		{
			//SpartaGameInstance->AddToScore(Score);
			AddScore(Score);
			CurrentLevelIndex++;
			SpartaGameInstance->CurrentLevelIndex = CurrentLevelIndex;

			if (CurrentLevelIndex >= MaxLevels)
			{
				OnGameOver();
				return;
			}

			if (LevelMapNames.IsValidIndex(CurrentLevelIndex))
			{
				UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);
			}
			else {
				OnGameOver();
			}
		}
	}
}

void ASpartaGameStateBase::UpdateHUD()
{
	if (APlayerController* Plyaercontroller = GetWorld()->GetFirstPlayerController())
	{
		ASpartaPlayerController* SpartaPlayerController = Cast<ASpartaPlayerController>(Plyaercontroller);

		if (UUserWidget* HUDWidget = SpartaPlayerController->GetHUDWidget())
		{
			if (UTextBlock* TimeText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Time"))))
			{
				RemainingTime = GetWorldTimerManager().GetTimerRemaining(LevelTimerHandle);
				TimeText->SetText(FText::FromString(FString::Printf(TEXT("Time : %.1f"), RemainingTime)));
				
				//해당 레벨 체크
				if (Wave < WaveTime.Num() && RemainingTime <= WaveTime[Wave] && RemainingTime != -1)
				{
					//왜 처음은 -1이 나올까
					UE_LOG(LogTemp, Log, TEXT("next Wave %.1f "), RemainingTime);
					Wave++;
					ChangeWave(Wave);
				}
			}

			if (UTextBlock* ScoreText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Score"))))
			{
				//해당 코드는 수정 한거니까 나중에 이상 있으면 바꿀것 17강
				USpartaGameInstance* SpartaGameInstance = Cast<USpartaGameInstance>(GetGameInstance());
				if (SpartaGameInstance)
				{
					ScoreText->SetText(FText::FromString(FString::Printf(TEXT("Score: %d"), SpartaGameInstance->TotalScore)));
				}
				else {
					UE_LOG(LogTemp, Log, TEXT("No have Instance - Score"));

				}
				
			}
			else {
				UE_LOG(LogTemp, Log, TEXT("No have Score text"));

			}

			if (UTextBlock* LevelIndexText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Level"))))
			{
				LevelIndexText->SetText(FText::FromString(FString::Printf(TEXT("Level: %d"), CurrentLevelIndex + 1)));
			}
		}
	}
}



void ASpartaGameStateBase::OnGameOver()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (ASpartaPlayerController* SpartaPlayerController = Cast<ASpartaPlayerController>(PlayerController))
		{
			SpartaPlayerController->SetPause(true);
			SpartaPlayerController->ShowMainMenu(true);
		}
	}

	UpdateHUD();
	UE_LOG(LogTemp, Warning, TEXT("Game Over!!"));
}

void ASpartaGameStateBase::ChangeWave(int32 wave)
{
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;

	TArray<AActor*> FoundVolumes;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(),
		FoundVolumes);

	//코드를 보아하니 액터들이 담길 TArray에다가 
	//UGameplayStatics은 정적? 게임? 플레이? 게임 플레이에 관한 정보를 주는 함수에서
	// 액터전부를 가져온다. 해당 클래스들을 (해당 월드에서 , 해당 클래스를, 저장해줄 배열에)

	const int32 ItemToSpawn = 20;

	if (FoundVolumes.Num() >0)
	{
		//그중 하나만 // 흐음 기억나는건 엘든링 마법사 보스전에서 보호막 거는 학생들을
		//이렇게 해당 클래스가 있는 클래스들 전부 가져와서 하는걸까
		ASpawnVolume* SpawnVolume = Cast<ASpawnVolume>(FoundVolumes[0]);
		if (SpawnVolume)
		{
			//현재 레벨을 곱해주려함
			SpawnVolume->SetItemDataTableInstance(CurrentLevelIndex,wave);

			for (int32 i = 0; i < ItemToSpawn; i++)
			{
				AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
				if (SpawnedActor && SpawnedActor->IsA(ACoinItem::StaticClass()))
				{
					SpawnedCoinCount++;
				}
			}
		}
	}
}

void ASpartaGameStateBase::ClearLvel()
{
}
