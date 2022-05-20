// Fill out your copyright notice in the Description page of Project Settings.


#include "Furniture.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AFurniture::AFurniture()
{
	PrimaryActorTick.bCanEverTick = true;
	Pivot = CreateDefaultSubobject<USceneComponent>(TEXT("Pivot"));
	//Prevent a weird offset with the relocation
	FVector Zero;
	Zero.Set(0, 0, 0);
	Pivot->SetupAttachment(RootComponent);
	Pivot->SetRelativeLocation(Zero);
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Pivot);
	Mesh->SetRelativeLocation(Zero);
}

void AFurniture::SavePosAndRot()
{
	LastValidPosition = GetActorLocation();
	LastValidRotation = GetActorRotation();
}

void AFurniture::ResetPosAndRot()
{
	UE_LOG(LogTemp, Warning, TEXT("reset location"));
	SetActorLocationAndRotation(LastValidPosition, LastValidRotation);
}

bool AFurniture::LocationIsValid()
{
	UE_LOG(LogTemp, Warning, TEXT("check location"));
	TArray<AActor*> actors;
	Mesh->GetOverlappingActors(actors, nullptr);
	UE_LOG(LogTemp, Warning, TEXT("%i"), actors.Num());
	for (int i = 0; i < actors.Num(); i++)
	{
		AFurniture* f = Cast<AFurniture>(actors[i]);
		if (f != nullptr)
		{
			return false;
		}
	}

	return true;
}

