// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo_Fruta.h"
#include "Enemigo_Platano.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigo_Platano : public AEnemigo_Fruta
{
	GENERATED_BODY()
public:
	AEnemigo_Platano();
private:
	virtual void BeginPlay()override;
private:
	bool pelado;
public:
	void resbalar();
	bool getpelado() { return pelado; }
	void setpelado(bool _pelado) { pelado = _pelado; }
};
