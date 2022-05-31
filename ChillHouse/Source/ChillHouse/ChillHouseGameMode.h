// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ChillHouseGameMode.generated.h"

UCLASS()
class CHILLHOUSE_API AChillHouseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	void GainCurrency(float GainedCurrency);
	UFUNCTION(BlueprintPure, BlueprintCallable)
	float GetCurrency();

	UPROPERTY(EditDefaultsOnly)
	TArray<class UStaticMesh*> PotMeshes;

private:
	float Currency;
};
