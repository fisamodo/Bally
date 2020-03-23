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
			UE_LOG(LogTemp, Warning, TEXT("You won!"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("You scored, you have %d points"), GS->Points);
		}
	}
}
