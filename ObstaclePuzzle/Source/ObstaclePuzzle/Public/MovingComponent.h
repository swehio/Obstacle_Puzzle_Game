#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovingComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OBSTACLEPUZZLE_API UMovingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UMovingComponent();

protected:
	virtual void BeginPlay() override;
	

	FVector StartLocation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MoveDist;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxRange;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float addSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool MoveX;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool MoveY;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool MoveZ;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
