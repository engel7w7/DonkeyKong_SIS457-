// Fill out your copyright notice in the Description page of Project Settings.


#include "Barril.h"

// Sets default values
ABarril::ABarril()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	setrodando(true);
	settamanio(40);

}

// Called when the game starts or when spawned
void ABarril::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarril::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABarril::rodar()
{
	GEngine->AddOnScreenDebugMessage(-1, 29, FColor::Yellow, TEXT("[barril] rodando"));
}

void ABarril::detener()
{
	GEngine->AddOnScreenDebugMessage(-1, 23, FColor::Red, TEXT("[barril] se detuvo"));
}

