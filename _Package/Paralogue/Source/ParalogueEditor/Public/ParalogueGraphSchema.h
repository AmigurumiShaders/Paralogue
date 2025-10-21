// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "EdGraph/EdGraph.h" //idk why video tutorial uses this but unreal generates this code with the below include instead. Whats the difference? doesnt matter enough to figure out right now...
#include "EdGraph/EdGraphSchema.h"
#include "ParalogueGraphSchema.generated.h"

/**
 * graph schemas define behaviors/logic and things such as if two nodes are allowed to be connected
 */
UCLASS()
class PARALOGUEEDITOR_API UParalogueGraphSchema : public UEdGraphSchema
{
	GENERATED_BODY()
	
public:
	virtual void GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const override;
	virtual const FPinConnectionResponse CanCreateConnection(const UEdGraphPin* a, const UEdGraphPin* b) const override;

};


// specifies the list of actions in the context menu for creating a new node (right click menu)
USTRUCT()
struct FNewNodeAction : public FEdGraphSchemaAction {
	GENERATED_BODY()

public:
	FNewNodeAction() {};

	FNewNodeAction(UClass* classTemplate, FText inNodeCategory, FText inMenuDesc, FText inToolTip, const int32 inGrouping)
	: FEdGraphSchemaAction(inNodeCategory, inMenuDesc, inToolTip, inGrouping), classTemplate(classTemplate) {}; // passing all these to the parent class - "this is how we tell the action what it displays when it comes up in the menu"

	//actually defining how to perform this action

	virtual UEdGraphNode* PerformAction(
		UEdGraph* parentGraph, 
		UEdGraphPin* fromPin, 	//if created from drag/drop of a pin, this is that pin
		const FVector2D location, //cursor location, to use to create the node
		bool bSelectNewNode = true); //whether or not to automatically select the new node after its created

protected:
	UClass* classTemplate = nullptr;
};