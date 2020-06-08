// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "BattleTank.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	//UE_LOG(LogTemp, Warning, !ControlledTank ? TEXT("ATankPlayerController not possesing a tank") : TEXT("ATankPlayerController possessing: %s"), *(ControlledTank->GetName()));
	//!ControlledTank ? UE_LOG(LogTemp, Warning, TEXT("ATankPlayerController not possesing a tank")) : UE_LOG(LogTemp, Warning, TEXT("ATankPlayerController possessing: %s"), *(ControlledTank->GetName()));
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankAIController not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankAIController possessing: %s"), *(ControlledTank->GetName()));
	}
}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

