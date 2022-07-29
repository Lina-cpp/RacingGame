// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RACINGGAME_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health")
	int MaxHealth = 3;	//our max health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health")
	int Health; 	//Health that will change


	UFUNCTION(BlueprintCallable)
    void setMaxHealth(int CarMaxHealth) 
	{
      MaxHealth = CarMaxHealth;
    }

    // Getter
	UFUNCTION(BlueprintCallable)
    int getMaxHealth() 
	{
      return MaxHealth;
    }





//Health setter and getter
    // Setter
	UFUNCTION(BlueprintCallable)
    void setHealth(int CurrentHealth) 
	{
      Health = CurrentHealth;
    }

    // Getter
	UFUNCTION(BlueprintCallable)
    int getHealth() 
	{
      return Health;
    }

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
