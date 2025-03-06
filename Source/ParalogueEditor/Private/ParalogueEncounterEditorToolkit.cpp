// Fill out your copyright notice in the Description page of Project Settings.


#include "ParalogueEncounterEditorToolkit.h"
#include "Widgets/Docking/SDockTab.h"
#include "SParalogueEncounterWidget.h"
#include "Modules/ModuleManager.h"

#include "GraphEditor.h"
#include "Editor/UnrealEd/Public/Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h" //why does this not require the full path but the above one does? i am questioning this information more...
#include "ParalogueGraphSchema.h"

#include "NodeEncounterSegmentData.h"

//InObjects is the objects being referenced by the editor. the "open" working asset
void ParalogueEncounterEditorToolkit::InitEditor(const TArray<UObject*>& InObjects)
{
	workingEncounterAsset = Cast<UParalogueEncounter>(InObjects[0]); //maybe rename to ThisParalogueEncounter?
	//workingEncounterAsset->SetPreSaveListener([this]() {OnWorkingAssetPreSave(); });

	uiDialogueGraph = FBlueprintEditorUtils::CreateNewGraph(
		workingEncounterAsset,
		"Dialogue Graph Editor",
		UEdGraph::StaticClass(),
		UParalogueGraphSchema::StaticClass()
	);

	const TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout("ParalogueEncounterEditorLayout")
		->AddArea
		(
			FTabManager::NewPrimaryArea()->SetOrientation(Orient_Vertical)
			->Split
			(
				FTabManager::NewSplitter()
				->SetSizeCoefficient(0.6f)
				->SetOrientation(Orient_Horizontal)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.8f)
					->AddTab("ParalogueEncounterPDFTab", ETabState::OpenedTab)
				)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.2f)
					->AddTab("ParalogueEncounterDetailsTab", ETabState::OpenedTab)
				)
			)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.4f)
				->AddTab("OutputLog", ETabState::OpenedTab)
			)
		);
	FAssetEditorToolkit::InitAssetEditor(EToolkitMode::Standalone, {}, "ParalogueEncounterEditor", Layout, true, true, InObjects);

	UpdateGraphFromEncounterAsset();//is this not being called in a place it should be??

	//do i really have to cant i just trigger a change whenever theres a connection myself
	graphChangeListenerHandler = uiDialogueGraph->AddOnGraphChangedHandler(
		FOnGraphChanged::FDelegate::CreateSP(this, &ParalogueEncounterEditorToolkit::OnGraphChanged)
	);
}

void ParalogueEncounterEditorToolkit::RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(INVTEXT("Paralogue Encounter Editor"));

	InTabManager->RegisterTabSpawner("ParalogueEncounterPDFTab", FOnSpawnTab::CreateLambda([this](const FSpawnTabArgs&)
		{

			SGraphEditor::FGraphEditorEvents graphEvents;
			graphEvents.OnSelectionChanged.BindRaw(this, &ParalogueEncounterEditorToolkit::OnGraphSelectionChanged);

			workingGraphSlateDisplay =
				SNew(SGraphEditor)
				.IsEditable(true)
				.GraphEvents(graphEvents)
				.GraphToEdit(uiDialogueGraph);

			return SNew(SDockTab)
				/*[
					SNew(SGraphEditor)
						.IsEditable(true)
						.GraphToEdit(uiDialogueGraph)

				]*/
				[
					SNew(SVerticalBox)
						+ SVerticalBox::Slot()
						.FillHeight(1.0f)
						.HAlign(HAlign_Fill)
						[
							workingGraphSlateDisplay.ToSharedRef()
						]
				];
		}))
		.SetDisplayName(INVTEXT("Dialogue Graph"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef());

	FPropertyEditorModule& propertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs detailsViewArgs;
	detailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
	TSharedRef<IDetailsView> detailsView = propertyEditorModule.CreateDetailView(detailsViewArgs);
	detailsView->SetObjects(TArray<UObject*>{ workingEncounterAsset });

	
	selectedNodeDetailsView = propertyEditorModule.CreateDetailView(detailsViewArgs);
	selectedNodeDetailsView->SetObject(nullptr); //setting the object(s) elsewhere
	SetSelectedNodeDetailView(selectedNodeDetailsView);

	InTabManager->RegisterTabSpawner("ParalogueEncounterDetailsTab", FOnSpawnTab::CreateLambda([detailsView, this](const FSpawnTabArgs&)
		{
			return SNew(SDockTab)
				/*[
					detailsView
				];*/
				[
					SNew(SVerticalBox)
						+ SVerticalBox::Slot()
						.FillHeight(1.0f)
						.HAlign(HAlign_Fill)
						[
							detailsView
						]
						+ SVerticalBox::Slot()
						.FillHeight(1.0f)
						.HAlign(HAlign_Fill)
						[
							selectedNodeDetailsView.ToSharedRef() //notice the difference between TSharedRef and TSharedPtr. Slate needs the REF
						]
				];
		}))
		.SetDisplayName(INVTEXT("Details"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef());
}

void ParalogueEncounterEditorToolkit::UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);
	InTabManager->UnregisterTabSpawner("ParalogueEncounterPDFTab");
	InTabManager->UnregisterTabSpawner("ParalogueEncounterDetailsTab");
}

