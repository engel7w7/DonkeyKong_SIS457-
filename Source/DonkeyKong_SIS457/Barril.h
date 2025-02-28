// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Barril.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API ABarril : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarril();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	float tamanio;
	bool rodando;
public:
	float gettamanio() { return tamanio; }
	void settamanio(float _tamanio) { tamanio = _tamanio; }
	bool getrodando() { return rodando; }
	void setrodando(bool _rodando) { rodando = _rodando; }
	virtual void rodar();
	virtual void detener();
};
