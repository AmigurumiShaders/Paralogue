// Fill out your copyright notice in the Description page of Project Settings.


#include "ParalogueSegmentGraphNode.h"
#include "Framework/Commands/UIAction.h"
#include "ToolMenu.h"
#include "NodeEncounterSegmentData.h"

UParalogueSegmentGraphNode::UParalogueSegmentGraphNode()
{
	graph = this->GetGraph();
	createResponsePinLambda = FExecuteAction::CreateLambda(
		[this]() {
			int pinNum = this->Pins.Num();
			FString pinName = TEXT("Player Response ") + FString::FromInt(pinNum);
			/*this->CreateCustomPin(
				EEdGraphPinDirection::EGPD_Output,
				*pinName
			);*/
			this->GetNodeInfo()->PlayerResponseOptions.Add(FText::FromString(pinName));
			this->SyncPinsWithResponses();

			graph->NotifyGraphChanged();
			graph->Modify();
		}
	);
	deletePinLambda = FExecuteAction::CreateLambda(
		[this]() {
			UEdGraphPin* pin = this->GetPinAt(this->Pins.Num() - 1);
			if (pin->Direction != EEdGraphPinDirection::EGPD_Input) {

				this->RemovePin(pin);

				graph->NotifyGraphChanged();
				graph->Modify();
			}
		}
	);
	deleteNodeLambda = FExecuteAction::CreateLambda(
		[this]() {
			//graph->RemoveNode(this);
			this->SyncPinsWithResponses();
			//kirby video has this as removing from the end of the array and then syncing, but I want it to just trigger sync when array elements are removeed
		}

	);

	//create a corresponding segment in the asset itself (again, may be too coupled...)

}

FText UParalogueSegmentGraphNode::GetNodeTitle(ENodeTitleType::Type titleType) const
{
	return segmentNodeData->Description; //just description for now because thats basically what I already had (can add actual title later)
}

void UParalogueSegmentGraphNode::GetNodeContextMenuActions(UToolMenu* menu, UGraphNodeContextMenuContext* context) const
{
	//probably make this class var instead? actually i dont think i can since it requires menu variable
	FToolMenuSection& section = menu->AddSection(TEXT("tell the dev to give me a better name lol"), FText::FromString(TEXT("Segment Node Actions")));

	section.AddMenuEntry(
		TEXT("AddResponsePinEntry"), //actually maybe call it option/dialogue option instead of response but idk
		FText::FromString(TEXT("Add Response")),
		FText::FromString(TEXT("Add a new player dialogue response slot")),
		FSlateIcon(TEXT("ParalogueEditorStyle"), TEXT("Paralogue.NodeAddPinIcon")), //todo: make these names part of their own header (like mentioned in the paralogueeditor todo)
		FUIAction(createResponsePinLambda)
	);
	
	section.AddMenuEntry(
		TEXT("DeletePinEntry"),
		FText::FromString(TEXT("not delete pin SEE LAMBDA COMMENT")),
		FText::FromString(TEXT("kirby video has this as removing from the end of the array and then syncing, but I want it to just trigger sync when array elements are removed")),
		FSlateIcon(TEXT("ParalogueEditorStyle"), TEXT("Paralogue.NodeDeletePinIcon")),
		FUIAction(deletePinLambda)
	);

	section.AddMenuEntry(
		TEXT("DeleteNode"),
		FText::FromString(TEXT("delete node")),
		FText::FromString(TEXT("deletes the node")),
		FSlateIcon(TEXT("ParalogueEditorStyle"), TEXT("Paralogue.NodeDeleteNodeIcon")),
		FUIAction(deleteNodeLambda)
	);

}

UEdGraphPin* UParalogueSegmentGraphNode::CreateCustomPin(EEdGraphPinDirection direction, FName name)
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

void UParalogueSegmentGraphNode::SyncPinsWithResponses()
{
	// Sync the pins on the node with the dialog responses
	// We're going to assume the first pin is always the
	// input pin
	UNodeEncounterSegmentData* nodeData = GetNodeInfo();
	int numGraphNodePins = Pins.Num() - 1;
	int numInfoPins = nodeData->PlayerResponseOptions.Num();

	while (numGraphNodePins > numInfoPins) {
		RemovePinAt(numGraphNodePins - 1, EEdGraphPinDirection::EGPD_Output);
		numGraphNodePins--;
	}
	while (numInfoPins > numGraphNodePins) {
		CreateCustomPin(
			EEdGraphPinDirection::EGPD_Output,
			FName(nodeData->PlayerResponseOptions[numGraphNodePins].ToString())
		);
		numGraphNodePins++;
	}

	//Syncs the response text with the pin text, which may not really be what I want to do? Not really a more elegant way other than just numbering them tho
	int index = 1;
	for (const FText& option : nodeData->PlayerResponseOptions) {
		GetPinAt(index)->PinName = FName(option.ToString());
		index++;
	}
}
