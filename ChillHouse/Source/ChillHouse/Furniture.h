// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Furniture.generated.h"

UCLASS()
class CHILLHOUSE_API AFurniture : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFurniture();

public:
	UPROPERTY(EditDefaultsOnly)
		class UStaticMeshComponent* Mesh;
	class USceneComponent* Pivot;

	void SavePosAndRot();
	void ResetPosAndRot();
	bool LocationIsValid();

private:

	FVector LastValidPosition;
	FRotator LastValidRotation;
};
