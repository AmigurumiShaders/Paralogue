// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"

#include "ParalogueEncounter.h"

#include "ParalogueSegmentGraphNode.generated.h"


/**
 * 
 */
UCLASS()
class PARALOGUEEDITOR_API UParalogueSegmentGraphNode : public UEdGraphNode
{
	GENERATED_BODY()
	
public:
	UParalogueSegmentGraphNode();

	virtual FText GetNodeTitle(ENodeTitleType::Type titleType) const override { return nodeTitle; }
	virtual FLinearColor GetNodeTitleColor() const override { return nodeTitleColor; }
	virtual bool CanUserDeleteNode() const override { return canUserDelete; }
	virtual void GetNodeContextMenuActions(UToolMenu* menu, UGraphNodeContextMenuContext* context) const override;

	/////////

	UEdGraphPin* CreateCustomPin(EEdGraphPinDirection direction, FName name);
	void SyncPinsWithResponses();
	void SetNodeInfo(class UNodeEncounterSegmentData* data) { segmentNodeData = data; }
	class UNodeEncounterSegmentData* GetNodeInfo() { return segmentNodeData; }

	UEncounterSegment* GetSegmentTempData() { return processedTempData; }
	void SetSegmentTempData(UEncounterSegment* input) { processedTempData = input; }
private:
	FText nodeTitle = FText::FromString(TEXT("Paralogue Segment"));
	FLinearColor nodeTitleColor = FLinearColor(FColor::Cyan);
	bool canUserDelete = true;

	//FToolMenuSection& menuSection;
	UEdGraph* graph;
	FExecuteAction createResponsePinLambda;
	FExecuteAction deletePinLambda;
	FExecuteAction deleteNodeLambda;

	class UNodeEncounterSegmentData* segmentNodeData;
	//temporarily holds the processed encounter segment, making it easier to hook up with multiple inputs to this node
	UEncounterSegment* processedTempData = nullptr;

	//FEncounterSegment* thisSegment; //pointer to the corresponding segment this node references (is this too coupled? i think its ok...)
};
