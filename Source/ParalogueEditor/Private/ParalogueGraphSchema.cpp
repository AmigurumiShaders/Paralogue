// Fill out your copyright notice in the Description page of Project Settings.


#include "ParalogueGraphSchema.h"
#include "NodeEncounterSegmentData.h"
#include "ParalogueSegmentGraphNode.h"


void UParalogueGraphSchema::GetGraphContextActions(FGraphContextMenuBuilder& contextMenuBuilder) const
{
	// define the list of actions for the context menu
	TSharedPtr<FNewNodeAction> newNodeAction(
		new FNewNodeAction(
			FText::FromString(TEXT("Nodes")),
			FText::FromString(TEXT("New Paralogue Segment")),
			FText::FromString(TEXT("A Segment represents a linear segment of character interaction, which end with the player's dialogue options")),
			0 //group id for organizing in UI
		)
	);

	contextMenuBuilder.AddAction(newNodeAction);
}

const FPinConnectionResponse UParalogueGraphSchema::CanCreateConnection(const UEdGraphPin* a, const UEdGraphPin* b) const
{
	if (a == nullptr || b == nullptr)
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, TEXT("One or both pins in this connection were found to be null"));
	}
	if (a->Direction == b->Direction)
	{
		//cannot connect pins of the same direction together or something
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, TEXT("Cannot connect pins of the same direction"));
	}

	//this enforces exclusive connections, may want to change this depending on dialogue needs (multiple in/out connections may make sense)
	//return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_AB, TEXT(""));

	// Want to allow multiple connections to an input pin, but not to an output pin (the dialogue options are based on output pins so this would cause problems)
	if (b->Direction == EEdGraphPinDirection::EGPD_Input)
	{
		//if b is input, that makes A an output
		return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_A, TEXT(""));
	}
	if (b->Direction == EEdGraphPinDirection::EGPD_Output)
	{
		//if b is output, that makes A an input
		return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_B, TEXT(""));
	}

	return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, TEXT("Undefined connection request"));
}

UEdGraphNode* FNewNodeAction::PerformAction(UEdGraph* parentGraph, UEdGraphPin* fromPin, const FVector2D location, bool bSelectNewNode)
{
	UPlogEdSegmentGraphNode* newSegmentNode = NewObject<UPlogEdSegmentGraphNode>(parentGraph); //after making paraseg node, change to that type
	newSegmentNode->CreateNewGuid(); //necessary for linking things together 
	//perhaps when creating a new segment node, a new segment should be added to the encounter asset. store it in the array and then make sure that the nodes at least know which array index they are (?)
	newSegmentNode->NodePosX = location.X;
	newSegmentNode->NodePosY = location.Y;

	newSegmentNode->SetNodeUserData(NewObject<UPlogRtEncounterSegmentNodeUserData>(newSegmentNode));


	// i want to find a better name for the input node...
	UEdGraphPin* inputPin = newSegmentNode->CreateCustomPin(EEdGraphPinDirection::EGPD_Input, TEXT("Input")); //only need the return value of this one
	newSegmentNode->CreateCustomPin(EEdGraphPinDirection::EGPD_Output, TEXT("Unsynced Response")); //just something for now, maybe change it to "default" or something

	
	//using default creaet pin (by unreal)
	//newSegmentNode->CreatePin(
	//	EEdGraphPinDirection::EGPD_Input, //inputs are on the left side, outputs are on the right
	//	TEXT("inputs"),
	//	TEXT("someiinput")
	//);
	//newSegmentNode->CreatePin(
	//	EEdGraphPinDirection::EGPD_Output,
	//	TEXT("output"),
	//	TEXT("someoutput")
	//);
	//newSegmentNode->CreatePin(
	//	EEdGraphPinDirection::EGPD_Output,
	//	TEXT("output"),
	//	TEXT("someoutput2")
	//);


	if (fromPin != nullptr)
	{
		newSegmentNode->GetSchema()->TryCreateConnection(fromPin, inputPin);
	}

	parentGraph->Modify(); //marks as dirty/not yet saved
	parentGraph->AddNode(newSegmentNode, true, true);

	return newSegmentNode;
}
