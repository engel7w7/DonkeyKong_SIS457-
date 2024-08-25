// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo_Pared.h"

AObstaculo_Pared::AObstaculo_Pared()
{
	setmovilidad(true);
	setvida(5);
	settipo(3);
	setresistencia(40);
}

void AObstaculo_Pared::activado()
{
	GEngine->AddOnScreenDebugMessage(-1, 29, FColor::Red, TEXT("[obstaculo_pared] spawneado"));
}
