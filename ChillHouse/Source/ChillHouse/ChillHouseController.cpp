// Fill out your copyright notice in the Description page of Project Settings.


#include "ChillHouseController.h"
#include "Plant.h"
#include "Blueprint/UserWidget.h"

void AChillHouseController::BeginPlay()
{
	Super::BeginPlay();
	PlantMenu = CreateWidget(this, PlantMenuClass);
	HUD = CreateWidget(this, HUDClass);
	if (HUD != nullptr)
	{
		HUD->AddToViewport();
	}
	MouseCoordsOnClick.X = -1;
}

void AChillHouseController::SaveMousePosition()
{
	//Check to know if it's first time
	if (MouseCoordsOnClick.X == -1)
	{
		GetMousePosition(MouseCoordsOnClick.X, MouseCoordsOnClick.Y);
	}
}

void AChillHouseController::ResetMousePosition()
{
	//Check to do it only once
	if (MouseCoordsOnClick.X != -1)
	{
		SetMouseLocation(MouseCoordsOnClick.X, MouseCoordsOnClick.Y);
		MouseCoordsOnClick.X = -1;
	}
}

void AChillHouseController::OpenPlantMenu(APlant* _Plant)
{
	UE_LOG(LogTemp, Warning, TEXT("open plant menu"));
	if (PlantMenu != nullptr)
	{
		PlantMenu->AddToViewport();
		Plant = _Plant;
	}
}
