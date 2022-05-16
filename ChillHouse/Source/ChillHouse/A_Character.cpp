// Fill out your copyright notice in the Description page of Project Settings.


#include "A_Character.h"

// Sets default values
AA_Character::AA_Character()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AA_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AA_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AA_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AA_Character::RotateCamera(float delta)
{
	//SpringArmComponent
}

