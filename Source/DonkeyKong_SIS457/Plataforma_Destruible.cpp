// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma_Destruible.h"

APlataforma_Destruible::APlataforma_Destruible()
{
	setactivo(true);
	setduracion(20);
}

void APlataforma_Destruible::destruir()
{
	GEngine->AddOnScreenDebugMessage(-1, 37, FColor::Emerald, TEXT("[plataforma_destruible] se detruyo"));
}
