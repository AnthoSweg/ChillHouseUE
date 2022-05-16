// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ChillHouseController.generated.h"

/**
 * 
 */
UCLASS()
class CHILLHOUSE_API AChillHouseController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> HUDClass;

	UPROPERTY()
		UUserWidget* HUD;

public :

	void SaveMousePosition();
	void ResetMousePosition();

	FVector2D MouseCoordsOnClick;
};
