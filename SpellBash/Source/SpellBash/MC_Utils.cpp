// Fill out your copyright notice in the Description page of Project Settings.
#include "MC_Utils.h"

UMC_Utils::UMC_Utils() {
	PrimaryComponentTick.bCanEverTick = true;
    CurrentCooldown = MaxCooldown;
    DeltaTime = FApp::GetDeltaTime();
}


void UMC_Utils::BeginPlay() {
	Super::BeginPlay();
}

void UMC_Utils::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UMC_Utils::IsOnCooldown(bool CooldownOn) {
    if (CooldownOn) {
        CurrentCooldown -= DeltaTime;

        if (CurrentCooldown <= 0.f) {
            CurrentCooldown = MaxCooldown;
            return false;
        }
        return true;
    }
    return false;
}
