// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	int32 MyInt = 99;

	UPROPERTY(EditAnywhere)
	int32 InputA = 2;

	UPROPERTY(EditAnywhere)
	int32 InputB = 3;

	UPROPERTY(EditAnywhere)
	int32 A_plus_B = 0;

	UPROPERTY(EditAnywhere)
	float MyFloat = 23.23;

	UPROPERTY(EditAnywhere)
	bool IsMoving = false;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(1, 2, 3);

};
