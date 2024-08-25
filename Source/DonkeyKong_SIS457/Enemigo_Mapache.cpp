// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo_Mapache.h"

AEnemigo_Mapache::AEnemigo_Mapache()
{
	setvida(7);
	setrobar(true);
}

void AEnemigo_Mapache::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 11, FColor::Black, FString::Printf(TEXT("La vida del enemigo es: %d"), vida));
	GEngine->AddOnScreenDebugMessage(-1, 11, FColor::Black, FString::Printf(TEXT("El enemigo esta: %d"), robar));
}

void AEnemigo_Mapache::atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 11, FColor::Black,TEXT("[mapache] te golpeo"));
}

void AEnemigo_Mapache::mover()
{
	GEngine->AddOnScreenDebugMessage(-1, 11, FColor::Black,TEXT("[mapache] esta corriendo"));
}
