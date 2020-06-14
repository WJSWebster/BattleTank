// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "BattleTank.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	ATank* controlledTank = GetControlledTank();
	if (!controlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankAIController not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankAIController possessing: %s"), *(controlledTank->GetName()));
	}

	ATank* playerTank = GetPlayerTank();
	if (!playerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankAIController can't find player tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankAIController found player: %s"), *(playerTank->GetName()));
	}
}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	ATank* playerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (playerTank)
	{
		return playerTank;
	}
	return nullptr;
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ATank* controlledTank = GetControlledTank();
	if (controlledTank)
	{
		controlledTank->AimAt(GetPlayerTank()->GetActorLocation());
		// todo: move towards the player
		// todo: fire at tank
	}
}

//void ATankAIController::AimTowardsCrosshair()
//{
//	ATank* controlledTank = GetControlledTank();
//	if (!controlledTank) { return; }
//
//	FVector hitLocation(0.); // Out Parameter
//	if (GetSightRayHitLocation(hitLocation))  // Has "side-effect", is going to line trace
//	{
//		// Tell controlled tank to aim at this point
//		controlledTank->AimAt(hitLocation);
//	}

