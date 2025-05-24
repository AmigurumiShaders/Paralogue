// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SGraphPanel.h"
#include "ParalogueEncounter.h"

#include "ParalogueEncounterGraphData.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "ParalogueSegmentGraphNode.h"


DECLARE_LOG_CATEGORY_EXTERN(ParalogueEditor, Log, All);

/**
 * 
 */
class PARALOGUEEDITOR_API ParalogueEncounterEditorToolkit : public FAssetEditorToolkit
{
public:
	void InitEditor(const TArray<UObject*>& InObjects);

	void RegisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;
	void UnregisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;

	FName GetToolkitFName() const override { return "ParalogueEncounterEditor"; }
	FText GetBaseToolkitName() const override { return INVTEXT("Paralogue Encounter Editor"); }
	FString GetWorldCentricTabPrefix() const override { return "Paralogue Encounter "; }
	FLinearColor GetWorldCentricTabColorScale() const override { return {}; }

	virtual void OnClose() override;
	void OnNodeDetailsViewPropertiesUpdated(const FPropertyChangedEvent& event);
	void OnGraphChanged(const FEdGraphEditAction& editAction); //useful for persisting changes instead of the whole thing every time
	void OnWorkingAssetPreSave();
	//accessors
	FText GetDescription() const;
	void SetDescription(FText newDescription) const;
	UEdGraph* GetGraph() { return uiDialogueGraph; }

	void SetWorkingGraphSlateDisplay(TSharedPtr<SGraphEditor> slateDisplay) { workingGraphSlateDisplay = slateDisplay; }; 
	void OnGraphSelectionChanged(const FGraphPanelSelectionSet& selection);
	void SetSelectedNodeDetailView(TSharedPtr<class IDetailsView> detailsView); //this is weird to have as private but may still be necessary for that delegate function?

	UParalogueSegmentGraphNode* GetSelectedNode (const FGraphPanelSelectionSet& selection);
	
	//float GetMean() const;
	//float GetStandardDeviation() const;
	//void SetMean(float Mean);
	//void SetStandardDeviation(float StandardDeviation);



private:
	UParalogueEncounter* workingEncounterAsset;

	UPROPERTY()
	UEdGraph* uiDialogueGraph;

	//the slate widget that displays the graph
	TSharedPtr<SGraphEditor> workingGraphSlateDisplay = nullptr;
	TSharedPtr<class IDetailsView> selectedNodeDetailsView = nullptr;


	//void AddEncounterSegment();
	//void RemoveEncounterSegment(/*pointer or something idk*/);


	//i kind of want to rename these to something like saving and loading...
	void UpdateEncounterAssetFromGraph();
	void UpdateGraphFromEncounterAsset();

	/// <summary>
	/// Build the actual encounter data that will be used during runtime when the player encounters NPCs
	/// </summary>
	void BuildIngameEncounterFromGraph();
	//Recursive function for saving each child segment in the dialogue tree
	UEncounterSegment* CreateOrFindSegmentForGraphNode(UParalogueSegmentGraphNode* node); //maybe some index or something idk
	
	/// <summary>
	/// [[[DEPRECATED: not using tpair array anymore]]] parse delimited string of NPC dialogue and face information into the version used by the gameplay-time UEncounterSegment
	/// </summary>
	/// <param name="segmentText"></param>
	void ParseSegmentText(FText segmentText, TArray<TPair<FString, int>>* destinationArray);
	
	
	/// <summary>
	/// Parse delimited string of NPC dialogue and face information into the variables used by the gameplay-time UEncounterSegment (the two arrays with corresponding indicies)
	/// </summary>
	/// <param name="segmentText">text containing all dialogue and face data in one string</param>
	/// <param name="dialogueTextDestination">Reference to array to write text data to</param>
	/// <param name="dialogueFacesDestination">Reference to array to write face data to</param>
	void ParseSegmentText(FText segmentText, TArray<FString>* dialogueTextDestination, TArray<int>* dialogueFacesDestination);
	FDelegateHandle graphChangeListenerHandler;
};