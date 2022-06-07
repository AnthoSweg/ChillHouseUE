// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Pot.h"
#include "ChillHouseGameMode.generated.h"

UCLASS()
class CHILLHOUSE_API AChillHouseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	void GainCurrency(float GainedCurrency);
	UFUNCTION(BlueprintPure, BlueprintCallable)
	float GetCurrency();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPot> Pots;
	UPROPERTY(EditAnywhere)
		class UNiagaraSystem* RainParticle;

private:
	float Currency;

};
