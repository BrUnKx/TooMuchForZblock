// Copyright Epic Games, Inc. All Rights Reserved.

#include "TooMuchForZblockPickUpComponent.h"

UTooMuchForZblockPickUpComponent::UTooMuchForZblockPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UTooMuchForZblockPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UTooMuchForZblockPickUpComponent::OnSphereBeginOverlap);
}

void UTooMuchForZblockPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	ATooMuchForZblockCharacter* Character = Cast<ATooMuchForZblockCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
