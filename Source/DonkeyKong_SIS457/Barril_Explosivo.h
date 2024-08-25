// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barril.h"
#include "Barril_Explosivo.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API ABarril_Explosivo : public ABarril
{
	GENERATED_BODY()
public:
	ABarril_Explosivo();
private:
	float radio_explosion, danio_explosion;
public:
	virtual void rodar() override;
	virtual void detener() override;
	void explotar();
	float getradio_explosion() { return radio_explosion; }
	void setradio_explosion(float _radio_explosion) { radio_explosion = _radio_explosion; }
	float getdanio_explosion() { return danio_explosion; }
	void setdanio_explosion(float _danio_explosion) { danio_explosion = _danio_explosion; }
};
