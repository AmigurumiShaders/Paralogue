// Fill out your copyright notice in the Description page of Project Settings.


#include "PlogEdBranchGraphNode.h"
#include "Framework/Commands/UIAction.h"
#include "ToolMenu.h"
#include "NodeEncounterSegmentData.h"



UPlogEdBranchGraphNode::UPlogEdBranchGraphNode()
	//: UPlogEdBaseEncounterGraphNode()
{
	//changing defaults from base class
	nodeTitleColor = FLinearColor::Red;
	graph = this->GetGraph();
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

void UPlogEdBranchGraphNode::GetNodeContextMenuActions(UToolMenu* menu, UGraphNodeContextMenuContext* context) const
{
	FToolMenuSection& section = menu->AddSection(TEXT("tell the dev to give me a better name lol"), FText::FromString(TEXT("Node Actions")));
	UPlogEdBranchGraphNode* node = (UPlogEdBranchGraphNode*)this;
	
	section.AddMenuEntry(
		TEXT("DeleteNode"),
		FText::FromString(TEXT("delete node")),
		FText::FromString(TEXT("deletes the node")),
		FSlateIcon(TEXT("ParalogueEditorStyle"), TEXT("Paralogue.NodeDeleteNodeIcon")),
		FUIAction(
			FExecuteAction::CreateLambda(
				[this, node]() {
					graph->RemoveNode(node);
					UE_LOG(LogTemp, Warning, TEXT("TODO lol kirby video has this as removing from the end of the array and then syncing, but I want it to just trigger sync when array elements are removeed <-wow i said that and dont even remember why. Did i mix up between deleting node and lambda??"))
						//kirby video has this as removing from the end of the array and then syncing, but I want it to just trigger sync when array elements are removeed
				}

			)
		)
	);
}
