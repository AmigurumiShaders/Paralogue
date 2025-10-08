// Fill out your copyright notice in the Description page of Project Settings.


#include "PlogEdEncounterActions.h"
#include "ParalogueEncounter.h"
#include "PlogEdEncounterEditorToolkit.h"

UClass* FPlogEdEncounterAssetTypeActions::GetSupportedClass() const
{
	return UParalogueEncounter::StaticClass();
}

FText FPlogEdEncounterAssetTypeActions::GetName() const
{
	return INVTEXT("Paralogue Encounter");
}

FColor FPlogEdEncounterAssetTypeActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FPlogEdEncounterAssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::Misc;
}

void FPlogEdEncounterAssetTypeActions::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
	MakeShared<PlogEdEncounterEditorToolkit>()->InitEditor(InObjects);
}
