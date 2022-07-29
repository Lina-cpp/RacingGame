// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ShapeComponent.h"
#include "Components/PrimitiveComponent.h"

#include "PickUp.generated.h"

UCLASS()
class RACINGGAME_API APickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(EditAnywhere)
	USceneComponent *PickupRoot;	  //root
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent *PickupMesh; //pickup mesh
	UPROPERTY(EditAnywhere)
	UShapeComponent *PickupBox;		  //collision box

	//activates when car overlaps with box
	UFUNCTION()
	void OnCarEnterBox(UPrimitiveComponent* OverlappedComp, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult );


};
