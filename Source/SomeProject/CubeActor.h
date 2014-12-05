// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CubeActor.generated.h"

/**
 * 
 */
UCLASS()
class SOMEPROJECT_API ACubeActor : public AActor
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(Category = Meshes, VisibleAnywhere)
	TSubobjectPtr<UStaticMeshComponent> CubeMesh;

public:
	TSubclassOf<class ACubeActor> CubeBlueprint;
};
