// Fill out your copyright notice in the Description page of Project Settings.


#include "PlogEdBranchGraphNode.h"


UPlogEdBranchGraphNode::UPlogEdBranchGraphNode()
{
	//changing defaults from base class
	nodeTitleColor = FLinearColor::Red;

}

void UPlogEdBranchGraphNode::InitDefaultPins()
{
	// Dont want user to be creating their own pins on branch nodes, so we define them ourselves
	// Each branch node should have just the one input, one out for true, and one out for false. 
	inputPin = CreatePin(
		EEdGraphPinDirection::EGPD_Input,
		TEXT("Inputs"),
		TEXT("Input")
	);

	trueOutPin = CreatePin(
		EEdGraphPinDirection::EGPD_Output,
		TEXT("Outputs"),
		TEXT("True")
	);
	falseOutPin = CreatePin(
		EEdGraphPinDirection::EGPD_Output,
		TEXT("Outputs"),
		TEXT("False")
	);
}

FText UPlogEdBranchGraphNode::GetNodeTitle(ENodeTitleType::Type titleType) const
{	
	return FText::FromString(
		LabelIfStart() +
		TEXT("Flag: ") +
		Cast<UPlogRtEncounterBranchNodeUserData>(segmentNodeUserData)->FlagToCheck.ToString());
}