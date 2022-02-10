// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

#if PLATFORM_IOS || PLATFORM_ANDROID
#include "ThirdParty/pugi/src/pugixml.hpp"
# endif

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

#if PLATFORM_IOS || PLATFORM_ANDROID

	pugi::xml_document doc;

	pugi::xml_parse_result result = doc.load_file("tree.xml");

	std::cout << "Load result: " << result.description() << ", mesh name: " << doc.child("mesh").attribute("name").value() << std::endl;

# endif
	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