void ParalogueEncounterEditorToolkit::OnClose()
{
	UpdateEncounterAssetFromGraph(); //TODO probably want to ask whether to save when closing rather than just doing it (and also implementing a save button in general)
	uiDialogueGraph->RemoveOnGraphChangedHandler(graphChangeListenerHandler);
	//workingEncounterAsset->SetPreSaveListener(nullptr);
	FAssetEditorToolkit::OnClose();
}

//void ParalogueEncounterEditorToolkit::OnWorkingAssetPreSave() {
//	// Update our asset from the graph just before saving it
//	UpdateEncounterAssetFromGraph();
//}
void ParalogueEncounterEditorToolkit::OnGraphChanged(const FEdGraphEditAction& editAction)
{
	//apparently this doesnt actually get called when you link pins together???


	UpdateEncounterAssetFromGraph();

	//just gonna put this here for now, not sure if theres a better place
	BuildIngameEncounterFromGraph();
}

void ParalogueEncounterEditorToolkit::OnNodeDetailsViewPropertiesUpdated(const FPropertyChangedEvent& event)
{
	if (workingGraphSlateDisplay != nullptr) 
	{
		//get the node being modified
		UParalogueSegmentGraphNode* segNode = GetSelectedNode(workingGraphSlateDisplay->GetSelectedNodes());
		if (segNode != nullptr)
		{
			segNode->SyncPinsWithResponses();
		}
		workingGraphSlateDisplay->NotifyGraphChanged();
	}
}

FText ParalogueEncounterEditorToolkit::GetDescription() const
{
	return workingEncounterAsset->Description;
}

void ParalogueEncounterEditorToolkit::SetDescription(FText newDescription) const
{
	workingEncounterAsset->Description = newDescription;
}

void ParalogueEncounterEditorToolkit::SetSelectedNodeDetailView(TSharedPtr<class IDetailsView> detailsView)
{
	selectedNodeDetailsView = detailsView;
	//add function OnNodeDetailsViewPropertiesUpdated as delegate, so that whenever its registered as updated by slate, our side can update too
	selectedNodeDetailsView->OnFinishedChangingProperties().AddRaw(this, &ParalogueEncounterEditorToolkit::OnNodeDetailsViewPropertiesUpdated);
}

