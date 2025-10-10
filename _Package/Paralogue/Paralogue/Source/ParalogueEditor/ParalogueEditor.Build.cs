// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ParalogueEditor : ModuleRules
{
	public ParalogueEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
				"Runtime/ParalogueEditor/Private",
            }
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
                "CoreUObject"
			}
			);


		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
				"ParalogueRuntime", //make <-THAT module a dependency of THIS one, so that this module can use the stuff defined there (like the custom asset type)
                "UnrealEd", // apparently this is needed for registering the asset type actions. i think Ed is short for Editor?
				"AssetTools",
                "PropertyEditor",
                "ToolMenus", // for using UToolMenu
				"GraphEditor", // for customizing pins? or for linking pins. vid guy said he would explain and then Didnt lol
				"Projects", //allows for custom icons through stylesets
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
