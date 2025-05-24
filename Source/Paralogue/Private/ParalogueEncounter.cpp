// Fill out your copyright notice in the Description page of Project Settings.


#include "ParalogueEncounter.h"
#include "UObject/ObjectSaveContext.h"

#include "ParalogueEncounterGraphData.h"

DEFINE_LOG_CATEGORY(ParalogueRuntime);

UParalogueEncounter::UParalogueEncounter()
{
	//InitSegment(0);

	//TestChildHolder = NewObject<TSubclassOf<UParalogueEncounter>>(this);

}

//void UParalogueEncounter::PreSave(FObjectPreSaveContext saveContext)
//{
//	if (_onPreSaveListener) {
//		_onPreSaveListener();
//	}
//}
//
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

FString UParalogueEncounter::GetCurrentNpcText()
{
	return currentLine;
}

int UParalogueEncounter::GetCurrentNpcFaceIdx()
{
	return currentFaceIdx;
}

void UParalogueEncounter::SetEncounterToStart(AActor* owningActor)
{
	worldContextObj = owningActor->GetWorld(); //GetWorld does not appear to be blueprint callable, so we are taking the actor reference and calling it here in c++
	//todo: actually, the encounters should probably get an actual owner to begin with. I'm sure it would be more proper.
	// it would also make far more sense to the user to not have to pass in a random actor pointer 
	// into the first bp callable function I thought would work. However this is already working
	// and idk how to give it an owner off the top of my head. The entirety of my UE experience says just 
	// looking up how to do that would either be quicker than typing all this, or it would be a 3 day saga 
	// frought with the consequences of my actions. This is my line in the sand dude, so onto the polish pile this goes. (this was not the polish mountain comeback i expected)
	ReachedEncounterEnd = false;
	DisplayedPlayerOptions.Empty(); //just making sure its clear (can probably remove if transient specifier is working how i think it is
	//SetUpNewSegment(0);
	currentSegment = Segments[0];
	SetUpNewSegment();
}

void UParalogueEncounter::SetUpNewSegment()
{
	//make sure currentSegment is set
	if (currentSegment == nullptr)
	{
		UE_LOG(ParalogueRuntime, Warning, TEXT("\n currentSegment has not been set!!)"));
		return;
	}

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
	if (currentPageIndex < currentTextPages.Num() && currentPageIndex < currentFaceOrder.Num()) // (had issues with array being empty before, so even index of 0 breaks it)
	{
		currentLine = currentTextPages[currentPageIndex];
		currentFaceIdx = currentFaceOrder[currentPageIndex];

	}
	else
	{
		UE_LOG(ParalogueRuntime, Warning, TEXT("\n Tried to find current line before currentTextPages and currentFaceOrder were properly set (arrays appear to be empty)"))
	}

	// set player response options
	DisplayedPlayerOptions = currentSegment->PlayerOptions;
}



void UParalogueEncounter::PageForward()
{
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


