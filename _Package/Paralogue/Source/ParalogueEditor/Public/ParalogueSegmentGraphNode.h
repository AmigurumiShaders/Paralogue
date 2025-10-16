// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"

//#include "ParalogueEncounter.h"
#include "PlogEdEncounterGraphNode.h"

#include "ParalogueSegmentGraphNode.generated.h"


DECLARE_LOG_CATEGORY_EXTERN(ParalogueEditorNodes, Log, All);
/**
 * 
 */
UCLASS()
class PARALOGUEEDITOR_API UPlogEdSegmentGraphNode : public UPlogEdBaseEncounterGraphNode
{
	GENERATED_BODY()
	
public:
	UPlogEdSegmentGraphNode();

	virtual FText GetNodeTitle(ENodeTitleType::Type titleType) const override;// { return segmentNodeUserData->Title; }
	/*virtual FLinearColor GetNodeTitleColor() const override { return nodeTitleColor; }
	virtual bool CanUserDeleteNode() const override { return canUserDelete; }*/

	virtual void GetNodeContextMenuActions(UToolMenu* menu, UGraphNodeContextMenuContext* context) const override;

	/////////

	//UEdGraphPin* CustomCreatePin(EEdGraphPinDirection direction, FName name);
	void SyncPinsWithResponses();
	/*void SetNodeUserData(class UPlogRtNodeUserData* data);
	class UPlogRtEncounterSegmentNodeUserData* GetNodeUserData() { return Cast<UPlogRtEncounterSegmentNodeUserData>(segmentNodeUserData); }*/

	//UEncounterSegment* GetSegmentTempData() { return processedTempData; }
	//void SetSegmentTempData(UEncounterSegment* input) { processedTempData = input; }
private:
	FText nodeTitle; //= FText::FromString(TEXT("Paralogue Segment"));
	
	//FToolMenuSection& menuSection;
	/*UEdGraph* graph;*/
	FExecuteAction createResponsePinLambda;
	FExecuteAction deletePinLambda;
	FExecuteAction deleteNodeLambda;

	//UPROPERTY()
	//class UPlogRtEncounterSegmentNodeUserData* segmentNodeUserData; //or could rename this segmentNodeDetailsData idk might be more explanatory than calling it "user data"
	////temporarily holds the processed encounter segment, making it easier to hook up with multiple inputs to this node
	//UEncounterSegment* processedTempData = nullptr; // I still am unaware if there is a better way of avoiding duplicates. Going with this simply appears to be the most effective use of my time with my current knowledge.
	//
};
