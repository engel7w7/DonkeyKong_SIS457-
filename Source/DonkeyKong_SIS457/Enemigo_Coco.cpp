// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo_Coco.h"

AEnemigo_Coco::AEnemigo_Coco()
{
	setduracion(10);
}

void AEnemigo_Coco::BeginPlay()
{
}

void AEnemigo_Coco::caer()
{
	GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Emerald, TEXT("[coco] te golpeo la cabeza"));
}
