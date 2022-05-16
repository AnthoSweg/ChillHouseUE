// Fill out your copyright notice in the Description page of Project Settings.


#include "A_Furniture.h"

// Sets default values
AA_Furniture::AA_Furniture()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AA_Furniture::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AA_Furniture::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

