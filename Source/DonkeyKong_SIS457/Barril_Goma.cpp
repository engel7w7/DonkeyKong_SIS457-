// Fill out your copyright notice in the Description page of Project Settings.


#include "Barril_Goma.h"

ABarril_Goma::ABarril_Goma()
{
	setlv_rebote(10);
	settamanio(20);
}

void ABarril_Goma::rebotar()
{
	GEngine->AddOnScreenDebugMessage(-1, 31, FColor::Cyan, TEXT("[barril_rebote] rebotando"));
}
void ABarril_Goma::detener()
{
	GEngine->AddOnScreenDebugMessage(-1, 31, FColor::Cyan, TEXT("[barril_rebote] dejo de rebotar"));
}
