// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paralogue/Public/ParalogueGameInstanceSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParalogueGameInstanceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
PARALOGUE_API UClass* Z_Construct_UClass_UParalogueGameInstanceSubsystem();
PARALOGUE_API UClass* Z_Construct_UClass_UParalogueGameInstanceSubsystem_NoRegister();
PARALOGUE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerResponseData();
UPackage* Z_Construct_UPackage__Script_Paralogue();
// End Cross Module References

// Begin ScriptStruct FPlayerResponseData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerResponseData;
class UScriptStruct* FPlayerResponseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerResponseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerResponseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerResponseData, (UObject*)Z_Construct_UPackage__Script_Paralogue(), TEXT("PlayerResponseData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerResponseData.OuterSingleton;
}
template<> PARALOGUE_API UScriptStruct* StaticStruct<FPlayerResponseData>()
{
	return FPlayerResponseData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerResponseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \"The type 'TArray<int32>' can not be used as a value in a TMap\" so...this is the simplest workaround.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/ParalogueGameInstanceSubsystem.h" },
		{ "ToolTip", "<summary>\n\"The type 'TArray<int32>' can not be used as a value in a TMap\" so...this is the simplest workaround.\n</summary>" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerResponseData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerResponseData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Paralogue,
	nullptr,
	&NewStructOps,
	"PlayerResponseData",
	nullptr,
	0,
	sizeof(FPlayerResponseData),
	alignof(FPlayerResponseData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerResponseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerResponseData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerResponseData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerResponseData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerResponseData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerResponseData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerResponseData.InnerSingleton;
}
// End ScriptStruct FPlayerResponseData

// Begin Class UParalogueGameInstanceSubsystem Function GetResponseDataByEncounter
struct Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics
{
	struct ParalogueGameInstanceSubsystem_eventGetResponseDataByEncounter_Parms
	{
		FName encounterName;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Paralogue" },
		{ "Comment", "/*/// <summary>\n\x09/// All dialogue responses made by the player are recorded by the plugin within UParalogueGameInstanceSubsystem. Use this function to get that data\n\x09/// </summary>\n\x09/// <returns>A TMap where the keys are the encounter name, and the value is an array of each response given by the player recorded as indicies to the response options array</returns>\n\x09UFUNCTION(BlueprintCallable)\n\x09TMap<FName, TArray<int>> GetAllEncounterResponseData() { return encounterResponseLog; }*///commenting out for now bc tmap cant have tarray\n/// <summary>\n/// All dialogue responses made by the player are recorded by the plugin within UParalogueGameInstanceSubsystem. Use this function to get that data\n/// </summary>\n/// <returns>Array of response options for given encounter. Returns empty array if encounter does not exist</returns>\n" },
		{ "ModuleRelativePath", "Public/ParalogueGameInstanceSubsystem.h" },
		{ "ToolTip", "/// <summary>\n       /// All dialogue responses made by the player are recorded by the plugin within UParalogueGameInstanceSubsystem. Use this function to get that data\n       /// </summary>\n       /// <returns>A TMap where the keys are the encounter name, and the value is an array of each response given by the player recorded as indicies to the response options array</returns>\n       UFUNCTION(BlueprintCallable)\n       TMap<FName, TArray<int>> GetAllEncounterResponseData() { return encounterResponseLog; }//commenting out for now bc tmap cant have tarray\n/// <summary>\n/// All dialogue responses made by the player are recorded by the plugin within UParalogueGameInstanceSubsystem. Use this function to get that data\n/// </summary>\n/// <returns>Array of response options for given encounter. Returns empty array if encounter does not exist</returns>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_encounterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::NewProp_encounterName = { "encounterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueGameInstanceSubsystem_eventGetResponseDataByEncounter_Parms, encounterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueGameInstanceSubsystem_eventGetResponseDataByEncounter_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::NewProp_encounterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParalogueGameInstanceSubsystem, nullptr, "GetResponseDataByEncounter", nullptr, nullptr, Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::ParalogueGameInstanceSubsystem_eventGetResponseDataByEncounter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::ParalogueGameInstanceSubsystem_eventGetResponseDataByEncounter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParalogueGameInstanceSubsystem::execGetResponseDataByEncounter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_encounterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetResponseDataByEncounter(Z_Param_encounterName);
	P_NATIVE_END;
}
// End Class UParalogueGameInstanceSubsystem Function GetResponseDataByEncounter

// Begin Class UParalogueGameInstanceSubsystem Function GetRouteFlag
struct Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics
{
	struct ParalogueGameInstanceSubsystem_eventGetRouteFlag_Parms
	{
		FName flagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Paralogue" },
		{ "Comment", "/// <summary>\n/// Get the true or false value for the given route flag\n/// </summary>\n/// <returns>The boolean value of the flag if it is found, or false if the flag does not exist</returns>\n" },
		{ "ModuleRelativePath", "Public/ParalogueGameInstanceSubsystem.h" },
		{ "ToolTip", "<summary>\nGet the true or false value for the given route flag\n</summary>\n<returns>The boolean value of the flag if it is found, or false if the flag does not exist</returns>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_flagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::NewProp_flagName = { "flagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueGameInstanceSubsystem_eventGetRouteFlag_Parms, flagName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParalogueGameInstanceSubsystem_eventGetRouteFlag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParalogueGameInstanceSubsystem_eventGetRouteFlag_Parms), &Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::NewProp_flagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParalogueGameInstanceSubsystem, nullptr, "GetRouteFlag", nullptr, nullptr, Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::ParalogueGameInstanceSubsystem_eventGetRouteFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::ParalogueGameInstanceSubsystem_eventGetRouteFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParalogueGameInstanceSubsystem::execGetRouteFlag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_flagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRouteFlag(Z_Param_flagName);
	P_NATIVE_END;
}
// End Class UParalogueGameInstanceSubsystem Function GetRouteFlag

// Begin Class UParalogueGameInstanceSubsystem Function GetRouteVariable
struct Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics
{
	struct ParalogueGameInstanceSubsystem_eventGetRouteVariable_Parms
	{
		FName variableName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Paralogue" },
		{ "ModuleRelativePath", "Public/ParalogueGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_variableName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueGameInstanceSubsystem_eventGetRouteVariable_Parms, variableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueGameInstanceSubsystem_eventGetRouteVariable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::NewProp_variableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParalogueGameInstanceSubsystem, nullptr, "GetRouteVariable", nullptr, nullptr, Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::ParalogueGameInstanceSubsystem_eventGetRouteVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::ParalogueGameInstanceSubsystem_eventGetRouteVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParalogueGameInstanceSubsystem::execGetRouteVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_variableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRouteVariable(Z_Param_variableName);
	P_NATIVE_END;
}
// End Class UParalogueGameInstanceSubsystem Function GetRouteVariable

// Begin Class UParalogueGameInstanceSubsystem Function SetRouteFlag
struct Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics
{
	struct ParalogueGameInstanceSubsystem_eventSetRouteFlag_Parms
	{
		FName flagName;
		bool flagValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Paralogue" },
		{ "ModuleRelativePath", "Public/ParalogueGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_flagName;
	static void NewProp_flagValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_flagValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::NewProp_flagName = { "flagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueGameInstanceSubsystem_eventSetRouteFlag_Parms, flagName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::NewProp_flagValue_SetBit(void* Obj)
{
	((ParalogueGameInstanceSubsystem_eventSetRouteFlag_Parms*)Obj)->flagValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::NewProp_flagValue = { "flagValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParalogueGameInstanceSubsystem_eventSetRouteFlag_Parms), &Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::NewProp_flagValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::NewProp_flagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::NewProp_flagValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParalogueGameInstanceSubsystem, nullptr, "SetRouteFlag", nullptr, nullptr, Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::ParalogueGameInstanceSubsystem_eventSetRouteFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::ParalogueGameInstanceSubsystem_eventSetRouteFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParalogueGameInstanceSubsystem::execSetRouteFlag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_flagName);
	P_GET_UBOOL(Z_Param_flagValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRouteFlag(Z_Param_flagName,Z_Param_flagValue);
	P_NATIVE_END;
}
// End Class UParalogueGameInstanceSubsystem Function SetRouteFlag

// Begin Class UParalogueGameInstanceSubsystem Function SetRouteVariable
struct Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics
{
	struct ParalogueGameInstanceSubsystem_eventSetRouteVariable_Parms
	{
		FName variableName;
		int32 variableValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Paralogue" },
		{ "ModuleRelativePath", "Public/ParalogueGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_variableName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_variableValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueGameInstanceSubsystem_eventSetRouteVariable_Parms, variableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::NewProp_variableValue = { "variableValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueGameInstanceSubsystem_eventSetRouteVariable_Parms, variableValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::NewProp_variableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::NewProp_variableValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParalogueGameInstanceSubsystem, nullptr, "SetRouteVariable", nullptr, nullptr, Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::ParalogueGameInstanceSubsystem_eventSetRouteVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::ParalogueGameInstanceSubsystem_eventSetRouteVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParalogueGameInstanceSubsystem::execSetRouteVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_variableName);
	P_GET_PROPERTY(FIntProperty,Z_Param_variableValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRouteVariable(Z_Param_variableName,Z_Param_variableValue);
	P_NATIVE_END;
}
// End Class UParalogueGameInstanceSubsystem Function SetRouteVariable

// Begin Class UParalogueGameInstanceSubsystem
void UParalogueGameInstanceSubsystem::StaticRegisterNativesUParalogueGameInstanceSubsystem()
{
	UClass* Class = UParalogueGameInstanceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetResponseDataByEncounter", &UParalogueGameInstanceSubsystem::execGetResponseDataByEncounter },
		{ "GetRouteFlag", &UParalogueGameInstanceSubsystem::execGetRouteFlag },
		{ "GetRouteVariable", &UParalogueGameInstanceSubsystem::execGetRouteVariable },
		{ "SetRouteFlag", &UParalogueGameInstanceSubsystem::execSetRouteFlag },
		{ "SetRouteVariable", &UParalogueGameInstanceSubsystem::execSetRouteVariable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParalogueGameInstanceSubsystem);
UClass* Z_Construct_UClass_UParalogueGameInstanceSubsystem_NoRegister()
{
	return UParalogueGameInstanceSubsystem::StaticClass();
}
struct Z_Construct_UClass_UParalogueGameInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ParalogueGameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Public/ParalogueGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetResponseDataByEncounter, "GetResponseDataByEncounter" }, // 87757864
		{ &Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteFlag, "GetRouteFlag" }, // 23578016
		{ &Z_Construct_UFunction_UParalogueGameInstanceSubsystem_GetRouteVariable, "GetRouteVariable" }, // 2517995833
		{ &Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteFlag, "SetRouteFlag" }, // 3262482579
		{ &Z_Construct_UFunction_UParalogueGameInstanceSubsystem_SetRouteVariable, "SetRouteVariable" }, // 2747429257
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParalogueGameInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParalogueGameInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Paralogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParalogueGameInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParalogueGameInstanceSubsystem_Statics::ClassParams = {
	&UParalogueGameInstanceSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParalogueGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UParalogueGameInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParalogueGameInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_UParalogueGameInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParalogueGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UParalogueGameInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParalogueGameInstanceSubsystem.OuterSingleton;
}
template<> PARALOGUE_API UClass* StaticClass<UParalogueGameInstanceSubsystem>()
{
	return UParalogueGameInstanceSubsystem::StaticClass();
}
UParalogueGameInstanceSubsystem::UParalogueGameInstanceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParalogueGameInstanceSubsystem);
UParalogueGameInstanceSubsystem::~UParalogueGameInstanceSubsystem() {}
// End Class UParalogueGameInstanceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_Paralogue_Public_ParalogueGameInstanceSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerResponseData::StaticStruct, Z_Construct_UScriptStruct_FPlayerResponseData_Statics::NewStructOps, TEXT("PlayerResponseData"), &Z_Registration_Info_UScriptStruct_PlayerResponseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerResponseData), 2392077964U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParalogueGameInstanceSubsystem, UParalogueGameInstanceSubsystem::StaticClass, TEXT("UParalogueGameInstanceSubsystem"), &Z_Registration_Info_UClass_UParalogueGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParalogueGameInstanceSubsystem), 2144543771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_Paralogue_Public_ParalogueGameInstanceSubsystem_h_2216916534(TEXT("/Script/Paralogue"),
	Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_Paralogue_Public_ParalogueGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_Paralogue_Public_ParalogueGameInstanceSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_Paralogue_Public_ParalogueGameInstanceSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_Paralogue_Public_ParalogueGameInstanceSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
