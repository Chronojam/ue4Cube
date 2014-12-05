// Fill out your copyright notice in the Description page of Project Settings.

#include "SomeProject.h"
#include "CubeActor.h"


ACubeActor::ACubeActor(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	CubeMesh = PCIP.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("CubeMesh"));

	static ConstructorHelpers::FObjectFinder<UBlueprint> CubeBP(TEXT("Blueprint'/Game/BP_Cube.BP_Cube'"));
	if (CubeBP.Object){
		CubeBlueprint = (UClass*)CubeBP.Object->GeneratedClass;
	}
}