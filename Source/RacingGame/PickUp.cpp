// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUp.h"
#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/ShapeComponent.h"


// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//pickup root
	PickupRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Pickup root"));
	RootComponent = PickupRoot;

	//Pickup Mesh
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pickup Mesh"));
	PickupMesh->SetupAttachment(RootComponent);

	//pickup box
	PickupBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Pickup box"));
	PickupBox->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	PickupBox->SetGenerateOverlapEvents(true);
	PickupBox->OnComponentBeginOverlap.AddDynamic(this, &APickUp::OnCarEnterBox);
	PickupBox->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void APickUp::OnCarEnterBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	/*
	//Destroy the pickup when we overlap
	Destroy();
	*/
}