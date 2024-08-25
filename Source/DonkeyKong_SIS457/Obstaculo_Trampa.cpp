// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo_Trampa.h"

AObstaculo_Trampa::AObstaculo_Trampa()
{
	setdanio(10);
}

void AObstaculo_Trampa::activado()
{
	GEngine->AddOnScreenDebugMessage(-1, 21, FColor::Silver, TEXT("[obstaculo_trampa] esta desactivada"));
}

void AObstaculo_Trampa::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 21, FColor::Silver,TEXT("[obstaculo_trampa] danio por defecto "));
}
