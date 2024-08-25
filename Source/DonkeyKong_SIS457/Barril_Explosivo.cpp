// Fill out your copyright notice in the Description page of Project Settings.


#include "Barril_Explosivo.h"

ABarril_Explosivo::ABarril_Explosivo()
{
	setdanio_explosion(50);
	setradio_explosion(10);
}

void ABarril_Explosivo::rodar()
{
	GEngine->AddOnScreenDebugMessage(-1, 33, FColor::Orange, TEXT("[barril_explosivo] esta rodando"));
}

void ABarril_Explosivo::detener()
{
	GEngine->AddOnScreenDebugMessage(-1, 33, FColor::Orange, TEXT("[barril_explosivo] ese detuvo"));
}

void ABarril_Explosivo::explotar()
{
	GEngine->AddOnScreenDebugMessage(-1, 33, FColor::Orange, TEXT("[barril_explosivo] exploto"));
}
