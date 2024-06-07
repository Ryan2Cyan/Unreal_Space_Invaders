#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaserBullet.generated.h"

UCLASS()
class SPACE_INVADERS_API ALaserBullet : public AActor
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, Category="Components")
	class UStaticMeshComponent* LaserBulletMesh;
	
	ALaserBullet();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
};
