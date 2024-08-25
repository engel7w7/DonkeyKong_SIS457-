// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plataforma.h"
#include "Plataforma_Destruible.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API APlataforma_Destruible : public APlataforma
{
	GENERATED_BODY()
public:
	APlataforma_Destruible();
private:
	float duracion;
public:
	float getduracion() { return duracion; }
	void setduracion(float _duracion) { duracion = _duracion; }
	void destruir();
};
