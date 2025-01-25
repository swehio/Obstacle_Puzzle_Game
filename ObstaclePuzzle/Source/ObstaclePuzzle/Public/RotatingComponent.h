#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RotatingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OBSTACLEPUZZLE_API URotatingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	URotatingComponent();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float RotationSpeedX;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float RotationSpeedY;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float RotationSpeedZ;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
