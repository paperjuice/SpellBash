// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Misc/App.h"
#include "MC_Utils.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPELLBASH_API UMC_Utils : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMC_Utils();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UFUNCTION(BlueprintCallable)
    bool IsOnCooldown(bool CooldownOn);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Cooldown")
    float MaxCooldown = 0.f;

private:
    float CurrentCooldown = 0.f;
    float DeltaTime;
};
