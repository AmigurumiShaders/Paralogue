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
		//trying to connect pin to itself (should not even be possible??)
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, TEXT("LOL DEV FORGOR TO CHANGE THIS TO SOMETHING USEFUL POINT AND LAUGH"));
	}
	if (a->Direction == b->Direction)
	{
		//cannot connect pins of the same direction together or something
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, TEXT("LOL DEV FORGOR TO CHANGE THIS TO SOMETHING USEFUL POINT AND LAUGH"));
	}

	//this enforces exclusive connections, may want to change this depending on dialogue needs (multiple in/out connections may make sense)
	return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_AB, TEXT(""));
}

UEdGraphNode* FNewNodeAction::PerformAction(UEdGraph* parentGraph, UEdGraphPin* fromPin, const FVector2D location, bool bSelectNewNode)
{
	UParalogueSegmentGraphNode* newSegmentNode = NewObject<UParalogueSegmentGraphNode>(parentGraph); //after making paraseg node, change to that type
	newSegmentNode->CreateNewGuid(); //necessary for linking things together 
	//perhaps when creating a new segment node, a new segment should be added to the encounter asset. store it in the array and then make sure that the nodes at least know which array index they are (?)
	newSegmentNode->NodePosX = location.X;
	newSegmentNode->NodePosY = location.Y;

	newSegmentNode->SetNodeInfo(NewObject<UNodeEncounterSegmentData>(newSegmentNode));//kirby video said he'd talk more about this later, but he didnt last time he said that...


	//Leaving the input node text blank, unless i think of something better to call it. its not like we're doing any operations on the content of the previous segment of dialogue. its purely just a linker
	UEdGraphPin* inputPin = newSegmentNode->CreateCustomPin(EEdGraphPinDirection::EGPD_Input, TEXT("")); //only need the return value of this one
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
