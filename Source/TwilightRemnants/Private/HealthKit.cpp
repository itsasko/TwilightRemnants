#include "HealthKit.h"
#include "Interfaces/PickupInterface.h"
#include "NiagaraFunctionLibrary.h"
#include "Enemies\Enemy.h"

void AHealthKit::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<AEnemy>(OtherActor)) return;
	TScriptInterface<IPickupInterface> IPickupInterface = OtherActor;
	if (IPickupInterface)
	{
		IPickupInterface->AddHealth(this);
		SpawnPickupSystem();
		SpawnPickupSound();
		Destroy();
	}
}
