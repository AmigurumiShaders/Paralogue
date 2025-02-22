// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"


#include "Containers/Map.h"

//#include "<functional>" //was not finding it and i dont care right now actually
#include "ParalogueEncounter.generated.h"

//USTRUCT(BlueprintType) struct FSegmentGraphNodeData
//{
//	GENERATED_USTRUCT_BODY()
//public:
//	UPROPERTY()
//	FVector2D Position; //wait i think this is the only one that I actually need??
//
//};
/**
 * 
 */
//USTRUCT(BlueprintType) struct FEncounterSegment
//{
//	GENERATED_USTRUCT_BODY()


/// <summary>
/// NOT the version exposed to the user to edit, this is the parsed/initialized version that is used to traverse the dialgue tree at runtime
/// </summary>
UCLASS()
class PARALOGUE_API UEncounterSegment : public UObject
{
	GENERATED_BODY()
	UEncounterSegment()
	{
		NpcLinesWithFaces.Add(TPair<FString, int>(FString("[ctor placeholder]"), 0));
		//NpcLinesWithFaces.Add(TPair<FString, int>(FString("[Dialogue segment not implemented]"), 0));
	}
public:

	TArray<FString> NpcLines;
	TArray<int> NpcFaces;

	TArray<FText> PlayerOption;
	//selector for the next dialogue segment, match idx with PlayerOption idx
	TArray<UEncounterSegment*> NextSegmentSelector;

	//UPROPERTY(EditAnywhere, Category = "Testing")
	//int PlayerResponseIndex; //for testing the logic of selecting the right npc response based on the player's selection (NOT planning to use this during runtime)

	///*player dialogue options*/
	//may actually need to be uprop, so they can be saved(?)
	//UPROPERTY(BlueprintReadOnly)
	TArray<TPair<FString, int>> NpcLinesWithFaces; //lines of text the NPC says paired with the corresponding face
	//UPROPERTY(BlueprintReadOnly)
	//pretty sure this was because a struct couldn't have a pointer to it. switch code to use this as a fallback if the pointer version is being too difficult
	//TArray<TPair<FText, int>> PlayerOptionToSegmentIdx; //use a tpair because even if we could use a tmap, there is no need to search by key/value. just idx
	//UPROPERTY(BlueprintReadOnly)
	TArray<TPair<FText, UEncounterSegment*>> PlayerOptionToNextSegment;

	///*Detailed description of this segment, such as for the situation it is intended for. Like a code comment*/
	//UPROPERTY(EditAnywhere, Category = "Meta")
	//FText Description; //maybe call this writer comment or something later but not worth overthinking now
	////it appears unreal maybe has some sort of "info" type, which might be a good thing to change this to

	///*Linear segment of dialogue from the character, as one delimited string of text*/
	//UPROPERTY(EditAnywhere) //meta=(MultiLine=true) add this?
	//FText CharacterLines; 

	///*player dialogue options*/
	////apparently tpair is not compatible with uproperty rip ui. 
	//// Therefore: todo: after this is all generally functional, figure out a way to expose the breakdown of encounter text. it could just be as simple as a console output tbh i shouldnt overthink it. as long as user can read the main block of text its fine tbh
	//// - could even just split up between runtime segment controlling and editor/user facing data structs. would be good for trimming down runtime data (like avoiding having the entire dialogue in memory twice lol) but come back to this.
	////UPROPERTY(EditAnywhere) //link the player's dialogue option to the dialogue segment that it should trigger
	//TArray<TPair<FText, int>> PlayerOptionToSegmentIdx; //use a tpair because even if we could use a tmap, there is no need to search by key/value. just idx
	////im wondering how this affect the deletion of nodes ug. is that why the tutorial guy used the pins?
	////possibly would be easier to have a pointer to the segments instead of an int? Esentially representing more directly as a tree rather than an array. 
	////UPROPERTY(EditAnywhere)
	//TArray<TPair<FText, UEncounterSegment*>> PlayerOptionToNextSegment;

	//TArray<FText> PlayerOptionsText; //todo?: would like to allow for player options to also be affectable
	//TArray<int> PlayerOptionToSegmentIdx; //use with PlayerOptionsText. because FText cannot be used as a map key, we get this hacky workaround. Make sure the indicies always correspond
	////ooooooOOOOOOOHHHH make this a map of index and enabled bool????



	//UPROPERTY(EditAnywhere)
	//bool enabled; //still have to figure out exactly how skipping/overarching branching would work oof...
	///*condition on which to show this segment*/
	//how do i implement the things where the types are selected, like when selecting types in blueprints
	//i wonder if the option to manually select these should be given in blueprints?
	//maybe most practical thing to do is just some way to let user run whatever code they need to enable/disable things?
	//this option thing might be good if i really wanted to focus on minimizing the coding required by the user, but its not enough of a priority right now

