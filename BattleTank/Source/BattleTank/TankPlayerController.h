// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 *
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime);

private:
	ATank* GetControlledTank() const;
	// Start the tank moving the barrel, so that a shot would hit where
	// the crosshair intersects the world
	void AimTowardsCrosshair();
	// Return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& HitLocation) const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

	UPROPERTY(EditAnywhere)
	float m_CrossHairXLocation = 0.5;
	UPROPERTY(EditAnywhere)
	float m_CrossHairYLocation = 0.3333;
	UPROPERTY(EditAnywhere)
	float m_LineTraceRange = 1000000;
};
