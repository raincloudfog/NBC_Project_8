// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CoinItem.h"
#include "BigCoinItem.generated.h"

/**
 * 
 */
UCLASS()
class NBC_PROJECT_8_API ABigCoinItem : public ACoinItem
{
	GENERATED_BODY()

public:
	ABigCoinItem();


protected:
	virtual void ActivateItem(AActor* Activator) override;
	
};
