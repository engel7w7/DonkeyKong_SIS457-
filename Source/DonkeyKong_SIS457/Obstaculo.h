// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstaculo.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AObstaculo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstaculo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	float ancho, alto, largo;
	FVector pos;
public:
	virtual void activado();
	float getancho() { return ancho; }
	void setancho(float _ancho) { ancho = _ancho; }
	float getalto() { return alto; }
	void setalto(float _alto) { alto = _alto; }
	float getlargo() { return largo; }
	void setlargo(float _largo) { largo = _largo; }
	FVector getpos() { return pos; }
	void setpos(FVector _pos) { pos = _pos; }
};