UParalogueSegmentGraphNode* ParalogueEncounterEditorToolkit::GetSelectedNode(const FGraphPanelSelectionSet& selection)
{
	//todo: theoretically according to Kirby video, you can (probably) set multiple objects and it will let you edit the common set of properties
// selection is a group of UObjects, find the first ParalogueSegmentGraphNode if any
	for (UObject* obj : selection)
	{
		UParalogueSegmentGraphNode* node = Cast<UParalogueSegmentGraphNode>(obj);
		if (node != nullptr)
		{
			return node;
		}
	}

	return nullptr;
}

void ParalogueEncounterEditorToolkit::OnGraphSelectionChanged(const FGraphPanelSelectionSet& selection)
{
	//todo: theoretically according to Kirby video, you can (probably) set multiple objects and it will let you edit the common set of properties
	// selection is a group of UObjects, find the first ParalogueSegmentGraphNode if any
	UParalogueSegmentGraphNode* selectedNode = GetSelectedNode(selection);
	if (selectedNode != nullptr) 
	{
		selectedNodeDetailsView->SetObject(selectedNode->GetNodeInfo());
	}
	else 
	{

		selectedNodeDetailsView->SetObject(nullptr);
	}
}


void ParalogueEncounterEditorToolkit::UpdateEncounterAssetFromGraph()
{
	if (workingEncounterAsset == nullptr || uiDialogueGraph == nullptr) //ensure that we have a working asset and a graph
	{
		return;
	}

	UParalogueEncounterEdGraphData* graphDataToSave = NewObject<UParalogueEncounterEdGraphData>(workingEncounterAsset);
	//workingEncounterAsset->SetGraphData(graphDataToSave);
	workingEncounterAsset->graphData = graphDataToSave;

	// According to the video, we have to create the node data before we can create the connection data, so we have to 
	// go through all the nodes twice. This does not make intuitive sense to me but i guess maybe once i think about it more it would?
	// either that or it might just not be worth figuring out
	//upon thinking about the above, it could probably be done in one loop but each iteration would just have more steps and be more complicated. 
	//so that is simpler and also doesnt require much more overall work, if any. 

	//loop through all of the nodes of the graph to create save-able runtime versions

	TArray<TPair<FGuid, FGuid>> connections;
	TMap<FGuid, UParalogueEncounterEdPinData*> guidToPinMap; //map between guid and the place the data is Going

	// for each node in the UI dialogue graph
	for (UEdGraphNode* uiNode : uiDialogueGraph->Nodes)
	{
		UParalogueSegmentGraphNode* uiGraphNode = Cast<UParalogueSegmentGraphNode>(uiNode);
		if (uiGraphNode == nullptr) 
		{
			continue;
		}

		UParalogueEncounterEdNodeData* assetNodeData = NewObject<UParalogueEncounterEdNodeData>(graphDataToSave);
		assetNodeData->Position = FVector2D(uiNode->NodePosX, uiNode->NodePosY);

		assetNodeData->NodeSegmentData = uiGraphNode->GetNodeInfo();

		//for each pin in the node, save its data and get any connections it has
		for (UEdGraphPin* uiPin : uiNode->Pins)
		{
			UParalogueEncounterEdPinData* assetPinData = NewObject<UParalogueEncounterEdPinData>(assetNodeData);
			assetPinData->PinName = uiPin->PinName;
			assetPinData->PinId = uiPin->PinId;
			//i had a thought about combining into a single if/else instead of 2 if's but one thing at a time and thats at best a marginal improvement anyway
			//connection check may be redundant with the following loop on connections but it doesnt really matter i think
			if (uiPin->HasAnyConnections() && uiPin->Direction == EEdGraphPinDirection::EGPD_Output) 
			{
				//for each link on the pin
				for (UEdGraphPin* linkedPin : uiPin->LinkedTo) //user is allowed to have multiple connections per pin, need to save all of them
				{
					TPair<FGuid, FGuid> connection = TPairInitializer(uiPin->PinId, linkedPin->PinId);
					connections.Add(connection);
				}

			}

			guidToPinMap.Add(uiPin->PinId, assetPinData);
			if (uiPin->Direction == EEdGraphPinDirection::EGPD_Input) 
			{
				assetNodeData->InputPin = assetPinData;
			}
			else
			{
				assetNodeData->OutputPins.Add(assetPinData);
			}
		}

		graphDataToSave->Nodes.Add(assetNodeData);
	}

	//now that all the nodes are created and connections logged, we can loop through and save its connections to the asset
	for (TPair<FGuid, FGuid> connection : connections)
	{
		//use the map to grab the pin by its guid (unfortunately tpair calls them key/value, which is sort of making it weird when using both as map keys...)
		UParalogueEncounterEdPinData* pin1 = guidToPinMap[connection.Key];
		UParalogueEncounterEdPinData* pin2 = guidToPinMap[connection.Value];
		pin1->Connections.Add(pin2);
	}

}

