// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_SIS457GameMode.h"
#include "DonkeyKong_SIS457Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Enemigo.h"
#include "Enemigo_Zorrillo.h"
#include "Enemigo_PuercoEspin.h"
#include "Enemigo_Mapache.h"
#include "Enemigo_Fruta.h"
#include "Enemigo_Platano.h"
#include "Enemigo_Coco.h"
#include "Enemigo_Mono.h"
#include "Obstaculo.h"
#include "Obstaculo_Trampa.h"
#include "Obstaculo_Espina.h"
#include "Obstaculo_Barrera.h"
#include "Obstaculo_Puerta.h"
#include "Obstaculo_Pared.h"
#include "Barril.h"
#include "Barril_Goma.h"
#include "Barril_Explosivo.h"
#include "Plataforma.h"
#include "Plataforma_Destruible.h"
#include "Plataforma_Movil.h"
ADonkeyKong_SIS457GameMode::ADonkeyKong_SIS457GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ADonkeyKong_SIS457GameMode::BeginPlay()
{
	Super::BeginPlay();
	FVector SpawnLocation = FVector::ZeroVector;
	FRotator SpawnRotation = FRotator::ZeroRotator;
	AEnemigo* Enemigo1 = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), SpawnLocation, SpawnRotation);
	Enemigo1->atacar();
	Enemigo1->mover();
	AEnemigo_Zorrillo* Enemigo2 = GetWorld()->SpawnActor<AEnemigo_Zorrillo>(AEnemigo_Zorrillo::StaticClass(), SpawnLocation, SpawnRotation);
	Enemigo2->atacar();
	Enemigo2->mover();
	Enemigo2->gas();
	AEnemigo_PuercoEspin* Enemigo3 = GetWorld()->SpawnActor<AEnemigo_PuercoEspin>(AEnemigo_PuercoEspin::StaticClass(), SpawnLocation, SpawnRotation);
	Enemigo3->atacar();
	Enemigo3->mover();
	Enemigo3->pinchar();
	AEnemigo_Mapache* Enemigo4 = GetWorld()->SpawnActor<AEnemigo_Mapache>(AEnemigo_Mapache::StaticClass(), SpawnLocation, SpawnRotation);
	Enemigo4->atacar();
	Enemigo4->mover();
	Enemigo4->getrobar();
	AEnemigo_Fruta* Enemigo5 = GetWorld()->SpawnActor<AEnemigo_Fruta>(AEnemigo_Fruta::StaticClass(), SpawnLocation, SpawnRotation);
	Enemigo5->getposx();
	Enemigo5->getposy();
	Enemigo5->getposz();
	Enemigo5->duracion();
	AEnemigo_Platano* Enemigo6 = GetWorld()->SpawnActor<AEnemigo_Platano>(AEnemigo_Platano::StaticClass(),SpawnLocation ,SpawnRotation);
	Enemigo6->getposx();
	Enemigo6->getposy();
	Enemigo6->getposz();
	Enemigo6->resbalar();
	Enemigo6->getpelado();
	AEnemigo_Coco* Enemigo7 = GetWorld()->SpawnActor<AEnemigo_Coco>(AEnemigo_Coco::StaticClass(), SpawnLocation, SpawnRotation);
	Enemigo7->caer();
	Enemigo7->getduracion();
	AEnemigo_Mono*Enemigo8 = GetWorld()->SpawnActor<AEnemigo_Mono>(AEnemigo_Mono::StaticClass(), SpawnLocation, SpawnRotation);
	Enemigo8->gritar();
	Enemigo8->getresistencia();
	Enemigo8->atacar();
	Enemigo8->mover();
	Enemigo8->estado();
	AObstaculo* Obstaculo1 = GetWorld()->SpawnActor<AObstaculo>(AObstaculo::StaticClass(), SpawnLocation, SpawnRotation);
	Obstaculo1->activado();
	Obstaculo1->getpos();
	AObstaculo_Trampa* Obstaculo2= GetWorld()->SpawnActor<AObstaculo_Trampa>(AObstaculo_Trampa::StaticClass(), SpawnLocation, SpawnRotation);
	Obstaculo2->activado();
	AObstaculo_Espina* Obstaculo3 = GetWorld()->SpawnActor<AObstaculo_Espina>(AObstaculo_Espina::StaticClass(), SpawnLocation, SpawnRotation);
	Obstaculo3->activado();
	Obstaculo3->retraer();
	AObstaculo_Barrera* Obstaculo4 = GetWorld()->SpawnActor<AObstaculo_Barrera>(AObstaculo_Barrera::StaticClass(), SpawnLocation, SpawnRotation);
	Obstaculo4->activado();
	AObstaculo_Puerta* Obstaculo5 = GetWorld()->SpawnActor<AObstaculo_Puerta>(AObstaculo_Puerta::StaticClass(), SpawnLocation, SpawnRotation);
	Obstaculo5->activado();
	Obstaculo5->getllave();
	AObstaculo_Pared* Obstaculo6 = GetWorld()->SpawnActor<AObstaculo_Pared>(AObstaculo_Pared::StaticClass(), SpawnLocation, SpawnRotation);
	Obstaculo6->activado();
	ABarril* Barril1 = GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), SpawnLocation, SpawnRotation);
	Barril1->rodar();
	Barril1->detener();
	ABarril_Goma* Barril2 = GetWorld()->SpawnActor<ABarril_Goma>(ABarril_Goma::StaticClass(), SpawnLocation, SpawnRotation);
	Barril2->rebotar();
	Barril2->detener();
	ABarril_Explosivo* Barril3 = GetWorld()->SpawnActor<ABarril_Explosivo>(ABarril_Explosivo::StaticClass(), SpawnLocation, SpawnRotation);
	Barril3->rodar();
	Barril3->detener();
	Barril3->explotar();
	APlataforma* Plataforma1 = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), SpawnLocation, SpawnRotation);
	Plataforma1->getactivo();
	APlataforma_Destruible* Plataforma2 = GetWorld()->SpawnActor<APlataforma_Destruible>(APlataforma_Destruible::StaticClass(), SpawnLocation, SpawnRotation);
	Plataforma2->destruir();
	APlataforma_Movil* Plataforma3 = GetWorld()->SpawnActor<APlataforma_Movil>(APlataforma_Movil::StaticClass(), SpawnLocation, SpawnRotation);
	Plataforma3->mover_posicion();
}
