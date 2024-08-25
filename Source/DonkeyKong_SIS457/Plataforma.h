// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API APlataforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	FVector tamanio;
	bool activo;
public:
	FVector gettamanio() { return tamanio; }
	void settamanio(FVector _tamanio) { tamanio = _tamanio; }
	bool getactivo() { return activo; }
	void setactivo(bool _activo) { activo = _activo; }
};
