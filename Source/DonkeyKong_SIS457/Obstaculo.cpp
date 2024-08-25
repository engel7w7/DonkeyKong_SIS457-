// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo.h"

// Sets default values
AObstaculo::AObstaculo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FVector aux = FVector(10.0f, 15.0f, 20.0f);
	setpos(aux);
}

// Called when the game starts or when spawned
void AObstaculo::BeginPlay()
{
	Super::BeginPlay();
	getpos();
}

// Called every frame
void AObstaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstaculo::activado()
{
	GEngine->AddOnScreenDebugMessage(-1, 19, FColor::Turquoise, TEXT("[obstaculo] esta activado"));
}

