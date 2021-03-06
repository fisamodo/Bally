// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Ball.h"
#include "BallyGameStateBase.h"
#include"BallyGameModeBase.h"
// Sets default values
ABrick::ABrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));

	SM_Brick->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	Box_Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	Box_Collision->SetBoxExtent(FVector(25.0f, 10.0f, 10.0f));
	
	RootComponent = Box_Collision;
}

// Called when the game starts or when spawned
void ABrick::BeginPlay()
{
	Super::BeginPlay();

	Box_Collision->OnComponentBeginOverlap.AddDynamic(this, &ABrick::OnOverlapBegin);
	

}

// Called every frame
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ABrick::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndexType, bool bFromSweep, const FHitResult & SweepResult)
{
	
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		if (OtherActor->ActorHasTag("Ball")) {
			ABall* MyBall = Cast<ABall>(OtherActor);

			ABallyGameModeBase* GM = Cast<ABallyGameModeBase>(GetWorld()->GetAuthGameMode());
			GM->OnHit();

			FVector BallVelocity = MyBall->GetVelocity();
			BallVelocity *= (SpeedModifierOnBounce - 0.9f);

			MyBall->GetBall()->SetPhysicsLinearVelocity(BallVelocity, true);

			FTimerHandle UnusedHandle;
			GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABrick::DestroyBrick, 0.1f, false); //delay for 0.1sec and makes ball bounce back after hitting one brick
		}
	}
}

void ABrick::DestroyBrick()
{
	
	this->Destroy();

}



