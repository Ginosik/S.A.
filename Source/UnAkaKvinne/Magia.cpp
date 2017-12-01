// Fill out your copyright notice in the Description page of Project Settings.

#include "Magia.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"


// Sets default values
AMagia::AMagia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	RootComponent = CollisionComp;

	Flipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Flipbook"));
	Flipbook->SetCollisionProfileName("NoCollision");
	Flipbook->SetupAttachment(RootComponent);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile"));
	ProjectileMovement->UpdatedComponent = RootComponent;
	ProjectileMovement->InitialSpeed = 800.0f;
	ProjectileMovement->MaxSpeed = 800.0f;

	InitialLifeSpan = 4.0f;

}

// Called when the game starts or when spawned
void AMagia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMagia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