void ParalogueEncounterEditorToolkit::UpdateGraphFromEncounterAsset()
{
	if (workingEncounterAsset->GetGraphData() == nullptr)
	{
		return;
	}

	/*
	* the inverse of the above function to save the asset -
	* - load the individual nodes into the graph (creating pins as we go)
	* - after all nodes are in the graph, hook up all the connections
	*/


	TArray<TPair<FGuid, FGuid>> connections;
	TMap<FGuid, UEdGraphPin*> guidToPinMap; //map between guid and the place the data is Going (its being loaded in from the asset into the graph, so other way around from the saving code)
	//because we need to keep track of corresponding guid for each pin
	

	//for each node saved in the asset graph
	for (UParalogueEncounterEdNodeData* assetNode : workingEncounterAsset->GetGraphData()->Nodes)
	{
		UParalogueSegmentGraphNode* newUiNode = NewObject<UParalogueSegmentGraphNode>(uiDialogueGraph);
		newUiNode->CreateNewGuid(); //this is not saved because there isnt really a reason to (for now), so just make a new one
		newUiNode->NodePosX = assetNode->Position.X;
		newUiNode->NodePosY = assetNode->Position.Y;

		if (assetNode->NodeSegmentData != nullptr) 
		{
			newUiNode->SetNodeInfo(DuplicateObject(assetNode->NodeSegmentData, assetNode)); //The object is parented to the node, and will go away when the node goes away. Need to duplicate 
		}
		else
		{
			newUiNode->SetNodeInfo(NewObject<UNodeEncounterSegmentData>(assetNode));
		}

		//for each pin in the SAVED node, create a pin in the UI node
		UEdGraphPin* newUiPin = nullptr;

		//---input pin section (input and output pins are saved separately, and we know there is only one input pin per node, no need to loop)
		UParalogueEncounterEdPinData* assetInputPin = assetNode->InputPin;
		if (assetInputPin != nullptr) {
			newUiPin = newUiNode->CreateCustomPin(EEdGraphPinDirection::EGPD_Input, assetInputPin->PinName);
			newUiPin->PinId = assetInputPin->PinId;
			for (UParalogueEncounterEdPinData* linkedPin : assetInputPin->Connections) //user is allowed to have multiple connections per pin, need to save all of them
			{
				TPair<FGuid, FGuid> connection = TPairInitializer(assetInputPin->PinId, linkedPin->PinId);
				connections.Add(connection);
			}
			//link to id
			guidToPinMap.Add(assetInputPin->PinId, newUiPin);

		}


		//---output pins section
		for (UParalogueEncounterEdPinData* assetOutputPin : assetNode->OutputPins)
		{
			newUiPin = newUiNode->CreateCustomPin(EEdGraphPinDirection::EGPD_Output, assetOutputPin->PinName);
			newUiPin->PinId = assetOutputPin->PinId;

			for (UParalogueEncounterEdPinData* linkedPin : assetOutputPin->Connections) //user is allowed to have multiple connections per pin, need to save all of them
			{
				TPair<FGuid, FGuid> connection = TPairInitializer(assetOutputPin->PinId, linkedPin->PinId);
				connections.Add(connection);
			}
			//link to id
			guidToPinMap.Add(assetOutputPin->PinId, newUiPin);
		}

		uiDialogueGraph->AddNode(newUiNode, true, true); //look at what these true bools are later

	}

	//now that all the nodes are created and connections retreived, we can loop through and apply the connections to the UI graph
	for (TPair<FGuid, FGuid> connection : connections)
	{
		//use the map to grab the pin by its guid (unfortunately tpair calls them key/value, which is sort of making it weird when using both as map keys...)
		UEdGraphPin* pin1 = guidToPinMap[connection.Key];
		UEdGraphPin* pin2 = guidToPinMap[connection.Value];
		//pin1->MakeLinkTo(pin2); //DONT use this because then it will trigger a change to the asset (and it will be marked as unsaved even though we just loaded it)
		pin1->LinkedTo.Add(pin2); //link manually instead
		pin2->LinkedTo.Add(pin1); //link manually instead 
	}
}


