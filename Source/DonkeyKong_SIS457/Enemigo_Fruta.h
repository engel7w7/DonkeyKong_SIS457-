// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "Enemigo_Fruta.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigo_Fruta : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigo_Fruta();
private:
	virtual void BeginPlay() override;
private:
	float posx, posy, posz;
public:
	float getposx() { return posx; }
	void setposx(float _posx) { posx = _posx; }
	float getposy() { return posy; }
	void setposy(float _posy) { posy = _posy; }
	float getposz() { return posz; }
	void setposz(float _posz) { posz = _posz; }
	void duracion();
};
