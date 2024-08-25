// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo_Barrera.h"
#include "Obstaculo_Puerta.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculo_Puerta : public AObstaculo_Barrera
{
	GENERATED_BODY()
public:
	AObstaculo_Puerta();
private:
	bool usar;
	bool llave;
public:
	virtual void activado() override;
	bool getllave() { return llave; }
	void setllave(bool _llave) { llave = _llave; }
	bool getusar() { return usar; }
	void setusar(bool _usar) { usar = _usar; }
};