	/*
	* reference to the next dialogue segment this should point to, based on the player's response
	* (or just reference to the next segment in the event of having no player input)
	*/
	//TArray<int> nextSegmentPicker;

	// if theres any player options defined, show them when the character is done speaking. 
	// some way of returning which option the player selected

	/*event to dispatch*/ //however that works (PROBABLY try the type that the lambdas use first), come back to this. Needs to allow user to set an event that is defined in blueprints (maybe cpp in the future)
	//also this may need to be triggered on a particular dialogue page, which if we're going fully into localization may require a flag in the dialogue text?


	//graph data here maybe, just position for now (?)
	//UParalogueEncounterGraphNodeData* nodeData;
	//FSegmentGraphNodeData* graphNodeData;
};

	class UParalogueEncounterEdGraphData; //forward delcaration, because we need to be able to use UEncounterSegment in UNodeEncounterSegmentData, but without creating a circular dependency
UCLASS(BlueprintType)
class PARALOGUE_API UParalogueEncounter : public UObject
{
	GENERATED_BODY()
	
public:

	UParalogueEncounter();

	//all this because apparently the other way doesnt work with connectins...
	//void SetPreSaveListener(std::function<void()> onPreSaveListener) { _onPreSaveListener = onPreSaveListener; }
	//virtual void PreSave(FObjectPreSaveContext saveContext) override;

	UFUNCTION(CallInEditor, Category = "Testing")
	void LogAllSegmentData();
	UFUNCTION(CallInEditor, Category = "Testing")
	void LogNextPage();
	UPROPERTY(EditAnywhere, Category = "Testing")
	int testResponseIndex;
	//UFUNCTION(CallInEditor, Category = "Testing")
	//void InitSegment();
	

	/*Detailed description of this encounter, such as for the situation it is intended for. Like a code comment*/
	UPROPERTY(EditAnywhere, Category = "Meta")
	FText Description;
	//[todo: probably should use props rather than public variables for that array]
	UPROPERTY(EditAnywhere, Category = "Content")
	TArray<UEncounterSegment*> Segments; //shoudl this be a pointer actually? But i cannot make the struct a pointer...

	UEncounterSegment* startingSegment; //not necessary?

	UFUNCTION(BlueprintCallable)
	FString GetCurrentNpcText();
	//Sets up the encounter to the starting conditions, including setting the current line to the first line of dialogue
	UFUNCTION(BlueprintCallable)
	void SetEncounterToStart();



	////todo: on second thought these might be better suited for the toolkit part of the editor, but for now im just trying to Think...
	//FEncounterSegment* AddEncounterSegment();
	//FEncounterSegment* AddEncounterSegment(int playerOptionIdx, FEncounterSegment* parentSegment);
	void ClearEncounter(); //clears the segments, might be useful for saving the asset...
	void SetGraphData(UParalogueEncounterEdGraphData* data) { graphData = data; }
	UParalogueEncounterEdGraphData* GetGraphData() { return graphData; }
	UPROPERTY(BlueprintReadOnly)
	UParalogueEncounterEdGraphData* graphData = nullptr;
	
	//Input the index corresponding to the response the player selected. This function will select the next segment based on that index (or exit the dialogue)
	//Enter -1 to exit encounter
	UFUNCTION(BlueprintCallable)
	void ProcessPlayerResponse(int playerSelected);

	UPROPERTY(BlueprintReadOnly)
	TArray<FText> displayedPlayerOptions;
private:
	//std::function<void()> _onPreSaveListener = nullptr;

	//Sets up page/response arrays based on what currentSegment is set to (remember to set currentSegment BEFORE calling this)
	void SetUpNewSegment();
	//just for now until the splitting of tpair
	//TArray<TPair<FString, int>>* currentNpcPair;
	////"page" is the term we'll use for each fill of the dialogue bubble
	TArray<FString> currentTextPages;
	//TArray<int> currentFaceList;
	int currentPageCount;
	int currentPageIndex;


	//UPROPERTY(BlueprintReadOnly)
	UEncounterSegment* currentSegment;
	FString currentLine; /// todo: ououuouhhhh what was that about getters and setters again oops i forgot to go figure out how they work in unreal
	//if i can just put these private without much effort that may be the way to go. unity brain just defaults to public variables for editor things for some reason even though i know serialize field is a thing
	//actually pretty sure this current line thing was just for console outputting, remove if not needed for UI (?)

	FString endOfSegment = "Reached end of segment";

	//advances the current dialogue display by one page
	UFUNCTION(BlueprintCallable)
	void PageForward(); 

};
