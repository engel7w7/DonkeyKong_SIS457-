// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <iostream>
#include "CoreMinimal.h"
#include "Enemigo.h"
#include "Enemigo_Mono.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigo_Mono : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigo_Mono();
protected:
	virtual void BeginPlay();
protected:
	float resistencia, vel_ataq;
public:
	float getresistencia() { return resistencia; }
	void setresistencia(float _resistencia) { resistencia = _resistencia; }
	float getvel_ataq() { return vel_ataq; }
	void setvel_ataq(float _vel_ataq) { vel_ataq = _vel_ataq; }
	virtual void atacar() override;
	virtual void mover() override;
	void gritar();
	void estado();
};
