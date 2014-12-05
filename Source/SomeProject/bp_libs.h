#include "SomeProject.h"

static TSubclassOf<class ACubeActor> GetCubeBP()
{
	static ConstructorHelpers::FObjectFinder<UBlueprint> CubeBP(TEXT("Blueprint'/Game/BP_Cube.BP_Cube'"));
	if (CubeBP.Object){
		return (UClass*)CubeBP.Object->GeneratedClass;
	}
	return NULL;
}

template <typename ObjectType>
static FORCEINLINE ObjectType* SpawnBP(
	UWorld* TheWorld,
	UClass* TheBP,
	const FVector& Loc,
	const FRotator& Rot,
	const bool bNoCollisionFail = true,
	AActor* Owner = NULL,
	APawn* Instigator = NULL
	){
	if (!TheWorld) return NULL;
	if (!TheBP) return NULL;
	//~~

	FActorSpawnParameters SpawnInfo;
	SpawnInfo.bNoCollisionFail = bNoCollisionFail;
	SpawnInfo.Owner = Owner;
	SpawnInfo.Instigator = Instigator;
	SpawnInfo.bDeferConstruction = false;

	return TheWorld->SpawnActor<ObjectType>(TheBP, Loc, Rot, SpawnInfo);
}