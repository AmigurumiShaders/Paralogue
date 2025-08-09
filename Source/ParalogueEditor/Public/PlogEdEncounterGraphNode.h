// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"

#include "ParalogueEncounter.h"

#include "PlogEdEncounterGraphNode.generated.h"


/**
 * 
 */
UCLASS()
class PARALOGUEEDITOR_API UPlogEdBaseEncounterGraphNode : public UEdGraphNode
{
	GENERATED_BODY()

public:
	/*virtual UControlRig* GetControlRig() const PURE_VIRTUAL(FAnimNode_ControlRigBase::GetControlRig, return nullptr; );*/
	// = 0; //pure virtual b/c I'm expecting to have different ways of storing/retreiving the title data atm
	virtual FText GetNodeTitle(ENodeTitleType::Type titleType) const PURE_VIRTUAL(virtual FText UPlogEdBaseEncounterGraphNode::GetNodeTitle const, return FText(););
	virtual FLinearColor GetNodeTitleColor() const override { return nodeTitleColor; }
	virtual bool CanUserDeleteNode() const override { return canUserDelete; }

	virtual void InitDefaultPins() {}; //nothing by default

	UEncounterSegment* GetSegmentTempData() { return processedTempData; }
	void SetSegmentTempData(UEncounterSegment* input) { processedTempData = input; }

	virtual void SetNodeUserData(class UPlogRtNodeUserData* data) { segmentNodeUserData = data; };
	virtual class UPlogRtNodeUserData* GetNodeUserData() const { return segmentNodeUserData; }

	UEdGraphPin* EncounterGraphCreatePin(EEdGraphPinDirection direction, FName name);
protected:
	bool canUserDelete = true;
	FLinearColor nodeTitleColor = FLinearColor(FColor::Silver);
	
	UEdGraph* graph;


	UPROPERTY(/*woe upon ye who forgets the uproperty*/)
	class UPlogRtNodeUserData* segmentNodeUserData; //or could rename this segmentNodeDetailsData idk might be more explanatory than calling it "user data"

private:

	//temporarily holds the processed encounter segment, making it easier to hook up with multiple inputs to this node
	UEncounterSegment* processedTempData = nullptr; // I still am unaware if there is a better way of avoiding duplicates. Going with this simply appears to be the most effective use of my time with my current knowledge.


};
