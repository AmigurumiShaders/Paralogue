// Fill out your copyright notice in the Description page of Project Settings.


#include "PlogEdGraphSchema.h"
#include "NodeEncounterSegmentData.h"
#include "PlogEdSegmentGraphNode.h"
#include "PlogEdBranchGraphNode.h"


void UPlogEdGraphSchema::GetGraphContextActions(FGraphContextMenuBuilder& contextMenuBuilder) const
{
	// define the list of actions for the context menu
	TSharedPtr<FNewNodeAction> newSegmentNodeAction(
		new FNewNodeAction(
			UPlogEdSegmentGraphNode::StaticClass(),
			FText::FromString(TEXT("Nodes")),
			FText::FromString(TEXT("New Segment Node")),
			FText::FromString(TEXT("A Segment represents a linear segment of character interaction, which end with the player's dialogue options")),
			0 //group id for organizing in UI
		)
	);

	contextMenuBuilder.AddAction(newSegmentNodeAction);

	TSharedPtr<FNewNodeAction> newBranchNodeAction(
		new FNewNodeAction(
			UPlogEdBranchGraphNode::StaticClass(),
			FText::FromString(TEXT("Nodes")),
			FText::FromString(TEXT("New Branch Node")),
			FText::FromString(TEXT("Pick a route based on an existing route flag")),
			0 //group id for organizing in UI
		)
	);

	contextMenuBuilder.AddAction(newBranchNodeAction);
}

const FPinConnectionResponse UPlogEdGraphSchema::CanCreateConnection(const UEdGraphPin* a, const UEdGraphPin* b) const
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
	
	UPlogEdBaseEncounterGraphNode* newEncounterNode = NewObject<UPlogEdBaseEncounterGraphNode>(parentGraph, classTemplate); //
	//UPlogEdSegmentGraphNode* newSegmentNode = NewObject<UPlogEdSegmentGraphNode>(parentGraph); 
	newEncounterNode->CreateNewGuid(); //necessary for linking things together 
	
	newEncounterNode->NodePosX = location.X;
	newEncounterNode->NodePosY = location.Y;

	//newEncounterNode->SetNodeUserData(NewObject<UPlogRtNodeUserData>(newEncounterNode));

	//probably only need an if for creating the default pins
	// if its a full segment, do this, but otherwise skip(?)

	UEdGraphPin* inputPin = nullptr;
	
	//for now at least, we only want these nodes created on segment nodes that should have dialogue options
	if (newEncounterNode->IsA<UPlogEdSegmentGraphNode>())
	{ 
		UPlogEdSegmentGraphNode* newNodeAsSegment = Cast<UPlogEdSegmentGraphNode>(newEncounterNode);
		inputPin = newNodeAsSegment->EncounterGraphCreatePin(EEdGraphPinDirection::EGPD_Input, TEXT("Input")); //only need the return value of this one
		newNodeAsSegment->EncounterGraphCreatePin(EEdGraphPinDirection::EGPD_Output, TEXT("Unsynced Response")); //just something for now, maybe change it to "default" or something

		newEncounterNode->SetNodeUserData(NewObject<UPlogRtEncounterSegmentNodeUserData>(newEncounterNode));
	}
	else if (newEncounterNode->IsA<UPlogEdBranchGraphNode>())
	{
		newEncounterNode->InitDefaultPins();
		inputPin = Cast<UPlogEdBranchGraphNode>(newEncounterNode)->GetInputPin();
		newEncounterNode->SetNodeUserData(NewObject<UPlogRtEncounterBranchNodeUserData>(newEncounterNode));
	}
	// todo: if we add another node type especially, just put all of the pin creation on the constructors, and add
	// the inputPin and getter to the parent. Then here we can just check if its null. Simplifies the logic a lot
	

	if (fromPin != nullptr && inputPin != nullptr)
	{
		newEncounterNode->GetSchema()->TryCreateConnection(fromPin, inputPin);
	}

	parentGraph->Modify(); //marks as dirty/not yet saved
	parentGraph->AddNode(newEncounterNode, true, true);

	return newEncounterNode;
}
