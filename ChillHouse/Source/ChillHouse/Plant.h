// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Furniture.h"
#include "Plant.generated.h"

UENUM(BlueprintType)
enum Size
{
	Small			UMETA(DisplayName = "Small"),
	Medium		UMETA(DisplayName = "Medium"),
	Large		UMETA(DisplayName = "Large"),
};

UCLASS()
class CHILLHOUSE_API APlant : public AFurniture
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		int CurrencyGainedPerSeconds;

	UPROPERTY(EditDefaultsOnly)
		TEnumAsByte<Size> PlantSize;

	int PotIndex;

	//Need a lot of light ?
};
