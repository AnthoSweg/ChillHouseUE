// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ChillHouseController.generated.h"

/**
 * 
 */
class APlant;

UCLASS()
class CHILLHOUSE_API AChillHouseController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> HUDClass;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> PlantMenuClass;

	UPROPERTY()
		UUserWidget* HUD;

	UPROPERTY()
		UUserWidget* PlantMenu;

public :

	void SaveMousePosition();
	void ResetMousePosition();
	void OpenPlantMenu(APlant* Plant);

	FVector2D MouseCoordsOnClick;
	APlant* Plant;
};
