#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class SPACE_INVADERS_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	APlayerPawn();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Speed;
	
protected:
	virtual void BeginPlay() override;
	void OnMoveLeft(const float Value);
	void OnMoveRight(const float Value);
	void MoveHorizontal(const float Value);

private:
	FVector RightVector;
};
