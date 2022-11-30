// Copyright Epic Games, Inc. All Rights Reserved.


#include "UEBricks_Breaker4GameModeBase.h"
#include "Paddle.h"

AUEBricks_Breaker4GameModeBase::AUEBricks_Breaker4GameModeBase()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
		PrimaryActorTick.bCanEverTick = true;
}
// Called when the game starts or when spawned
void AUEBricks_Breaker4GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	//Create 4 Inventory
	for (int i = 0; i <= 4; i++)
	{
		APaddle* SpawnedPaddle = GetWorld() -> SpawnActor<APaddle>(APaddle::StaticClass());
		if (SpawnedPaddle)
		{
			//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
				Paddle = SpawnedPaddle;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
				FString::Printf(TEXT("%s has been created"), *Paddle->GetName()));
		}
	}
}
// Called every frame
void AUEBricks_Breaker4GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

