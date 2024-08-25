// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	vida = 10;
	velocidad = 50.0f;
	danio = 10.0f;

}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	setvida(5);
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, FString::Printf(TEXT("La vida del enemigo es: %d"),vida));
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigo::mover()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Movimiento del enemigo"));
}

void AEnemigo::atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Ataque del enemigo"));
}

