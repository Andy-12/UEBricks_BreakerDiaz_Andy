// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UEBricks_Breaker4GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UEBRICKS_BREAKER4_API AUEBricks_Breaker4GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AUEBricks_Breaker4GameModeBase();
private:
	//The Inventory of this Actor
	UPROPERTY()
		class APaddle* Paddle;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
