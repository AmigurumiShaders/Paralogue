// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ParalogueGameInstanceSubsystem.generated.h"


DECLARE_LOG_CATEGORY_EXTERN(ParalogueGameInstanceSubsystem, Log, All);

/// <summary>
/// "The type 'TArray<int32>' can not be used as a value in a TMap" so...this is the simplest workaround.
/// </summary>
USTRUCT()
struct FPlayerResponseData {
	GENERATED_BODY()
	TArray<int> data;
};

/**
 * 
 */
UCLASS()
class PARALOGUE_API UParalogueGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetRouteVariable(FName variableName, int variableValue);
	UFUNCTION(BlueprintCallable)
	int GetRouteVariable(FName variableName);
	UFUNCTION(BlueprintCallable)
	void SetRouteFlag(FName flagName, bool flagValue) { routeFlags.FindOrAdd(flagName, flagValue); }
	/// <summary>
	/// Get the true or false value for the given route flag
	/// </summary>
	/// <returns>The boolean value of the flag if it is found, or false if the flag does not exist</returns>
	UFUNCTION(BlueprintCallable)
	bool GetRouteFlag(FName flagName);

	//not making this bpcallable because we're doing this for the user and I'm pretty sure anything they could possibly gain by adding to this manually could just be accomplished by adding a Route Variable instead
	void AddEncounterResponseData(FName encounterName, TArray<int> playerResponses);// { encounterResponseLog.Add(encounterName, FPlayerResponseData().data = playerResponses); }
	/*/// <summary>
	/// All dialogue responses made by the player are recorded by the plugin within UParalogueGameInstanceSubsystem. Use this function to get that data
	/// </summary>
	/// <returns>A TMap where the keys are the encounter name, and the value is an array of each response given by the player recorded as indicies to the response options array</returns>
	UFUNCTION(BlueprintCallable)
	TMap<FName, TArray<int>> GetAllEncounterResponseData() { return encounterResponseLog; }*/ //commenting out for now bc tmap cant have tarray
	/// <summary>
	/// All dialogue responses made by the player are recorded by the plugin within UParalogueGameInstanceSubsystem. Use this function to get that data
	/// </summary>
	/// <returns>Array of response options for given encounter. Returns empty array if encounter does not exist</returns>
	UFUNCTION(BlueprintCallable)
	TArray<int> GetResponseDataByEncounter(FName encounterName);
	
private:
	TMap<FName, int> routeVariables;
	TMap<FName, FPlayerResponseData> encounterResponseLog;
	TMap<FName, bool> routeFlags; //todo:Bit flags would be more efficient, but now is not the time to learn how to do this properly

};
