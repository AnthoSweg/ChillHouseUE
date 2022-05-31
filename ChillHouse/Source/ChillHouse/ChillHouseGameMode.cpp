// Fill out your copyright notice in the Description page of Project Settings.


#include "ChillHouseGameMode.h"

void AChillHouseGameMode::GainCurrency(float GainedCurrency)
{
	Currency += GainedCurrency;
}

float AChillHouseGameMode::GetCurrency()
{
	return Currency;
}
