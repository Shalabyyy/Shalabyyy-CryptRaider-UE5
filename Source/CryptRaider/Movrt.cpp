// Fill out your copyright notice in the Description page of Project Settings.


#include "Movrt.h"

// Sets default values for this component's properties
UMovrt::UMovrt()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMovrt::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UMovrt::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UE_LOG(LogTemp, Display, TEXT("ALLES GUT JUNG"));
	// ...
}