//the way this would be used is basically like compiling the encounter like code. This sets up the data that is actually used when the game runs 
// whenever saving or trying to test, make sure this is what is updating the encounter
void ParalogueEncounterEditorToolkit::BuildIngameEncounterFromGraph()
{
	if (workingEncounterAsset == nullptr || uiDialogueGraph == nullptr)
	{
		return;
	}

	//clear array in working asset
	workingEncounterAsset->Segments.Empty();

	//array of graph segment nodes (like literally the ones in the graph)
	TArray<UParalogueSegmentGraphNode*> graphSegmentNodes;
	uiDialogueGraph->GetNodesOfClass(graphSegmentNodes);


	//loop through each encounter segment in the graph
	for (int i = 0; i < graphSegmentNodes.Num(); i++)
	{
		UParalogueSegmentGraphNode* thisNode = graphSegmentNodes[i];

		//Start with the nodes with no inputs, and then recursively navigate their connections to save them
		UEdGraphPin* inputPin = thisNode->FindPin(TEXT("Input"), EEdGraphPinDirection::EGPD_Input); //todo: man this manual hard-coded string in the check is a bit wonky

		//for now, assume that if a node has inputs, its covered by the recursion. If there are no inputs, this is where the recursion should *start*
		if (!inputPin->HasAnyConnections())
		{
			workingEncounterAsset->startingSegment = CreateOrFindSegmentForGraphNode(thisNode);
			//workingEncounterAsset->nonPtrSegment = *(workingEncounterAsset->startingSegment);
		}

	}

	//clear the temporary data from graph nodes
	for (int i = 0; i < graphSegmentNodes.Num(); i++)
	{
		//UParalogueSegmentGraphNode* thisNode = graphSegmentNodes[i];

		graphSegmentNodes[i]->SetSegmentTempData(nullptr);

	}
}

