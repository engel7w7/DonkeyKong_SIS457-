// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo_Zorrillo.h"

AEnemigo_Zorrillo::AEnemigo_Zorrillo()
{
	setvida(4);
	setestado_gas(0);
}

void AEnemigo_Zorrillo::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 7, FColor::Yellow, FString::Printf(TEXT("La vida del enemigo es: %d"), vida));
}

void AEnemigo_Zorrillo::atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 7, FColor::Yellow,TEXT("[zorrillo] no esta atacando"));
}

void AEnemigo_Zorrillo::mover()
{
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, TEXT("[zorrillo] no se mueve"));
}

void AEnemigo_Zorrillo::gas()
{
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, TEXT("[zorrillo] disparo gas"));
}
