// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barril.h"
#include "Barril_Goma.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API ABarril_Goma : public ABarril
{
	GENERATED_BODY()
public:
	ABarril_Goma();
private:
	float lv_rebote;
public:
	void rebotar();
	virtual void detener() override;
	float getlv_rebote() { return lv_rebote; }
	void setlv_rebote(float _lv_rebote) { lv_rebote = _lv_rebote; }
};
