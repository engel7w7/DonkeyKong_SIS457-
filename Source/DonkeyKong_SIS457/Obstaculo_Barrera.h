// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "Obstaculo_Barrera.generated.h"


/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculo_Barrera : public AObstaculo
{
	GENERATED_BODY()
public:
	AObstaculo_Barrera();
protected:
	float vida;
	bool destruible;
	float resistencia;
	int  tipo;
public:
	int gettipo() { return tipo; }
	void settipo(int _tipo) { tipo = _tipo; }
	float getresistencia() { return resistencia; }
	void setresistencia(float _resistencia) { resistencia = _resistencia; }
	float getvida() { return vida; }
	void setvida(float _vida) { vida = _vida; }
	bool getdestruible() { return destruible; }
	void setdestruible(bool _destruible) { destruible = _destruible; }
public:
	virtual void activado() override;
};
