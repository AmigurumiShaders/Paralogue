#pragma once

#include "CoreMinimal.h"
//#include "ParalogueEncounter.h"

#include "NodeEncounterSegmentData.generated.h"

/// <summary>
/// Base class for storing the data that the user enters into each node
/// </summary>
UCLASS()
class PARALOGUE_API UPlogRtNodeUserData : public UObject {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Meta")
	FText Title;
	/*Detailed description of this node, such as for the narrative situation it is intended for. Like a code comment*/
	UPROPERTY(EditAnywhere, Category = "Meta")
	FText Description; //maybe call this writer comment or something later but not worth overthinking now
	//todo: it appears unreal maybe has some sort of "info" type, which might be a good thing to change this to

};

UCLASS() //maybe make BlueprintType?
/// <summary>
/// (pending rename when we feel likePer-node data edited by user creating the dialogue, such as the NPC text and the player responses. (and not the graph data like position and connections)
/// </summary>
class PARALOGUE_API UNodeEncounterSegmentData : public UPlogRtNodeUserData {
	GENERATED_BODY()
public:
	/*Linear segment of dialogue from the character, as one delimited string of text*/
	UPROPERTY(EditAnywhere,meta = (MultiLine = true) )//meta=(MultiLine=true) add this?
		FText CharacterLines;
	UPROPERTY(EditAnywhere) //meta=(MultiLine=true) add this?
		TArray<FText> PlayerResponseOptions;

	
	UPROPERTY(EditAnywhere, Category = "Route Flags")
	FName FlagToSet;
	UPROPERTY(EditAnywhere, Category = "Route Flags")
	bool FlagValue;
};