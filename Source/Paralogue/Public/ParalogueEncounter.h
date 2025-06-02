// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/GameplayStatics.h"
#include "ParalogueGameInstanceSubsystem.h"

#include "Containers/Map.h"

#include "ParalogueEncounterGraphData.h"

//#include "<functional>" //was not finding it and i dont care right now actually
#include "ParalogueEncounter.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(ParalogueRuntime, Log, All);


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
	//could consider initializers called things like "init as branch" or something to simplify the code for building the encounters on editor side
	UEncounterSegment()
	{
		NpcLines.Add(FString("[ctor placeholder]"));
		//NpcLinesWithFaces.Add(TPair<FString, int>(FString("[ctor placeholder]"), 0));
		//NpcLinesWithFaces.Add(TPair<FString, int>(FString("[Dialogue segment not implemented]"), 0));
	}
public:

	//Lines of text that the NPC says, each array element is one page
	UPROPERTY(EditAnywhere, Category = "Dialogue")
	TArray<FString> NpcLines;

	//Selector for the next dialogue segment, match idx with NpcLines idx
	UPROPERTY(EditAnywhere, Category = "Dialogue")
	TArray<int> NpcFaceSelector;

	UPROPERTY(EditAnywhere, Category = "Dialogue")
	TArray<FText> PlayerOptions;

	//Selector for the next dialogue segment, match idx with PlayerOption idx
	UPROPERTY(EditAnywhere, Category = "Dialogue")
	TArray<UEncounterSegment*> NextSegmentSelector;

	UPROPERTY(EditAnywhere, Category = "Route Flags")
	FName FlagToSet;
	UPROPERTY(EditAnywhere, Category = "Route Flags")
	bool FlagValue;

	//UPROPERTY(EditAnywhere, Category = "Testing")
	//int PlayerResponseIndex; //for testing the logic of selecting the right npc response based on the player's selection (NOT planning to use this during runtime)

	/////*player dialogue options*/
	////may actually need to be uprop, so they can be saved(?)
	////UPROPERTY(BlueprintReadOnly)
	//TArray<TPair<FString, int>> NpcLinesWithFaces; //lines of text the NPC says paired with the corresponding face
	////UPROPERTY(BlueprintReadOnly)
	////pretty sure this was because a struct couldn't have a pointer to it. switch code to use this as a fallback if the pointer version is being too difficult
	////TArray<TPair<FText, int>> PlayerOptionToSegmentIdx; //use a tpair because even if we could use a tmap, there is no need to search by key/value. just idx
	////UPROPERTY(BlueprintReadOnly)
	//TArray<TPair<FText, UEncounterSegment*>> PlayerOptionToNextSegment;

	///*Detailed description of this segment, such as for the situation it is intended for. Like a code comment*/
	//UPROPERTY(EditAnywhere, Category = "Meta")
	//FText Description; //maybe call this writer comment or something later but not worth overthinking now
	////it appears unreal maybe has some sort of "info" type, which might be a good thing to change this to

};

	//class UParalogueEncounterEdGraphData; //forward delcaration, because we need to be able to use UEncounterSegment in UNodeEncounterSegmentData, but without creating a circular dependency
UCLASS(BlueprintType, Blueprintable)
class PARALOGUE_API UParalogueEncounter : public UObject
{
	GENERATED_BODY()
	
public:

	UParalogueEncounter();

	/*UPROPERTY(EditAnywhere)
	UParalogueEncounter* TestChildHolder;*/

	//UFUNCTION(BlueprintImplementableEvent)
	//void TestEncounterEvent();

	//all this because apparently the other way doesnt work with connectins...
	//void SetPreSaveListener(std::function<void()> onPreSaveListener) { _onPreSaveListener = onPreSaveListener; }
	//virtual void PreSave(FObjectPreSaveContext saveContext) override;

