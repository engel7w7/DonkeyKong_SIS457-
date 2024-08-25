// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "Enemigo_PuercoEspin.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigo_PuercoEspin : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigo_PuercoEspin();
protected:
	virtual void BeginPlay()override;
	bool tiene_espinas;
public:
	void pinchar();
	bool gettiene_espinas() { return tiene_espinas; }
	void settiene_espinas(bool _tiene_espinas) { tiene_espinas = _tiene_espinas; }
	virtual void atacar() override;
	virtual void mover() override;
};
