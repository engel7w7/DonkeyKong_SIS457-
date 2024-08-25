// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo_Espina.h"

AObstaculo_Espina::AObstaculo_Espina()
{
	setdanio(10);
	setalto(5);
	setlargo(15);
	setancho(5);
}

void AObstaculo_Espina::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 23, FColor::Red,TEXT("[obstaculo_trampa] spawneado"));
}

void AObstaculo_Espina::retraer()
{
	GEngine->AddOnScreenDebugMessage(-1, 23, FColor::Red, TEXT("[obstaculo_Espina] no se retrae"));
}
