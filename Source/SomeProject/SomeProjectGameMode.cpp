// Fill out your copyright notice in the Description page of Project Settings.

#include "SomeProject.h"
#include "SomeProjectGameMode.h"
#include "CubeActor.h"
#include "BP_Libs.h"

ASomeProjectGameMode::ASomeProjectGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	FVector Position = FVector(0, 0, 0);
	FRotator Rotation = FRotator(0);
	SpawnBP<ACubeActor>(GetWorld(), GetCubeBP(), Position, Rotation);
}