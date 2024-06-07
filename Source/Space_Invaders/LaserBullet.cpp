#include "LaserBullet.h"
#include "Components/StaticMeshComponent.h"

ALaserBullet::ALaserBullet()
{
	PrimaryActorTick.bCanEverTick = true;
	
	LaserBulletMesh = CreateDefaultSubobject<UStaticMeshComponent>("LaserBulletMesh");
}

void ALaserBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALaserBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

