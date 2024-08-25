// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plataforma.h"
#include "Plataforma_Movil.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API APlataforma_Movil : public APlataforma
{
	GENERATED_BODY()
public:
	APlataforma_Movil();
private:
	float velocidad;
	FVector posicion;
public:
	float getvelocidad() { return velocidad; }
	void setvelocidad(float _velocidad) { velocidad = _velocidad; }
	FVector getposicion() { return posicion; }
	void setposicion(FVector _posicion) { posicion = _posicion; }
	void mover_posicion();
};
