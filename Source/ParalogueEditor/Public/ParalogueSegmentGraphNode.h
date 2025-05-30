// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"

#include "ParalogueEncounter.h"
#include "PlogEdEncounterGraphNode.h"

#include "ParalogueSegmentGraphNode.generated.h"


DECLARE_LOG_CATEGORY_EXTERN(ParalogueEditorNodes, Log, All);
/**
 * 
 */
UCLASS()
class PARALOGUEEDITOR_API UPlogEdSegmentGraphNode : public UPlogEdEncounterGraphNode
{
	GENERATED_BODY()
	
public:
	UPlogEdSegmentGraphNode();

	virtual FText GetNodeTitle(ENodeTitleType::Type titleType) const override { return segmentNodeUserData->Title; }
	virtual FLinearColor GetNodeTitleColor() const override { return nodeTitleColor; }
	virtual bool CanUserDeleteNode() const override { return canUserDelete; }
	virtual void GetNodeContextMenuActions(UToolMenu* menu, UGraphNodeContextMenuContext* context) const override;

	/////////

	UEdGraphPin* CreateCustomPin(EEdGraphPinDirection direction, FName name);
	void SyncPinsWithResponses();
	void SetNodeUserData(class UPlogRtNodeUserData* data);// { segmentNodeUserData = Cast<UPlogRtEncounterSegmentNodeUserData>(data); } //cheating with no error catching if cast fails, oops
	class UPlogRtEncounterSegmentNodeUserData* GetNodeUserData() { return segmentNodeUserData; }

	UEncounterSegment* GetSegmentTempData() { return processedTempData; }
	void SetSegmentTempData(UEncounterSegment* input) { processedTempData = input; }
private:
	FText nodeTitle; //= FText::FromString(TEXT("Paralogue Segment"));
	FLinearColor nodeTitleColor = FLinearColor(FColor::Cyan);
	bool canUserDelete = true;

	//FToolMenuSection& menuSection;
	UEdGraph* graph;
	FExecuteAction createResponsePinLambda;
	FExecuteAction deletePinLambda;
	FExecuteAction deleteNodeLambda;

	class UPlogRtEncounterSegmentNodeUserData* segmentNodeUserData;
	//temporarily holds the processed encounter segment, making it easier to hook up with multiple inputs to this node
	UEncounterSegment* processedTempData = nullptr; // I still am unaware if there is a better way of avoiding duplicates. Going with this simply appears to be the most effective use of my time with my current knowledge.
	
};
