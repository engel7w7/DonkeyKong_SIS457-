// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "Enemigo_Mapache.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigo_Mapache : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigo_Mapache();
protected:
	bool robar;
	virtual void BeginPlay() override;
public:
	virtual void atacar() override;
	virtual void mover()override;
	bool getrobar() { return robar; }
	void setrobar(bool _robar) { robar = _robar; }
};
