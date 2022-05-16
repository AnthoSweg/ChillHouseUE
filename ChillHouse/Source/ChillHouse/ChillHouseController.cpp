// Fill out your copyright notice in the Description page of Project Settings.


#include "ChillHouseController.h"
#include "Blueprint/UserWidget.h"

void AChillHouseController::BeginPlay()
{
	Super::BeginPlay();
	//SetShowMouseCursor(true);
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
		//UE_LOG(LogTemp, Warning, TEXT("Mouse pos saved : %f,%f"), MouseCoordsOnClick.X, MouseCoordsOnClick.Y);
	}
}

void AChillHouseController::ResetMousePosition()
{
	//Check to do it only once
	if (MouseCoordsOnClick.X != -1)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Mouse pos set : %f,%f"), MouseCoordsOnClick.X, MouseCoordsOnClick.Y);
		SetMouseLocation(MouseCoordsOnClick.X, MouseCoordsOnClick.Y);
		//GetMousePosition(MouseCoordsOnClick.X, MouseCoordsOnClick.Y);
		//UE_LOG(LogTemp, Warning, TEXT("New mouse pos : %f,%f"), MouseCoordsOnClick.X, MouseCoordsOnClick.Y);
		MouseCoordsOnClick.X = -1;
	}
}
