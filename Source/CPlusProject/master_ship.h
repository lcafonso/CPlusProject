// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "master_ship.generated.h"

UCLASS()
class CPLUSPROJECT_API Amaster_ship : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	Amaster_ship();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
		float base_speed{ 0 };

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
		float current_speed{ 0 };

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
		float base_acceleration{ 0 };

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
		float current_acceleration{ 0 };

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
		float base_pitch{ 0 };

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
		float base_yaw{ 0 };

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
		float base_roll{ 0 };

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
		float current_pitch{ 0 };

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
		float current_yaw{ 0 };

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
		float current_roll{ 0 };

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
