
#include "CatOiia.h"

ACatOiia::ACatOiia()
{

	PrimaryActorTick.bCanEverTick = true;
	CatOiiaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CatOiiaMeshComponent"));
	RootComponent = CatOiiaMesh;

}

void ACatOiia::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACatOiia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FQuat QuatRotation = FQuat(FVector(0, 0, 1), FMath::DegreesToRadians(RotationSpeed*DeltaTime));
	AddActorLocalRotation(QuatRotation);

}

