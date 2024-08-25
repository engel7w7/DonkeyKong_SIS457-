// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "Enemigo_Zorrillo.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigo_Zorrillo : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigo_Zorrillo();
protected:
	bool estado_gas;
	virtual void BeginPlay() override;
public:
	virtual void atacar() override;
	virtual void mover() override;
	void gas();
	bool getestado_gas() { return estado_gas; }
	void setestado_gas(bool _estado_gas) { estado_gas = _estado_gas; }
};
