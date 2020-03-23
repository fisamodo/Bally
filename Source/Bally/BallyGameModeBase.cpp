// Fill out your copyright notice in the Description page of Project Settings.


#include "BallyGameModeBase.h"
#include "BallyGameStateBase.h"
ABallyGameModeBase::ABallyGameModeBase()
{
	PointsToWin = 24;
}

void ABallyGameModeBase::OnHit()
{
	if (ABallyGameStateBase* GS = Cast<ABallyGameStateBase>(GameState))
	{
		GS->Points++;
		if (GS->Points == PointsToWin)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("You won the game! It took you %f seconds to win the game."), GetWorld()->GetTimeSeconds()));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Press L ALT to exit")));


		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("You scored a point, you now have %d points"), GS->Points));
		}
	}
}
