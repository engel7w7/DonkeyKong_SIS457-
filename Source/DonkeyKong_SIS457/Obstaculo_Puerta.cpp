// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo_Puerta.h"

AObstaculo_Puerta::AObstaculo_Puerta()
{
	setalto(10);
	setancho(15);
	setlargo(10);
	setusar(true);
	setllave(false);
	settipo(1);
}

void AObstaculo_Puerta::activado()
{
	GEngine->AddOnScreenDebugMessage(-1, 27, FColor::Blue, TEXT("[obstaculo_puerta] esta desactivada /por defecto/"));
}
