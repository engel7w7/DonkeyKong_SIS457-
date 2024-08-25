// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo_Platano.h"

AEnemigo_Platano::AEnemigo_Platano()
{
	setpelado(true);
	setposx(10);
	setposy(10);
	setposz(10);
}

void AEnemigo_Platano::BeginPlay()
{
}

void AEnemigo_Platano::resbalar()
{
	GEngine->AddOnScreenDebugMessage(-1, 13, FColor::Magenta, TEXT("[platano] te hizo caer"));

}
