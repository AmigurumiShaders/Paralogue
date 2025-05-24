// Fill out your copyright notice in the Description page of Project Settings.


#include "ParalogueGameInstanceSubsystem.h"

DEFINE_LOG_CATEGORY(ParalogueGameInstanceSubsystem);

void UParalogueGameInstanceSubsystem::SetRouteVariable(FName variableName, int variableValue)
{
	if (routeVariables.Contains(variableName))
	{
		routeVariables[variableName] = variableValue;
	}
	else
	{
		routeVariables.Add(variableName, variableValue);
	}
}

int UParalogueGameInstanceSubsystem::GetRouteVariable(FName variableName)
{
	if (routeVariables.Contains(variableName))
	{
		return routeVariables[variableName];
	}
	else
	{
		UE_LOG(ParalogueGameInstanceSubsystem, Error, TEXT("\n Route Variable for '%s' not found"), *variableName.ToString());
		return 0;//todo: really should rework this to properly return more indication of an error, I just don't even know how much of this will be scrapped yet so not really a good use of my time right now
	}
}

bool UParalogueGameInstanceSubsystem::GetRouteFlag(FName flagName)
{
	if (routeFlags.Contains(flagName))
	{
		return routeFlags[flagName];
	}
	else
	{
		UE_LOG(ParalogueGameInstanceSubsystem, Warning, TEXT("\n Route flag '%s' not found, returning false as default value"), *flagName.ToString());
		return false;
	}
}

void UParalogueGameInstanceSubsystem::AddEncounterResponseData(FName encounterName, TArray<int> playerResponses)
{
	FPlayerResponseData dataStruct = FPlayerResponseData(); 
	dataStruct.data = playerResponses;
	encounterResponseLog.Add(encounterName, dataStruct);
}

TArray<int> UParalogueGameInstanceSubsystem::GetResponseDataByEncounter(FName encounterName)
{
	if (encounterResponseLog.Contains(encounterName))
	{
		return encounterResponseLog[encounterName].data;
	}
	else
	{
		UE_LOG(ParalogueGameInstanceSubsystem, Error, TEXT("\n Encounter named '%s' not found"), *encounterName.ToString());
		return TArray<int>();//todo: really should rework this to properly return more indication of an error, I just don't even know how much of this will be scrapped yet so not really a good use of my time right now
	}
}
