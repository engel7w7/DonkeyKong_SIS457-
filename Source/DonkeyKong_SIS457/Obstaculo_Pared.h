// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo_Barrera.h"
#include "Obstaculo_Pared.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculo_Pared : public AObstaculo_Barrera
{
	GENERATED_BODY()
public:
	AObstaculo_Pared();
public:
	virtual void activado() override;
private:
	bool movilidad;
public:
	bool getmovilidad() { return movilidad; }
	void setmovilidad(bool _movilidad) { movilidad = _movilidad; }
};
