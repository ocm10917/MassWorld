// Copyright Epic Games, Inc. All Rights Reserved.

#include "MassCitizenTrait.h"

#include "MassCitizenFragments.h"
#include "MassEntityTemplateRegistry.h"

void UMassCitizenTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, const UWorld& World) const
{
	BuildContext.AddFragment<FCitizenIdentityFragment>();
	BuildContext.AddFragment<FCitizenStateFragment>();
}
