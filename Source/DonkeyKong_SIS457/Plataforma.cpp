// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma.h"

// Sets default values
APlataforma::APlataforma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FVector aux = FVector(10.0f, 10.0f, 10.0f);
	settamanio(aux);
	setactivo(true);
	GEngine->AddOnScreenDebugMessage(-1, 35, FColor::Green, TEXT("[plataforma] esta activa //por defecto"));
}

// Called when the game starts or when spawned
void APlataforma::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

