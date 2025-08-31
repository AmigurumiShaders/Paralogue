// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"

#include "PlogEdEncounterGraphNode.h"
//#include "ParalogueEncounter.h"


#include "PlogEdBranchGraphNode.generated.h"

/**
 * 
 */
UCLASS()
class PARALOGUEEDITOR_API UPlogEdBranchGraphNode : public UPlogEdBaseEncounterGraphNode
{
	GENERATED_BODY()

public:
	
	UPlogEdBranchGraphNode();

	virtual void InitDefaultPins() override;

	virtual FText GetNodeTitle(ENodeTitleType::Type titleType) const override;

	UEdGraphPin* GetInputPin() { return inputPin; }
	UEdGraphPin* GetTruePin() { return trueOutPin; }
	UEdGraphPin* GetFalsePin() { return falseOutPin; }
	

	virtual void GetNodeContextMenuActions(UToolMenu* menu, UGraphNodeContextMenuContext* context) const override;


private:

	
	UEdGraphPin* inputPin;
	UEdGraphPin* trueOutPin;
	UEdGraphPin* falseOutPin;

	UEncounterSegment* processedTempData = nullptr;
};
