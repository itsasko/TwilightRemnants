#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "HealthKit.generated.h"

UCLASS()
class TWILIGHTREMNANTS_API AHealthKit : public AItem
{
	GENERATED_BODY()
protected:
	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	) override;
public:
	UPROPERTY(EditAnywhere, Category = "HealthKit Properties")
	float Health = 50.f;

	FORCEINLINE float GetHealth() const { return Health; }
};
