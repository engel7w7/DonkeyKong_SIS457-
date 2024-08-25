// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo_PuercoEspin.h"

AEnemigo_PuercoEspin::AEnemigo_PuercoEspin()
{
	setvida(1);
	settiene_espinas(true);
	gettiene_espinas();
}

void AEnemigo_PuercoEspin::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 9, FColor::Blue, FString::Printf(TEXT("La vida del enemigo es: %d"), vida));
}

void AEnemigo_PuercoEspin::pinchar()
{
	GEngine->AddOnScreenDebugMessage(-1, 9, FColor::Blue,TEXT("[PuercoEspin] te pincho"));
}
void AEnemigo_PuercoEspin::atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 9, FColor::Blue,TEXT("[PuercoEspin] ataca"));
}

void AEnemigo_PuercoEspin::mover()
{
	GEngine->AddOnScreenDebugMessage(-1, 9, FColor::Blue,TEXT("[PuercoEspin] se durmio"));
}
