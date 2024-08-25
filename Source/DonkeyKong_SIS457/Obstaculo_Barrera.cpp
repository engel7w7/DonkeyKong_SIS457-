// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo_Barrera.h"

AObstaculo_Barrera::AObstaculo_Barrera()
{
	setvida(50);
	setdestruible(false);
}

void AObstaculo_Barrera::activado()
{
	float aux1 = getvida();
	bool aux2 = getdestruible();
	GEngine->AddOnScreenDebugMessage(-1, 25, FColor::Black, TEXT("[obstaculo_barrera]  vida por defecto "));
	GEngine->AddOnScreenDebugMessage(-1, 25, FColor::Black, TEXT("[obstaculo_barrera] es destruible "));
}
