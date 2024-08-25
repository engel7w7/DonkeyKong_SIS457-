// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "Obstaculo_Trampa.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculo_Trampa : public AObstaculo
{
	GENERATED_BODY()
public:
	AObstaculo_Trampa();
public:
	virtual void activado() override;
protected:
	float danio;
	virtual void BeginPlay() override;
public:
	float getdanio() { return danio; }
	void setdanio(float _danio) { danio = _danio; }
};
