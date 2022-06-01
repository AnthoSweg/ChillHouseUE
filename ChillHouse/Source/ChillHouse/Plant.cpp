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
	float PotHeight = PotMesh->Bounds.BoxExtent.Z;
	Mesh->SetRelativeLocation(FVector(0, 0, PotHeight));
	UE_LOG(LogTemp, Warning, TEXT("%f"), PotHeight);
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
	UE_LOG(LogTemp, Warning, TEXT("%f"), PotMesh->Bounds.GetBox().Max.Z);
	Mesh->SetRelativeLocation(FVector(0, 0, (uint8)NewSize * PotMesh->Bounds.GetBox().Max.Z));
}
