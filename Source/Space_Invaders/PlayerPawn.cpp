#include "PlayerPawn.h"

APlayerPawn::APlayerPawn(): Speed(0)
{
	PrimaryActorTick.bCanEverTick = true;
	RightVector = GetActorRightVector();
}

void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerPawn::OnMoveRight(const float Value) { MoveHorizontal(Value); }

void APlayerPawn::OnMoveLeft(const float Value) { MoveHorizontal(-Value); }

void APlayerPawn::MoveHorizontal(const float Value)
{
	if(Value == 0.0f) return;
	AddMovementInput(RightVector, Value * Speed);
}

void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerPawn::OnMoveRight);
	PlayerInputComponent->BindAxis("MoveLeft", this, &APlayerPawn::OnMoveLeft);
}

