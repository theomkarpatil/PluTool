// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderBlockVisualiser.h"
#include "GameFramework/Actor.h"
#include "BuilderBlock.h"

// Sets default values
ABuilderBlockVisualiser::ABuilderBlockVisualiser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilderBlockVisualiser::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void ABuilderBlockVisualiser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}