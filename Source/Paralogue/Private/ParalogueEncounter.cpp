// Fill out your copyright notice in the Description page of Project Settings.


#include "ParalogueEncounter.h"
#include "UObject/ObjectSaveContext.h"

#include "ParalogueEncounterGraphData.h"

UParalogueEncounter::UParalogueEncounter()
{
	//InitSegment(0);
}

//void UParalogueEncounter::PreSave(FObjectPreSaveContext saveContext)
//{
//	if (_onPreSaveListener) {
//		_onPreSaveListener();
//	}
//}

void UParalogueEncounter::LogAllSegmentData()
{
	for (int i = 0; i < Segments.Num(); i++)
	{
		UE_LOG(LogTemp, Log, TEXT("\n vvvvvvvvvvvvv --- segment: %d"), i)
		for (int l = 0; l < Segments[i]->NpcLinesWithFaces.Num(); l++)
		{
			UE_LOG(LogTemp, Log, TEXT("Line: %s"), *Segments[i]->NpcLinesWithFaces[l].Key)
			UE_LOG(LogTemp, Log, TEXT("Face: %d"), Segments[i]->NpcLinesWithFaces[l].Value)

		}

		for (int l = 0; l < Segments[i]->PlayerOptionToNextSegment.Num(); l++)
		{
			UE_LOG(LogTemp, Log, TEXT("Line: %s"), *Segments[i]->PlayerOptionToNextSegment[l].Key.ToString())
			//UE_LOG(LogTemp, Log, TEXT("Face: %s"), Segments[i]->PlayerOptionToNextSegment[l].Value) a whole new segment, leave it

		}
	}
}

void UParalogueEncounter::LogNextPage()
{
	PageForward();
	UE_LOG(LogTemp, Log, TEXT("line: %s"), *CurrentLine)//.ToString()) //make this output the resulting dialogue path/route? give it test values maybe?
}

//void UParalogueEncounter::InitSegment() //todo: need to make sure we reinit whenever changes are made to the asset
//{	
//	//uuuh call each fill of the dialogue bubble "pages" for now?
//	//ParseSegment(segmentIndex);
//	ParseSegment(0);
//	currentPageCount = currentTextPages.Num();
//
//	//set the variables to the first page values
//	currentPageIndex = 0;
//	CurrentLine = currentTextPages[currentPageIndex];
//
//	//todo: also need to implement separating the character face number from the rest of the text oops
//}

//FEncounterSegment* UParalogueEncounter::AddEncounterSegment()
//{
//	int index = Segments.Add(new FEncounterSegment());
//
//	return index;
//}

void UParalogueEncounter::PageForward()
{
	currentPageIndex++;
	if (currentPageIndex < currentTextPages.Num())
	{
		CurrentLine = currentTextPages[currentPageIndex];
	}
	else
	{
		CurrentLine = endOfSegment;
	}

	//perhaps the way this will work is the UI and the character face swapping will look at CurrentLine on their own, and each grab what they need from it independedntly. yeah keep that spelling. send post.
	//or maybe current line should be an array? if theres no convenient way w/o array splitting to have the two things get the data they need then that would be less work for me AND to run...
	//maybe would have the face check if the thing is a number and then have the dialogue display just show the last entry in the array

	//also just remembered that half of the reason im doing the dialogue the way I am is to allow for "pages" to be automatically broken up if they are over the size of the bubble, while still enforcing breaks that the writer can insert. 
	//may not be something to prioritize though

	/*possible regexes :
		 \d\|				just the digit and the pipe
		 ((?![\d+\|]).)	everything but the digit and pipe
	*/
}

//leaving in runtime for now, in case this is necessary for localization if we someday do that
void UParalogueEncounter::ParseSegment(const int segmentIndex)
{
	//it may be more computationally efficient to split up the lines before runtime somehow, but tbh i dont think it would be that significant that its worth worrying about right now
	//UEncounterSegment* thisSegment = Segments[segmentIndex];
	//FString lines = thisSegment->CharacterLines.ToString(); //docs say that this is potentially lossy for some languages, however it does not appear that will affect this use case? 
	//FString delimiter = L"|,";
	////TArray<FString> splitLines;// = [];
	//lines.ParseIntoArray(currentTextPages, *delimiter, false); //uuuuuh apparently this is exponential complexity so if the computer starts really dying keep this in mind

	//for now just parse out the faces on the fly

	//beginning to wonder about allowing player responses to also be dependent on things, and also about a flatter layout in general (pointing different things to different array indicies, though im mostly doing that already...)

	//return TArray<FString>();
}