UEncounterSegment* ParalogueEncounterEditorToolkit::CreateOrFindSegmentForGraphNode(UParalogueSegmentGraphNode* node)
{
	//Don't want duplicate segments, so just make sure there isn't already one that we can just grab instead
	UEncounterSegment* thisEncounterSegment = node->GetSegmentTempData();
	if (thisEncounterSegment != nullptr)
	{
		return thisEncounterSegment;
	}
	//===================================
	


	//init blank segment for the node, make sure to set the Encounter asset as the outer so that the segments aren't wiped away when the editor closes
	thisEncounterSegment = NewObject<UEncounterSegment>(workingEncounterAsset);
	//save pointer to segment in the asset (doing this first, before recursion call, so that the array does not basically become inverted, with the ending node first etc. Probably not a big deal but my brain has decided its Important idk) (if array is not used for gameplay, the array becoming inverted or not probably literally does not matter at all except for maybe debugging convenience)
	workingEncounterAsset->Segments.Add(thisEncounterSegment);


	int pinCount = node->Pins.Num();
	int thisOutPinIndex = 0; //start at -1 so that we can just simply increment, and the first index will start at 0
	// wait why not just move increment to end of if statement, so this can be zero like it normally would

	//clear the array first
	thisEncounterSegment->NpcLines.Empty();
	thisEncounterSegment->NpcFaceSelector.Empty();
	if (node->GetNodeInfo()->CharacterLines.IsEmpty())
	{
		//if there is no text to add, add placeholder text instead of leaving blank (prevents anything from breaking from trying to run an empty segment, and also tells the user rather than having this just silently fail)
		//thisEncounterSegment->NpcLinesWithFaces.Add(TPair<FString, int>(FString("[Dialogue segment not implemented]"), 0));
		thisEncounterSegment->NpcLines.Add(FString("[Dialogue segment not implemented]"));
		thisEncounterSegment->NpcFaceSelector.Add(0);
	}
	else
	{
		// parse the text (and face) info for the segment into the version that will actually be used when the game is runnning, including actually placing it into that object
		ParseSegmentText(node->GetNodeInfo()->CharacterLines, &thisEncounterSegment->NpcLines, &thisEncounterSegment->NpcFaceSelector);
	}

	for (int j = 0; j < pinCount; j++) //loop through each pin on the node
	{
		UEdGraphPin* thisPin = node->Pins[j];

		if (thisPin->Direction == EEdGraphPinDirection::EGPD_Output)
		{
			
			// a segment with no player options should (iirc) signal the end of the encounter, so why create a placeholder? Unless
			//thisEncounterSegment->PlayerOptionToNextSegment.Add(TPair<FText, UEncounterSegment*>()); //add a blank/default player option, which will be filled if there are any connections

			if (thisPin->HasAnyConnections()) //if its an output pin with a connection... Nesting the if's like this so that we can accurately skip pins with no connection (assuming we want to allow that...? idk doesnt seem like a big deal rn)
			{
				//TArray<UEdGraphPin*> links = thisPin->LinkedTo;
				UEdGraphPin* linkedPin = thisPin->LinkedTo[0]; //just the first index, because if these output pins are ever linked to more than one thing, something else is more broken than this would be
				UEdGraphNode* linkedNode = linkedPin->GetOwningNode(); //todo - work out having multiple outputs connected to one input (avoid creating more than one segment for it in that case, etc...)
				if (UParalogueSegmentGraphNode* npcResponseNode = Cast<UParalogueSegmentGraphNode>(linkedNode))  //if its a segment node, link up the player option to the response to that option
				{

					//PARSE HERE ? no, silly goose. why would we parse this encounter segment in the loop section reserved for setting up/dealing with the next recursion iteration

					//create the segment for the connected node (this is where the recursion comes in)
					UEncounterSegment* npcResponse = CreateOrFindSegmentForGraphNode(npcResponseNode);

					if (node->GetNodeInfo()->PlayerResponseOptions.IsEmpty())
					{
						UE_LOG(LogTemp, Warning, TEXT("Text for Node with no responses added: %s"), *npcResponse->NpcLines[0]);
					}

					//THEN, add that segment to the responses for this segment
					//thisEncounterSegment->PlayerOptionToNextSegment[thisOutPinIndex] = TPair<FText, UEncounterSegment*>(FText(), npcResponse);
					if (node->GetNodeInfo()->PlayerResponseOptions.IsValidIndex(thisOutPinIndex))
					{
						//thisEncounterSegment->PlayerOptionToNextSegment.Add(TPair<FText, UEncounterSegment*>(node->GetNodeInfo()->PlayerResponseOptions[thisOutPinIndex], npcResponse));
						thisEncounterSegment->PlayerOptions.Add(FText(node->GetNodeInfo()->PlayerResponseOptions[thisOutPinIndex]));
						thisEncounterSegment->NextSegmentSelector.Add(npcResponse);
					}
					else
					{
						UE_LOG(LogTemp, Warning, TEXT("error when trying to build encounter tree: Player response pins in segment data found to be null. No player responses added for this node? At least not under the hood (Dev note: consider automatically adding in this case)"));
						UE_LOG(LogTemp, Warning, TEXT("out pin idx tried: %d"), &thisOutPinIndex);
					}
				}
			}
			thisOutPinIndex++;

		}
	}
	return thisEncounterSegment;
}

