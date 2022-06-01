// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Pot.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct CHILLHOUSE_API FPot
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		class UStaticMesh* Mesh;
	UPROPERTY(EditAnywhere)
		float Height;
};
