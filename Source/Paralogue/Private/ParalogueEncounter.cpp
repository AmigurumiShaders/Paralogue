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
	UE_LOG(LogTemp, Log, TEXT("line: %s"), *currentLine)//.ToString()) //make this output the resulting dialogue path/route? give it test values maybe?
}

FString UParalogueEncounter::GetCurrentNpcText()
{
	return currentLine;
}

void UParalogueEncounter::SetEncounterToStart()
{
	displayedPlayerOptions.Empty(); //just making sure its clear
	//SetUpNewSegment(0);
	currentSegment = Segments[0];
	SetUpNewSegment();
}

void UParalogueEncounter::SetUpNewSegment()
{
	//make sure currentSegment is set
	if (currentSegment == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("\n currentSegment has not been set!!)"));
		return;
	}

	currentTextPages.Empty();
	//currentNpcPair = &currentSegment->NpcLinesWithFaces;
	//ugly for loop because wow i need to not have this be a tpair after all huh
	for (int i = 0; i < currentSegment->NpcLinesWithFaces.Num(); i++)
	{
		currentTextPages.Add(currentSegment->NpcLinesWithFaces[i].Key);

	}
	currentPageIndex = 0;
	if (currentPageIndex < currentTextPages.Num()) // making sure array is properly filled before trying to grab current line (had issues with this not being the case before)
	{
		//currentLine = currentTextPages[currentPageIndex];
		currentLine = currentSegment->NpcLinesWithFaces[currentPageIndex].Key;
		UE_LOG(LogTemp, Warning, TEXT("\n Tried to find current line before currentTextPages was properly set (array appears to be empty)"))
	}
}



void UParalogueEncounter::PageForward()
{
	currentPageIndex++;
	if (currentPageIndex < currentTextPages.Num())
	{
		currentLine = currentTextPages[currentPageIndex];
	}
	else
	{
		//if the current page index is past the end of the page array, it must be time to show the player their response options
		for (int i = 0; i < currentSegment->PlayerOptionToNextSegment.Num(); i++)
		{
			displayedPlayerOptions.Add(currentSegment->PlayerOptionToNextSegment[i].Key);
			UE_LOG(LogTemp, Log, TEXT("Added response: %s"), *currentSegment->PlayerOptionToNextSegment[i].Key.ToString())
		}
		UE_LOG(LogTemp, Log, TEXT("\n End of segment reached, should now show response options"))
		//currentLine = endOfSegment;
	}



	/*possible regexes :
		 \d\|				just the digit and the pipe
		 ((?![\d+\|]).)	everything but the digit and pipe
	*/
}

void UParalogueEncounter::ProcessPlayerResponse(int playerSelectedIdx)
{
	/*if (playerSelectedIdx == -1) {

	}*/
	//if(currentSegment->PlayerOptionToNextSegment[playerSelectedIdx].Value)
	currentSegment = currentSegment->PlayerOptionToNextSegment[playerSelectedIdx].Value;
	//currentPageIndex = 0;
	SetUpNewSegment();
	displayedPlayerOptions.Empty(); //the player has entered their response, so stop making the response options available for display

	UE_LOG(LogTemp, Log, TEXT("\n Emptied displayed response array"))
}


