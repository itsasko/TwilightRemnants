// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CatOiia.generated.h"

UCLASS()
class TWILIGHTREMNANTS_API ACatOiia : public AActor
{
	GENERATED_BODY()
	
public:	
	ACatOiia();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* CatOiiaMesh;
protected:
	virtual void BeginPlay() override;
	float RotationSpeed = 300.f;
	

};
