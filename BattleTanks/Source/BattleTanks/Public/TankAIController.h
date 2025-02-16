// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKS_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
	private:
		virtual void BeginPlay() override;
		virtual void Tick(float DeltaTime) override;

		ATank* GetPlayerTank() const;
		void AimTowardsCrossHair();
		bool GetSightRayHitLocation(FVector &OutHitLocation) const;
};
