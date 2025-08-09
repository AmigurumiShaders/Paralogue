// Fill out your copyright notice in the Description page of Project Settings.


#include "PlogEdEncounterGraphNode.h"

UEdGraphPin* UPlogEdBaseEncounterGraphNode::EncounterGraphCreatePin(EEdGraphPinDirection direction, FName name)
{
	FName category = (direction == EEdGraphPinDirection::EGPD_Input) ? TEXT("Inputs") : TEXT("Outputs");
	FName subcategory = TEXT("tell the dev to give me a better name lol"); //probably dont call it custom pin

	UEdGraphPin* pin = CreatePin(
		direction,
		category,
		name
	);
	pin->PinType.PinSubCategory = subcategory;

	return pin;
}

FString UPlogEdBaseEncounterGraphNode::LabelIfStart() const
{
	if (segmentNodeUserData->SetAsStartNode)
	{
		return TEXT("ENCOUNTER START ");

	}
	return TEXT("");
};