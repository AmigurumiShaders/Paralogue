// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//#include "ParalogueEncounter.h"
#include "NodeEncounterSegmentData.h"
#include "ParalogueEncounterGraphData.generated.h"

//i really really really would like a better name for these to distinguish them from the types in the editor module but idk what


//this is part of the RUNTIME module, Paralogue
/**
 * 
 */

UENUM()
enum class EParalogueNodeType {
	StartNode,
	SegmentNode,
	EventNode
};

UCLASS()
class PARALOGUE_API UParalogueEncounterEdPinData : public UObject
{
	GENERATED_BODY()
public:

	UPROPERTY()
	FName PinName;
	UPROPERTY()
	FGuid PinId;
	UPROPERTY() //Array of the connections to this pin. Since we know we want to allow multiple connections to at least the input pins
	TArray<UParalogueEncounterEdPinData*>  Connections;

};

UCLASS()
class PARALOGUE_API UParalogueEncounterEdNodeData : public UObject
{
	GENERATED_BODY() 
	
public:
	UPROPERTY()
	EParalogueNodeType NodeType = EParalogueNodeType::SegmentNode;


	UPROPERTY()//this is not the *connection* to the input pin, it is literally ONLY the pin itself on the node (which then holds the connections)
	UParalogueEncounterEdPinData* InputPin;
	UPROPERTY()
	TArray<UParalogueEncounterEdPinData*> OutputPins;
	UPROPERTY()
	FVector2D Position;

	UPROPERTY()
	UNodeEncounterSegmentData* NodeSegmentData = nullptr;
	
};

UCLASS()
class PARALOGUE_API UParalogueEncounterEdGraphData : public UObject
{
	GENERATED_BODY()
public:

	UPROPERTY()
	TArray<UParalogueEncounterEdNodeData*> Nodes;

};
