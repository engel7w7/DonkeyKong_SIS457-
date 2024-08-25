// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo_Trampa.h"
#include "Obstaculo_Espina.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculo_Espina : public AObstaculo_Trampa
{
	GENERATED_BODY()
public:
	AObstaculo_Espina();
private:
	virtual void BeginPlay() override;
public:
	void retraer();
};