	//UFUNCTION(CallInEditor, Category = "Testing")
	//void LogAllSegmentData();
	//UFUNCTION(CallInEditor, Category = "Testing")
	//void LogNextPage();
	//UPROPERTY(EditAnywhere, Category = "Testing")
	//int testResponseIndex;
	//UFUNCTION(CallInEditor, Category = "Testing")
	//void InitSegment();
	



	//void ClearEncounter(); //clears the segments, might be useful for saving the asset...
	void SetGraphData(UPlogRtEditorSavedGraphData* data) { graphData = data; }
	UPlogRtEditorSavedGraphData* GetGraphData() { return graphData; }
	UPROPERTY(BlueprintReadOnly, Category = "Editor")
	UPlogRtEditorSavedGraphData* graphData = nullptr;
	
	// =============================
	// === User/blueprint-facing ===
	/*Detailed description of this encounter, such as for the situation it is intended for. Like a code comment*/
	UPROPERTY(EditAnywhere, Category = "Meta")
	FText Description;
	//[todo: probably should use props rather than public variables for that array]
	UPROPERTY(VisibleAnywhere, Category = "Content")
	TArray<UEncounterSegment*> Segments; 
	UPROPERTY(VisibleAnywhere, Category = "AAAAAAAAA")
	UEncounterSegment* startingSegment; //not necessary?


	UFUNCTION(BlueprintCallable, Category = "AAAAAAAAA")
	FString GetCurrentNpcText();
	UFUNCTION(BlueprintCallable, Category = "AAAAAAAAA")
	int GetCurrentNpcFaceIdx();
	//Sets up the encounter to the starting conditions, including setting the current line to the first line of dialogue
	UFUNCTION(BlueprintCallable, Category = "AAAAAAAAA")
	void SetEncounterToStart(AActor* owningActor); //need world context bc thats what GetGameInstance needs, and passing from BPs is the least gross and least time-consuming way I can think of
	UFUNCTION(BlueprintCallable, Category = "AAAAAAAAA")
	TArray<int> GetPlayerResponseLog() { return playerResponseLog; }

	//Options within the current encounter that the player has to respond to the npc
	UPROPERTY(BlueprintReadOnly, Transient, Category = "AAAAAAAAA")
	TArray<FText> DisplayedPlayerOptions;
	//Set to true when there are no dialogue pages left, and there are dialogue options available in the segment
	UPROPERTY(BlueprintReadOnly, Transient, Category = "AAAAAAAAA")
	bool AwaitingPlayerResponse;
	//Set to true when the encounter reaches the end of the available dialogue pages with no responses (or otherwise other branches) available in the segment
	UPROPERTY(BlueprintReadOnly, Transient, Category = "AAAAAAAAA")
	bool ReachedEncounterEnd = false;

	//Input the index corresponding to the response the player selected. This function will select the next segment based on that index (or exit the dialogue)
	//Enter -1 to exit encounter
	UFUNCTION(BlueprintCallable, Category = "AAAAAAAAA")
	void ProcessPlayerResponse(int playerSelected);

private:
	//advances the current dialogue display by one page
	UFUNCTION(BlueprintCallable, Category = "AAAAAAAAA")
	void PageForward(); 


	//Sets up page/response arrays based on what currentSegment is set to (remember to set currentSegment BEFORE calling this)
	void SetUpNewSegment();

	////"page" is the term we'll use for each fill of the dialogue bubble
	TArray<FString> currentTextPages;
	TArray<int> currentFaceOrder;
	//TArray<int> currentFaceList;
	int currentPageCount;
	int currentPageIndex;

	UObject* worldContextObj;

	//UPROPERTY(BlueprintReadOnly)
	UEncounterSegment* currentSegment;
	FString currentLine; /// todo: ououuouhhhh what was that about getters and setters again oops i forgot to go figure out how they work in unreal
	int currentFaceIdx;

	FString endOfSegment = "Reached end of segment";
	TArray<int> playerResponseLog;

};
