#pragma once

#include "CoreMinimal.h"

#include "NodeEncounterSegmentData.generated.h"

UCLASS() //maybe make BlueprintType?
/// <summary>
/// Per-node data edited by user creating the dialogue, such as the NPC text and the player responses. (and not the graph data like position and connections)
/// </summary>
class PARALOGUE_API UNodeEncounterSegmentData : public UObject {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Meta")
	FText Title;
	/*Detailed description of this segment, such as for the situation it is intended for. Like a code comment*/
	UPROPERTY(EditAnywhere, Category = "Meta")
	FText Description; //maybe call this writer comment or something later but not worth overthinking now
	//it appears unreal maybe has some sort of "info" type, which might be a good thing to change this to

	/*Linear segment of dialogue from the character, as one delimited string of text*/
	UPROPERTY(EditAnywhere,meta = (MultiLine = true) )//meta=(MultiLine=true) add this?
		FText CharacterLines;
	UPROPERTY(EditAnywhere) //meta=(MultiLine=true) add this?
		TArray<FText> PlayerResponseOptions;


	UPROPERTY(EditAnywhere)
	bool enabled; //still have to figure out exactly how skipping/overarching branching would work oof...
	/*condition on which to show this segment*/
	//how do i implement the things where the types are selected, like when selecting types in blueprints
	//i wonder if the option to manually select these should be given in blueprints?
	//maybe most practical thing to do is just some way to let user run whatever code they need to enable/disable things?
	//this option thing might be good if i really wanted to focus on minimizing the coding required by the user, but its not enough of a priority right now


};