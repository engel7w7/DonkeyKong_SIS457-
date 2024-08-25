// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma_Movil.h"

APlataforma_Movil::APlataforma_Movil()
{
	FVector aux = FVector(10.0f, 10.0f, 15.0f);
	setposicion(aux);
	setvelocidad(10);
}

void APlataforma_Movil::mover_posicion()
{
	GEngine->AddOnScreenDebugMessage(-1, 39, FColor::White, TEXT("[plataforma_movil] se mueve"));
}