void ParalogueEncounterEditorToolkit::ParseSegmentText(FText segmentText, TArray<TPair<FString, int>>* destinationArray)
{
	//first parse lines
	TArray<FString> textAndFaceData;
	FString lines = segmentText.ToString(); //docs say that this is potentially lossy for some languages, however it does not appear that will affect this use case?  || note: by doing this in editor instead of runtime, it actually would
	FString delimiter = L"|,";
	//TArray<FString> splitLines;// = [];
	lines.ParseIntoArray(textAndFaceData, *delimiter, false); //uuuuuh apparently this is exponential complexity so if the computer starts really dying keep this in mind

	//then separate the faces from the lines
	for (int i = 0; i < textAndFaceData.Num(); i++)
	{
		//split string
		FString faceNumberStr;
		FString npcLinesText;
		textAndFaceData[i].Split(L"|", &faceNumberStr, &npcLinesText); //supposed to be more efficient than ParseIntoArray

		//convert to int
		int faceNumber = FCString::Atoi(*faceNumberStr); //this function is apparently "unsafe; no way to indicate errors" https://unreal.gg-labs.com/wiki-archives/macros-and-data-types/string-conversions#fstring-to-integer

		//write to array
		destinationArray->Add(TPair<FString, int> (npcLinesText, faceNumber));
	}
}

void ParalogueEncounterEditorToolkit::ParseSegmentText(FText segmentText, TArray<FString>* dialogueTextDestination, TArray<int>* dialogueFacesDestination)
{
	//first split lines, leaving the face with it
	TArray<FString> textAndFaceData;
	FString lines = segmentText.ToString(); //docs say that this is potentially lossy for some languages, however it does not appear that will affect this use case?  || note: by doing this in editor instead of runtime, it actually would
	FString delimiter = L"|,";
	//TArray<FString> splitLines;// = [];
	lines.ParseIntoArray(textAndFaceData, *delimiter, false); //uuuuuh apparently this is exponential complexity so if the computer starts really dying keep this in mind

	//then separate the faces from the lines
	for (int i = 0; i < textAndFaceData.Num(); i++)
	{
		//split string
		FString faceNumberStr;
		FString npcLinesText;
		textAndFaceData[i].Split(L"|", &faceNumberStr, &npcLinesText); //supposed to be more efficient than ParseIntoArray

		//convert to int
		int faceNumber = FCString::Atoi(*faceNumberStr); //this function is apparently "unsafe; no way to indicate errors" https://unreal.gg-labs.com/wiki-archives/macros-and-data-types/string-conversions#fstring-to-integer

		//write to arrays
		//destinationArray->Add(TPair<FString, int>(npcLinesText, faceNumber));
		dialogueTextDestination->Add(npcLinesText);
		dialogueFacesDestination->Add(faceNumber);
	}
}





//float ParalogueEncounterEditorToolkit::GetMean() const
//{
//	return 1.0f;// ParalogueEncounter->Mean;
//}
//
//float ParalogueEncounterEditorToolkit::GetStandardDeviation() const
//{
//	return 2.0f;// ParalogueEncounter->StandardDeviation;
//}
//
//void ParalogueEncounterEditorToolkit::SetMean(float Mean)
//{
//	ParalogueEncounter->Modify();
//	//ParalogueEncounter->Mean = Mean;
//}
//
//void ParalogueEncounterEditorToolkit::SetStandardDeviation(float StandardDeviation)
//{
//	ParalogueEncounter->Modify();
//	//ParalogueEncounter->StandardDeviation = StandardDeviation;
//}