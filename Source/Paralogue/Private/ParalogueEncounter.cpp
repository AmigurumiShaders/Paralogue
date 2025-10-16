// Fill out your copyright notice in the Description page of Project Settings.


#include "ParalogueEncounter.h"
#include "UObject/ObjectSaveContext.h"

#include "PlogRtEncounterGraphData.h"
#include "Engine/GameInstance.h"

DEFINE_LOG_CATEGORY(ParalogueRuntime);


UParalogueEncounter::UParalogueEncounter()
{
	//InitSegment(0);

	//TestChildHolder = NewObject<TSubclassOf<UParalogueEncounter>>(this);

}

void UParalogueEncounter::PreSave(FObjectPreSaveContext saveContext)
{
	if (_onPreSaveListener) {
		_onPreSaveListener();
	}
}

// just commenting this out for now because im sure I'll need it later
//void UParalogueEncounter::LogAllSegmentData()
//{
//	for (int i = 0; i < Segments.Num(); i++)
//	{
//		UE_LOG(LogTemp, Log, TEXT("\n vvvvvvvvvvvvv --- segment: %d"), i)
//		for (int l = 0; l < Segments[i]->NpcLinesWithFaces.Num(); l++)
//		{
//			UE_LOG(LogTemp, Log, TEXT("Line: %s"), *Segments[i]->NpcLinesWithFaces[l].Key)
//			UE_LOG(LogTemp, Log, TEXT("Face: %d"), Segments[i]->NpcLinesWithFaces[l].Value)
//
//		}
//
//		for (int l = 0; l < Segments[i]->PlayerOptionToNextSegment.Num(); l++)
//		{
//			UE_LOG(LogTemp, Log, TEXT("Line: %s"), *Segments[i]->PlayerOptionToNextSegment[l].Key.ToString())
//			//UE_LOG(LogTemp, Log, TEXT("Face: %s"), Segments[i]->PlayerOptionToNextSegment[l].Value) a whole new segment, leave it
//
//		}
//	}
//}

//void UParalogueEncounter::LogNextPage()
//{
//	PageForward();
//	UE_LOG(LogTemp, Log, TEXT("line: %s"), *currentLine)//.ToString()) //make this output the resulting dialogue path/route? give it test values maybe?
//}

FText UParalogueEncounter::GetCurrentNpcText()
{
	return currentLine;
}

int UParalogueEncounter::GetCurrentNpcFaceIdx()
{
	return currentFaceIdx;
}

void UParalogueEncounter::SetEncounterToStart(AActor* owningActor)
{
	worldContextObj = owningActor;// ->GetWorld(); //GetWorld does not appear to be blueprint callable, so we are taking the actor reference and calling it here in c++
	// (after a few other attempts this appears to be the most sane way to talk to the subsystem. Setting an outer for the encounters
	// just causes them to get caught up in garbage collection even between PIE sessions, which I would not have guessed. 
	// Getting the subsystem ahead of time causes an error when trying to set the flags sometimes and I just dont have the time to
	// pick that apart right now
	// 
	ReachedEncounterEnd = false;
	DisplayedPlayerOptions.Empty(); //just making sure its clear (can probably remove if transient specifier is working how i think it is
	//SetUpNewSegment(0);
	if (Segments.IsEmpty())
	{
		UE_LOG(ParalogueRuntime, Error, TEXT("Segment array empty!!!"));
		return;
	}
	else 
	{

		currentSegment = Segments[0];
	}
	SetUpNewSegment();

	encounterIsSetUp = true;
}

void UParalogueEncounter::TraverseToNextNonBranch()
{
	while (currentSegment->IsBranch)
	{
		bool flagValue = UGameplayStatics::GetGameInstance(worldContextObj)->
			GetSubsystem<UParalogueGameInstanceSubsystem>()->
			GetRouteFlag(currentSegment->FlagToCheck);

		if (flagValue)
		{
			currentSegment = currentSegment->NextSegmentForTrue;
		}
		else
		{
			currentSegment = currentSegment->NextSegmentForFalse;
		}
	}
}

