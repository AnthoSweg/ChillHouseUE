// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"
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

	PotMesh->SetStaticMesh(GameMode->PotMeshes[0]);
	Mesh->SetRelativeLocation(FVector(0, 0, PotMesh->Bounds.GetBox().Max.Z));
}

void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (PotSize == PlantSize && LightNeeded == LightReceived)
	{
		GameMode->GainCurrency(CurrencyGainedPerSeconds * DeltaTime);
	}
}

void APlant::SwitchPot(int index)
{
}

void APlant::ChangePotSize(TEnumAsByte<Size> NewSize)
{
	PotSize = NewSize;
	Mesh->SetRelativeLocation(FVector(0, 0, (uint8)NewSize * PotMesh->Bounds.GetBox().Max.Z));
}
