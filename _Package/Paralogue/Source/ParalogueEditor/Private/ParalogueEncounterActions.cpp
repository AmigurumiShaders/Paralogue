// Fill out your copyright notice in the Description page of Project Settings.


#include "ParalogueEncounterActions.h"
#include "ParalogueEncounter.h"
#include "ParalogueEncounterEditorToolkit.h"

UClass* FParalogueEncounterAssetTypeActions::GetSupportedClass() const
{
	return UParalogueEncounter::StaticClass();
}

FText FParalogueEncounterAssetTypeActions::GetName() const
{
	return INVTEXT("Paralogue Encounter");
}

FColor FParalogueEncounterAssetTypeActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FParalogueEncounterAssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::Misc;
}

void FParalogueEncounterAssetTypeActions::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
	MakeShared<ParalogueEncounterEditorToolkit>()->InitEditor(InObjects);
}