void UParalogueEncounter::SetUpNewSegment()
{
	//make sure currentSegment is set
	if (currentSegment == nullptr)
	{
		UE_LOG(ParalogueRuntime, Warning, TEXT("\n currentSegment has not been set!!)"));
		return;
	}

	TraverseToNextNonBranch();
	
	UGameplayStatics::GetGameInstance(worldContextObj)->
		GetSubsystem<UParalogueGameInstanceSubsystem>()->
		SetRouteFlag(currentSegment->FlagToSet, currentSegment->FlagValue);

	//currentTextPages.Empty();
	currentTextPages = currentSegment->NpcLines;
	currentFaceOrder = currentSegment->NpcFaceSelector;
	////currentNpcPair = &currentSegment->NpcLinesWithFaces;
	////ugly for loop because wow i need to not have this be a tpair after all huh
	//for (int i = 0; i < currentSegment->NpcLinesWithFaces.Num(); i++)
	////for (int i = 0; i < currentSegment->NpcLinesWithFaces.Num(); i++)
	//{
	//	currentTextPages.Add(currentSegment->NpcLinesWithFaces[i].Key);
	//	//currentTextPages.Add(currentSegment->NpcLinesWithFaces[i].Key);

	//}
	currentPageIndex = 0;
	if (currentPageIndex < currentTextPages.Num() || !currentTextPages.IsEmpty()) // (had issues with array being empty before, so even index of 0 breaks it)
	{
		currentLine = currentTextPages[currentPageIndex];

	}
	else
	{
		UE_LOG(ParalogueRuntime, Warning, TEXT("\n Tried to find current line without currentTextPages being properly set (array appears to be empty). NPC's displayed dialogue will NOT advance."))
	}

	// separating the check for empty face array, so that the user isnt required to set up faces just to test dialogue
	// (combining the checks causes it to skip advancing dialogue when the face is missing, even if there is dialogue to advance to)
	if (currentPageIndex < currentFaceOrder.Num() || !currentFaceOrder.IsEmpty())
	{
		currentFaceIdx = currentFaceOrder[currentPageIndex];
	}
	else
	{
		UE_LOG(ParalogueRuntime, Warning, TEXT("\n Failed to find an NPC face for the current line of dialogue. NPC's face was NOT updated. \n Failed on dialogue line: %s"), *currentLine.ToString());
	}

	// set player response options
	DisplayedPlayerOptions = currentSegment->PlayerOptions;
}



void UParalogueEncounter::PageForward()
{
	if (!encounterIsSetUp)
	{
		UE_LOG(ParalogueRuntime, Warning, TEXT("\n Attempted page forward before setting up the current encounter."));
		return;
	}

	currentPageIndex++;
	if (currentPageIndex < currentTextPages.Num())
	{
		currentLine = currentTextPages[currentPageIndex];
		currentFaceIdx = currentFaceOrder[currentPageIndex];
	}
	else
	{
		////if the current page index is past the end of the page array, it must be time to show the player their response options
		//for (int i = 0; i < currentSegment->PlayerOptionToNextSegment.Num(); i++)
		//{
		//	DisplayedPlayerOptions.Add(currentSegment->PlayerOptionToNextSegment[i].Key);
		//	UE_LOG(LogTemp, Log, TEXT("Added response: %s"), *currentSegment->PlayerOptionToNextSegment[i].Key.ToString())
		//}

		if (!DisplayedPlayerOptions.IsEmpty()) 
		{

			AwaitingPlayerResponse = true;
			UE_LOG(ParalogueRuntime, Log, TEXT("\n End of segment reached, and response options appear to be available."))

		}
		else
		{
			ReachedEncounterEnd = true;
			//TestEncounterEvent();
			//It's important that we save player response log to persistent instance here in c++ rather than leave it up to the user to remember to do this.
			//We want a *complete* log of all responses the player has ever input during the game, doing it for them dramatically simplifies their work. In theory anyway. Point and laugh at me if this turns out to be useless. 
			
			UGameplayStatics::GetGameInstance(worldContextObj)->
				GetSubsystem<UParalogueGameInstanceSubsystem>()->
				AddEncounterResponseData(this->GetFName(), playerResponseLog);
		}
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

	playerResponseLog.Add(playerSelectedIdx);
	AwaitingPlayerResponse = false;
	currentSegment = currentSegment->NextSegmentSelector[playerSelectedIdx];
	//currentSegment = currentSegment->PlayerOptionToNextSegment[playerSelectedIdx].Value;
	//currentPageIndex = 0;
	SetUpNewSegment();

	UE_LOG(ParalogueRuntime, Log, TEXT("\n Emptied displayed response array"))
}


