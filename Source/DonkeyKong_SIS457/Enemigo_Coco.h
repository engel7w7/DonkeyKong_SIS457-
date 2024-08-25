// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo_Fruta.h"
#include "Enemigo_Coco.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigo_Coco : public AEnemigo_Fruta
{
	GENERATED_BODY()
public:
	AEnemigo_Coco();
protected:
	virtual void BeginPlay() override;
	float duracion;
public:
	void caer();
	float getduracion() { return duracion; }
	void setduracion(float _duracion) { duracion = _duracion; }
};
