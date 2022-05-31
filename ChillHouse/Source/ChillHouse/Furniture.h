// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Furniture.generated.h"

UENUM(BlueprintType)
enum PlacementTypeEnum
{
	NoLimit			UMETA(DisplayName = "No limit"),
	OnWallsOnly		UMETA(DisplayName = "Walls only"),
	OnFloorOnly		UMETA(DisplayName = "Floor only"),
};

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

	//void SavePosAndRot();
	//void ResetPosAndRot();
	//bool LocationIsValid();
	bool CanBeMoved();
	void LinkToAnotherFurniture(AFurniture* Furniture);
	void UnlinkFurniture();

	UPROPERTY(EditDefaultsOnly)
		bool bAlignWithWall;
	UPROPERTY(EditDefaultsOnly)
		TEnumAsByte<PlacementTypeEnum> PlacementType;

	UPROPERTY(EditDefaultsOnly)
		int Cost;

private:

	FVector LastValidPosition;
	FRotator LastValidRotation;
	TArray<AFurniture*> FurnituresOnMe;
	AFurniture* FurnitureImOn;
};
