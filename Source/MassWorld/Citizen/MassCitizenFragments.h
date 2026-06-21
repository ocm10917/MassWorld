// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MassEntityTypes.h"
#include "MassCitizenFragments.generated.h"

UENUM(BlueprintType)
enum class ECitizenBehaviorState : uint8
{
	Idle,
	Walking
};

USTRUCT()
struct MASSWORLD_API FCitizenIdentityFragment : public FMassFragment
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Citizen")
	int32 CitizenId = INDEX_NONE;
};

USTRUCT()
struct MASSWORLD_API FCitizenStateFragment : public FMassFragment
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Citizen")
	ECitizenBehaviorState BehaviorState = ECitizenBehaviorState::Idle;
};
