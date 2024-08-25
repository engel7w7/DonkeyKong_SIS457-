// Fill out your copyright notice in the Description page of Project Settings.
#include "Enemigo_Mono.h"

AEnemigo_Mono::AEnemigo_Mono()
{
	setvel_ataq(10.0f);
	setresistencia(10.5f);
}

void AEnemigo_Mono::BeginPlay()
{
	setvida(20);
	GEngine->AddOnScreenDebugMessage(-1, 17, FColor::Orange, FString::Printf(TEXT("[mono] su vida es: %d"), vida));

}

void AEnemigo_Mono::atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 17, FColor::Orange, TEXT("[mono] Esta Golpeando"));
}

void AEnemigo_Mono::mover()
{
	GEngine->AddOnScreenDebugMessage(-1, 17, FColor::Orange, TEXT("[mono] Esta corriendo"));
}

void AEnemigo_Mono::gritar()
{
	GEngine->AddOnScreenDebugMessage(-1, 17, FColor::Orange, TEXT("[mono] Esta gritando"));
}

void AEnemigo_Mono::estado()
{
	GEngine->AddOnScreenDebugMessage(-1, 17, FColor::Orange, TEXT("[mono] Esta enfadado!!!!"));
}
