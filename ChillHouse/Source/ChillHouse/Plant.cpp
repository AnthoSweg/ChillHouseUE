// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"
#include "Pot.h"
#include "ChillHouseGameMode.h"

APlant::APlant()
{
	PotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pot Mesh"));
	PotMesh->SetupAttachment(Pivot);
	PotMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void APlant::BeginPlay()
{
	Super::BeginPlay();
	GameMode = GetWorld()->GetAuthGameMode<AChillHouseGameMode>();
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	PotMesh->SetStaticMesh(GameMode->Pots[0].Mesh);
	Mesh->SetRelativeLocation(FVector(0, 0, GameMode->Pots[0].Height));

	PotSize = Size::Medium;
	PotIndex = 0;
	WaterLevel = WaterNeeded;
}

void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (IsInGoodCondition())
	{
		GameMode->GainCurrency(CurrencyGainedPerSeconds * DeltaTime);
	}

	WaterLevel -= .5f;
}

void APlant::ChangePot(bool GetNextOne)
{
	PotIndex += GetNextOne ? 1 : -1;
	if (PotIndex > GameMode->Pots.Num() - 1)
		PotIndex = 0;
	if (PotIndex < 0)
		PotIndex = GameMode->Pots.Num() - 1;

	SwitchPot(GameMode->Pots[PotIndex]);
}

void APlant::SwitchPot(FPot NewPot)
{
	Pot = NewPot;
	PotMesh->SetStaticMesh(Pot.Mesh);
	RelocatePlant();
}

void APlant::ChangePotSize(int byte)
{
	TEnumAsByte<Size> NewSize = (TEnumAsByte<Size>)byte;
	if (PotSize == NewSize)
		return;

	PotSize = NewSize;
	PotMesh->SetRelativeScale3D(FVector((uint8)PotSize) * .5f + .5f);
	RelocatePlant();
}

void APlant::RelocatePlant()
{
	Mesh->SetRelativeLocation(FVector(0, 0, ((uint8)PotSize * .5f + .5f) * Pot.Height));
}

void APlant::WaterPlant()
{
	WaterLevel += 10.f;
}

bool APlant::IsInGoodCondition()
{
	if ((uint8)LightReceived < (uint8)LightNeeded)
		return false;

	if ((uint8)PotSize < (uint8)PlantSize)
		return false;

	if (WaterLevel < WaterNeeded - 40 && WaterLevel > WaterNeeded + 20)
		return false;

	return true;
}
