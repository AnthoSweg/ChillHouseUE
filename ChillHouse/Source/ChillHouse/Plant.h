// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Furniture.h"
#include "Pot.h"
#include "Plant.generated.h"

UENUM(BlueprintType)
enum Size
{
	Small	UMETA(DisplayName = "Small"),
	Medium	UMETA(DisplayName = "Medium"),
	Large	UMETA(DisplayName = "Large"),
};
UENUM(BlueprintType)
enum LightLevel
{
	ExposedToLight	UMETA(DisplayName = "Exposed to light"),
	AmbiantLight	UMETA(DisplayName = "Ambiant light"),
	Shadow			UMETA(DisplayName = "In the shadow")
};

UCLASS()
class CHILLHOUSE_API APlant : public AFurniture
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	APlant();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		FString PlantName;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		int CurrencyGainedPerSeconds;

	UPROPERTY(EditDefaultsOnly)
		TEnumAsByte<Size> PlantSize;
	UPROPERTY(EditDefaultsOnly)
		TEnumAsByte<LightLevel> LightNeeded;

	UPROPERTY(BlueprintReadOnly)
	float WaterLevel;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		class UStaticMeshComponent* PotMesh;

	UFUNCTION(BlueprintCallable)
		void ChangePotSize(int byte);
	UFUNCTION(BlueprintCallable)
		void ChangePot(bool GetNextOne);
	void SwitchPot(FPot NewPot);
	void RelocatePlant();
	UFUNCTION(BlueprintCallable)
		void WaterPlant();

private:

	class AChillHouseGameMode* GameMode;

	TEnumAsByte<LightLevel> LightReceived;
	TEnumAsByte<Size> PotSize;

	FPot Pot;
	int PotIndex;
	UPROPERTY(EditDefaultsOnly)
		float WaterNeeded;
	UPROPERTY(EditDefaultsOnly)
		float WaterDecreaseRate = .5f;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	int IsInGoodCondition();
};
