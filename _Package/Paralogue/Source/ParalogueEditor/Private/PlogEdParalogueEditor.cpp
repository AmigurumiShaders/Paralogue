// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlogEdParalogueEditor.h"

#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FPlogEdParalogueEditorModule"

void FPlogEdParalogueEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	ParalogueEncounterAssetTypeActions = MakeShared<FPlogEdEncounterAssetTypeActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(ParalogueEncounterAssetTypeActions.ToSharedRef());

	//set up slate styleset
	styleSet = MakeShareable(new FSlateStyleSet(TEXT("ParalogueEditorStyle"))); //todo: make this text a variable so it can be referenced by other files/classes easily (like the custom graph nodes). prbably just make a headwer file just for that
	TSharedPtr<IPlugin> plugin = IPluginManager::Get().FindPlugin("Paralogue"); //this plugin
	FString contentDir = plugin->GetContentDir(); //want a relative path to the content folder of this plugin, where the icons will be kept
	styleSet->SetContentRoot(contentDir);

	//const TCHAR pngExt = TEXT(".png"); //silly me thought maybe let's make this a variable but for some reason its just not that simple
	FSlateImageBrush* thumbnailBrush = new FSlateImageBrush(styleSet->RootToContentDir(TEXT("paralogueEncounterAssetIcon"), TEXT(".png")), FVector2D(256.0, 256.0));
	FSlateImageBrush* iconBrush = new FSlateImageBrush(styleSet->RootToContentDir(TEXT("paralogueEncounterAssetIcon"), TEXT(".png")), FVector2D(256.0, 256.0));
	//FSlateImageBrush* nodeAddPinIcon = new FSlateImageBrush(styleSet->RootToContentDir(TEXT("amgryFace"), TEXT(".png")), FVector2D(128.0, 128.0));
	//FSlateImageBrush* nodeDeletePinIcon = new FSlateImageBrush(styleSet->RootToContentDir(TEXT("emojitiredsmallest"), TEXT(".png")), FVector2D(128.0, 128.0));
	//FSlateImageBrush* nodeDeleteNodeIcon = new FSlateImageBrush(styleSet->RootToContentDir(TEXT("emojifearsmall"), TEXT(".png")), FVector2D(128.0, 128.0));
	styleSet->Set(TEXT("ClassThumbnail.ParalogueEncounter"), thumbnailBrush); // these strings are being referenced by unreal, we dont choose what they are
	styleSet->Set(TEXT("ClassIcon.ParalogueEncounter"), iconBrush);
	//styleSet->Set(TEXT("Paralogue.NodeAddPinIcon"), nodeAddPinIcon); // this and the below strings are referenced by this plugin, so we do choose them ourselves
	//styleSet->Set(TEXT("Paralogue.NodeDeletePinIcon"), nodeDeletePinIcon);
	//styleSet->Set(TEXT("Paralogue.NodeDeleteNodeIcon"), nodeDeleteNodeIcon);

	FSlateStyleRegistry::RegisterSlateStyle(*styleSet);

}

void FPlogEdParalogueEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;

	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(ParalogueEncounterAssetTypeActions.ToSharedRef());

	FSlateStyleRegistry::UnRegisterSlateStyle(*styleSet);
}



#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPlogEdParalogueEditorModule, ParalogueEditor)