// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"


#include "BuilderBlockVisualiser.generated.h"

class ABuilderBlock;

UCLASS()
class PLUTOOL_API ABuilderBlockVisualiser : public AActor
{ 
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilderBlockVisualiser();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(BlueprintReadWrite, Category = "Variables")
	ABuilderBlock* mVisibleBlock;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
