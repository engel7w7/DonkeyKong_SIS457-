// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AEnemigo : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	int vida;
	float velocidad, px, py, pz;
	float danio;
protected:
	int getvida() { return vida; }
	void setvida(int _vida) { vida = _vida; }
	void getdanio(float _danio) { danio = _danio; }
	virtual float getvelocidad() { return velocidad; }
	virtual void setvelocidad(int _velocidad) { velocidad = _velocidad; }
public:
	virtual void mover();
	virtual void atacar();
};
