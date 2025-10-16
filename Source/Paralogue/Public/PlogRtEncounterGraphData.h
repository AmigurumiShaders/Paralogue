// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//#include "ParalogueEncounter.h"
#include "PlogRtEncounterSegmentNodeData.h"
#include "PlogRtEncounterGraphData.generated.h"

//i really really really would like a better name for these to distinguish them from the types in the editor module but idk what


//this is part of the RUNTIME module, Paralogue
/**
 * 
 */
UCLASS()
class PARALOGUE_API UPlogRtEditorSavedPinData : public UObject
{
	GENERATED_BODY()
public:

	UPROPERTY()
	FName PinName;
	UPROPERTY()
	FGuid PinId;
	UPROPERTY() //Array of the connections to this pin. Since we know we want to allow multiple connections to at least the input pins
	TArray<UPlogRtEditorSavedPinData*>  Connections;

};
UCLASS()
class PARALOGUE_API UPlogRtEditorSavedNodeData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()//this is not the *connection* to the input pin, it is literally ONLY the pin itself on the node (which then holds the connections)
		UPlogRtEditorSavedPinData* InputPin;
	UPROPERTY()
	TArray<UPlogRtEditorSavedPinData*> OutputPins;
	UPROPERTY()
	FVector2D Position;

	UPROPERTY()
	UPlogRtNodeUserData* NodeUserData = nullptr;
};

///// <summary>
///// deprecated
///// </summary>
//UCLASS()
//class PARALOGUE_API UPlogRtEditorSavedNodeData : public UObject
//{
//	GENERATED_BODY() 
//	
//public:
//
//	UPROPERTY()//this is not the *connection* to the input pin, it is literally ONLY the pin itself on the node (which then holds the connections)
//	UParalogueEncounterEdPinData* InputPin;
//	UPROPERTY()
//	TArray<UParalogueEncounterEdPinData*> OutputPins;
//	UPROPERTY()
//	FVector2D Position;
//
//	UPROPERTY()
//	UPlogRtEncounterSegmentNodeData* NodeSegmentData = nullptr;
//	
//};

UCLASS()
class PARALOGUE_API UPlogRtEditorSavedGraphData : public UObject
{
	GENERATED_BODY()
public:

	UPROPERTY()
	TArray<UPlogRtEditorSavedNodeData*> Nodes;

};
