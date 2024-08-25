// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo_Fruta.h"

AEnemigo_Fruta::AEnemigo_Fruta()
{
	setposx(40);
	setposy(50);
	setposz(60);
}

void AEnemigo_Fruta::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 12, FColor::Green, FString::Printf(TEXT("La posicion del enemigo es"), posx));
}

void AEnemigo_Fruta::duracion()
{
	GEngine->AddOnScreenDebugMessage(-1, 12, FColor::Green,TEXT("[duracion por defecto]"));
}
