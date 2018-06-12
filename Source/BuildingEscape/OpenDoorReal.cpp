// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoorReal.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
UOpenDoorReal::UOpenDoorReal()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoorReal::BeginPlay()
{
	Super::BeginPlay();

	// Find the owning Actor
	AActor* Owner = GetOwner();
	
	// Create a rotator
	FRotator NewRotation = FRotator(0.0f, 20.0f, 0.0f);

	Owner->SetActorRotation(NewRotation);
	
}


// Called every frame
void UOpenDoorReal::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

