// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Furniture.h"
#include "Plant.generated.h"

UENUM(BlueprintType)
enum Size
{
	Small		UMETA(DisplayName = "Small"),
	Medium		UMETA(DisplayName = "Medium"),
	Large		UMETA(DisplayName = "Large"),
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
		int CurrencyGainedPerSeconds;

	UPROPERTY(EditDefaultsOnly)
		TEnumAsByte<Size> PlantSize;
	UPROPERTY(EditDefaultsOnly)
		TEnumAsByte<LightLevel> LightNeeded;

	void SwitchPot(int index);
	void ChangePotSize(TEnumAsByte<Size> NewSize);

private:

	class AChillHouseGameMode* GameMode;

	TEnumAsByte<LightLevel> LightReceived;
	TEnumAsByte<Size> PotSize;

	UPROPERTY(EditDefaultsOnly)
	class UStaticMeshComponent* PotMesh;
	
	int PotIndex;
};
