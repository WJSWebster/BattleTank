// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "BattleTank.h"

#include "Engine/World.h"
#include "CollisionQueryParams.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	//UE_LOG(LogTemp, Warning, !ControlledTank ? TEXT("ATankPlayerController not possessing a tank") : TEXT("ATankPlayerController possessing: %s"), *(ControlledTank->GetName()));
	//!ControlledTank ? UE_LOG(LogTemp, Warning, TEXT("ATankPlayerController not possessing a tank")) : UE_LOG(LogTemp, Warning, TEXT("ATankPlayerController possessing: %s"), *(ControlledTank->GetName()));
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankPlayerController not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankPlayerController possessing: %s"), *(ControlledTank->GetName()));
	}
}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	ATank* controlledTank = GetControlledTank();
	if (!controlledTank) { return; }

	FVector hitLocation(0.); // Out Parameter
	if (GetSightRayHitLocation(hitLocation))  // Has "side-effect", is going to line trace
	{
		// Tell controlled tank to aim at this point
		controlledTank->AimAt(hitLocation);
	}
}

// Get world location of linetrace through crosshair, true if hits landscape
bool ATankPlayerController::GetSightRayHitLocation(FVector& HitLocation) const
{
	// Find the crosshair position
	int32 viewportSizeX, viewportSizeY;
	GetViewportSize(viewportSizeX, viewportSizeY);
	FVector2D screenLocation(viewportSizeX * m_CrossHairXLocation, viewportSizeY * m_CrossHairYLocation);
	//UE_LOG(LogTemp, Warning, TEXT("Screen Location: %s"), *screenLocation.ToString());

	// "De-project" the screen position of the crosshair to a world direction
	FVector lookDirection;
	if (GetLookDirection(screenLocation, lookDirection))
	{
		//UE_LOG(LogTemp, Warning, TEXT("Look Direction: %s"), *lookDirection.ToString());
		// Line-trace along that look direction, and see what we hit (up to a max range)
		// Line-trace along that look direction, and see what we hit (up to a max range)
		GetLookVectorHitLocation(lookDirection, HitLocation);
	}
	return true;
}

bool ATankPlayerController::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const
{
	FVector camerWorldLocation;  // to be discarded
	return DeprojectScreenPositionToWorld(ScreenLocation.X, ScreenLocation.Y, camerWorldLocation, LookDirection);
}

bool ATankPlayerController::GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const
{
	// Raycast out to a certain distance (m_Reach)
	FHitResult hitResult;
	FVector startLocation = PlayerCameraManager->GetCameraLocation();
	FVector endLocation = startLocation + (LookDirection * m_LineTraceRange);
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());
	if (GetWorld()->LineTraceSingleByChannel(hitResult, startLocation, endLocation, ECollisionChannel::ECC_Visibility))
	{
		// set hit location
		HitLocation = hitResult.Location;
		return true;
	}

	return false;
}