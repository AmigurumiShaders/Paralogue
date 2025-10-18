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


//void UPlogEdBaseEncounterGraphNode::GetNodeContextMenuActions(UToolMenu* menu, UGraphNodeContextMenuContext* context) const
//{
//	//probably make this class var instead? actually i dont think i can since it requires menu variable
//	FToolMenuSection& section = menu->AddSection(TEXT("tell the dev to give me a better name lol"), FText::FromString(TEXT("Node Actions")));
//
//	section.AddMenuEntry(
//		TEXT("DeleteNode"),
//		FText::FromString(TEXT("delete node")),
//		FText::FromString(TEXT("deletes the node")),
//		FSlateIcon(TEXT("ParalogueEditorStyle"), TEXT("Paralogue.NodeDeleteNodeIcon")),
//		FUIAction(
//			FExecuteAction::CreateLambda(
//				[this]() {
//					graph->RemoveNode(this);
//					this->SyncPinsWithResponses();
//					UE_LOG(LogTemp, Warning, TEXT("TODO lol kirby video has this as removing from the end of the array and then syncing, but I want it to just trigger sync when array elements are removeed <-wow i said that and dont even remember why. Did i mix up between deleting node and lambda??"))
//						//kirby video has this as removing from the end of the array and then syncing, but I want it to just trigger sync when array elements are removeed
//				}
//
//			)
//		)
//	);
//}

//UPlogEdBaseEncounterGraphNode::UPlogEdBaseEncounterGraphNode()
//{
//	graph = this->GetGraph();
//}
