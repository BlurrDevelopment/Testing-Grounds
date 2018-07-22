// Fill out your copyright notice in the Description page of Project Settings.

#include "ChooseNextWaypoint.h"

EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Warning, TEXT("Execute Task Successfully Run."))

	return EBTNodeResult::Succeeded;
}


void UChooseNextWaypoint::GetPatrolPoints()
{

}

void UChooseNextWaypoint::SetNextWaypoint()
{
}

void UChooseNextWaypoint::CycleIndex()
{

}