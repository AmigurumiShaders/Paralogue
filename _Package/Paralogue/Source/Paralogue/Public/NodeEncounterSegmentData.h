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

	UPROPERTY(EditAnywhere, Category = "Meta")
	bool SetAsStartNode = false;
};

/// <summary>
/// Data for the main encounter segments
/// </summary>
UCLASS()
class PARALOGUE_API UPlogRtEncounterSegmentNodeUserData : public UPlogRtNodeUserData {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Dialogue Content")//meta=(MultiLine=true) add this?
		TArray<int> CharacterFaces;
	
	/*Linear segment of dialogue from the character, with each array element being one page of text*/
	UPROPERTY(EditAnywhere,meta = (MultiLine = true), Category = "Dialogue Content")//meta=(MultiLine=true) add this?
		TArray<FText> CharacterLines;
	UPROPERTY(EditAnywhere, Category = "Dialogue Content") //meta=(MultiLine=true) add this?
		TArray<FText> PlayerResponseOptions;

	
	UPROPERTY(EditAnywhere, Category = "Route Flags")
	FName FlagToSet;
	UPROPERTY(EditAnywhere, Category = "Route Flags")
	bool FlagValue;
};

/// <summary>
/// Simply the name of the route flag to check to decide on the branch
/// </summary>
UCLASS()
class PARALOGUE_API UPlogRtEncounterBranchNodeUserData : public UPlogRtNodeUserData {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Route Flags")
	FName FlagToCheck;
};