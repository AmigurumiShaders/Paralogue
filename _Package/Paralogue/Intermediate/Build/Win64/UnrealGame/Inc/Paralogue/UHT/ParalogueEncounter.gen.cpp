// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paralogue/Public/ParalogueEncounter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParalogueEncounter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PARALOGUE_API UClass* Z_Construct_UClass_UEncounterSegment();
PARALOGUE_API UClass* Z_Construct_UClass_UEncounterSegment_NoRegister();
PARALOGUE_API UClass* Z_Construct_UClass_UParalogueEncounter();
PARALOGUE_API UClass* Z_Construct_UClass_UParalogueEncounter_NoRegister();
PARALOGUE_API UClass* Z_Construct_UClass_UPlogRtEditorSavedGraphData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paralogue();
// End Cross Module References

// Begin Class UEncounterSegment
void UEncounterSegment::StaticRegisterNativesUEncounterSegment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEncounterSegment);
UClass* Z_Construct_UClass_UEncounterSegment_NoRegister()
{
	return UEncounterSegment::StaticClass();
}
struct Z_Construct_UClass_UEncounterSegment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// NOT the version exposed to the user to edit, this is the parsed/initialized version that is used to traverse the dialgue tree at runtime\n/// If IsBranch == true, the route traversal should ignore all data unrelated to branching\n/// </summary>\n" },
		{ "IncludePath", "ParalogueEncounter.h" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "<summary>\nNOT the version exposed to the user to edit, this is the parsed/initialized version that is used to traverse the dialgue tree at runtime\nIf IsBranch == true, the route traversal should ignore all data unrelated to branching\n</summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NpcLines_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/// ----- Normal Segment Data -----\n//Lines of text that the NPC says, each array element is one page\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "----- Normal Segment Data -----\nLines of text that the NPC says, each array element is one page" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NpcFaceSelector_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Selector for the next dialogue segment, match idx with NpcLines idx\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "Selector for the next dialogue segment, match idx with NpcLines idx" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOptions_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextSegmentSelector_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Selector for the next dialogue segment, match idx with PlayerOption idx\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "Selector for the next dialogue segment, match idx with PlayerOption idx" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagToSet_MetaData[] = {
		{ "Category", "Route Flags" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagValue_MetaData[] = {
		{ "Category", "Route Flags" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsBranch_MetaData[] = {
		{ "Category", "Branch Data" },
		{ "Comment", "///if this is true, all other above fields are ignored (if they even have data at all)\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "if this is true, all other above fields are ignored (if they even have data at all)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagToCheck_MetaData[] = {
		{ "Category", "Branch Data" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextSegmentForTrue_MetaData[] = {
		{ "Category", "Branch Data" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextSegmentForFalse_MetaData[] = {
		{ "Category", "Branch Data" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NpcLines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NpcLines;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NpcFaceSelector_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NpcFaceSelector;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PlayerOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextSegmentSelector_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NextSegmentSelector;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FlagToSet;
	static void NewProp_FlagValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FlagValue;
	static void NewProp_IsBranch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBranch;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FlagToCheck;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextSegmentForTrue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextSegmentForFalse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEncounterSegment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NpcLines_Inner = { "NpcLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NpcLines = { "NpcLines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEncounterSegment, NpcLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NpcLines_MetaData), NewProp_NpcLines_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NpcFaceSelector_Inner = { "NpcFaceSelector", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NpcFaceSelector = { "NpcFaceSelector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEncounterSegment, NpcFaceSelector), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NpcFaceSelector_MetaData), NewProp_NpcFaceSelector_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_PlayerOptions_Inner = { "PlayerOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_PlayerOptions = { "PlayerOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEncounterSegment, PlayerOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerOptions_MetaData), NewProp_PlayerOptions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NextSegmentSelector_Inner = { "NextSegmentSelector", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEncounterSegment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NextSegmentSelector = { "NextSegmentSelector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEncounterSegment, NextSegmentSelector), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextSegmentSelector_MetaData), NewProp_NextSegmentSelector_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_FlagToSet = { "FlagToSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEncounterSegment, FlagToSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagToSet_MetaData), NewProp_FlagToSet_MetaData) };
void Z_Construct_UClass_UEncounterSegment_Statics::NewProp_FlagValue_SetBit(void* Obj)
{
	((UEncounterSegment*)Obj)->FlagValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_FlagValue = { "FlagValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEncounterSegment), &Z_Construct_UClass_UEncounterSegment_Statics::NewProp_FlagValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagValue_MetaData), NewProp_FlagValue_MetaData) };
void Z_Construct_UClass_UEncounterSegment_Statics::NewProp_IsBranch_SetBit(void* Obj)
{
	((UEncounterSegment*)Obj)->IsBranch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_IsBranch = { "IsBranch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEncounterSegment), &Z_Construct_UClass_UEncounterSegment_Statics::NewProp_IsBranch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsBranch_MetaData), NewProp_IsBranch_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_FlagToCheck = { "FlagToCheck", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEncounterSegment, FlagToCheck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagToCheck_MetaData), NewProp_FlagToCheck_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NextSegmentForTrue = { "NextSegmentForTrue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEncounterSegment, NextSegmentForTrue), Z_Construct_UClass_UEncounterSegment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextSegmentForTrue_MetaData), NewProp_NextSegmentForTrue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NextSegmentForFalse = { "NextSegmentForFalse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEncounterSegment, NextSegmentForFalse), Z_Construct_UClass_UEncounterSegment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextSegmentForFalse_MetaData), NewProp_NextSegmentForFalse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEncounterSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NpcLines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NpcLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NpcFaceSelector_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NpcFaceSelector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_PlayerOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_PlayerOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NextSegmentSelector_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NextSegmentSelector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_FlagToSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_FlagValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_IsBranch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_FlagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NextSegmentForTrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncounterSegment_Statics::NewProp_NextSegmentForFalse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEncounterSegment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEncounterSegment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Paralogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEncounterSegment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEncounterSegment_Statics::ClassParams = {
	&UEncounterSegment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEncounterSegment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEncounterSegment_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEncounterSegment_Statics::Class_MetaDataParams), Z_Construct_UClass_UEncounterSegment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEncounterSegment()
{
	if (!Z_Registration_Info_UClass_UEncounterSegment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEncounterSegment.OuterSingleton, Z_Construct_UClass_UEncounterSegment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEncounterSegment.OuterSingleton;
}
template<> PARALOGUE_API UClass* StaticClass<UEncounterSegment>()
{
	return UEncounterSegment::StaticClass();
}
UEncounterSegment::UEncounterSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEncounterSegment);
UEncounterSegment::~UEncounterSegment() {}
// End Class UEncounterSegment

// Begin Class UParalogueEncounter Function GetCurrentNpcFaceIdx
struct Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics
{
	struct ParalogueEncounter_eventGetCurrentNpcFaceIdx_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AAAAAAAAA" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueEncounter_eventGetCurrentNpcFaceIdx_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParalogueEncounter, nullptr, "GetCurrentNpcFaceIdx", nullptr, nullptr, Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics::ParalogueEncounter_eventGetCurrentNpcFaceIdx_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics::ParalogueEncounter_eventGetCurrentNpcFaceIdx_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParalogueEncounter::execGetCurrentNpcFaceIdx)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentNpcFaceIdx();
	P_NATIVE_END;
}
// End Class UParalogueEncounter Function GetCurrentNpcFaceIdx

// Begin Class UParalogueEncounter Function GetCurrentNpcText
struct Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics
{
	struct ParalogueEncounter_eventGetCurrentNpcText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AAAAAAAAA" },
		{ "Comment", "//not necessary?\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "not necessary?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueEncounter_eventGetCurrentNpcText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParalogueEncounter, nullptr, "GetCurrentNpcText", nullptr, nullptr, Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics::ParalogueEncounter_eventGetCurrentNpcText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics::ParalogueEncounter_eventGetCurrentNpcText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParalogueEncounter::execGetCurrentNpcText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetCurrentNpcText();
	P_NATIVE_END;
}
// End Class UParalogueEncounter Function GetCurrentNpcText

// Begin Class UParalogueEncounter Function GetPlayerResponseLog
struct Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics
{
	struct ParalogueEncounter_eventGetPlayerResponseLog_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AAAAAAAAA" },
		{ "Comment", "//need world context bc thats what GetGameInstance needs, and passing from BPs is the least gross and least time-consuming way I can think of\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "need world context bc thats what GetGameInstance needs, and passing from BPs is the least gross and least time-consuming way I can think of" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueEncounter_eventGetPlayerResponseLog_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParalogueEncounter, nullptr, "GetPlayerResponseLog", nullptr, nullptr, Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::ParalogueEncounter_eventGetPlayerResponseLog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::ParalogueEncounter_eventGetPlayerResponseLog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParalogueEncounter::execGetPlayerResponseLog)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetPlayerResponseLog();
	P_NATIVE_END;
}
// End Class UParalogueEncounter Function GetPlayerResponseLog

// Begin Class UParalogueEncounter Function PageForward
struct Z_Construct_UFunction_UParalogueEncounter_PageForward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AAAAAAAAA" },
		{ "Comment", "//advances the current dialogue display by one page\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "advances the current dialogue display by one page" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParalogueEncounter_PageForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParalogueEncounter, nullptr, "PageForward", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_PageForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParalogueEncounter_PageForward_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UParalogueEncounter_PageForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParalogueEncounter_PageForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParalogueEncounter::execPageForward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PageForward();
	P_NATIVE_END;
}
// End Class UParalogueEncounter Function PageForward

// Begin Class UParalogueEncounter Function ProcessPlayerResponse
struct Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics
{
	struct ParalogueEncounter_eventProcessPlayerResponse_Parms
	{
		int32 playerSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AAAAAAAAA" },
		{ "Comment", "//Input the index corresponding to the response the player selected. This function will select the next segment based on that index (or exit the dialogue)\n//Enter -1 to exit encounter\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "Input the index corresponding to the response the player selected. This function will select the next segment based on that index (or exit the dialogue)\nEnter -1 to exit encounter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_playerSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics::NewProp_playerSelected = { "playerSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueEncounter_eventProcessPlayerResponse_Parms, playerSelected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics::NewProp_playerSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParalogueEncounter, nullptr, "ProcessPlayerResponse", nullptr, nullptr, Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics::ParalogueEncounter_eventProcessPlayerResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics::ParalogueEncounter_eventProcessPlayerResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParalogueEncounter::execProcessPlayerResponse)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_playerSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessPlayerResponse(Z_Param_playerSelected);
	P_NATIVE_END;
}
// End Class UParalogueEncounter Function ProcessPlayerResponse

// Begin Class UParalogueEncounter Function SetEncounterToStart
struct Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics
{
	struct ParalogueEncounter_eventSetEncounterToStart_Parms
	{
		AActor* owningActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AAAAAAAAA" },
		{ "Comment", "//Sets up the encounter to the starting conditions, including setting the current line to the first line of dialogue\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "Sets up the encounter to the starting conditions, including setting the current line to the first line of dialogue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics::NewProp_owningActor = { "owningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParalogueEncounter_eventSetEncounterToStart_Parms, owningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics::NewProp_owningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParalogueEncounter, nullptr, "SetEncounterToStart", nullptr, nullptr, Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics::ParalogueEncounter_eventSetEncounterToStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics::ParalogueEncounter_eventSetEncounterToStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParalogueEncounter::execSetEncounterToStart)
{
	P_GET_OBJECT(AActor,Z_Param_owningActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEncounterToStart(Z_Param_owningActor);
	P_NATIVE_END;
}
// End Class UParalogueEncounter Function SetEncounterToStart

// Begin Class UParalogueEncounter
void UParalogueEncounter::StaticRegisterNativesUParalogueEncounter()
{
	UClass* Class = UParalogueEncounter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentNpcFaceIdx", &UParalogueEncounter::execGetCurrentNpcFaceIdx },
		{ "GetCurrentNpcText", &UParalogueEncounter::execGetCurrentNpcText },
		{ "GetPlayerResponseLog", &UParalogueEncounter::execGetPlayerResponseLog },
		{ "PageForward", &UParalogueEncounter::execPageForward },
		{ "ProcessPlayerResponse", &UParalogueEncounter::execProcessPlayerResponse },
		{ "SetEncounterToStart", &UParalogueEncounter::execSetEncounterToStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParalogueEncounter);
UClass* Z_Construct_UClass_UParalogueEncounter_NoRegister()
{
	return UParalogueEncounter::StaticClass();
}
struct Z_Construct_UClass_UParalogueEncounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//class UParalogueEncounterEdGraphData; //forward delcaration, because we need to be able to use UEncounterSegment in UNodeEncounterSegmentData, but without creating a circular dependency\n" },
		{ "IncludePath", "ParalogueEncounter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "class UParalogueEncounterEdGraphData; forward delcaration, because we need to be able to use UEncounterSegment in UNodeEncounterSegmentData, but without creating a circular dependency" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_graphData_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Meta" },
		{ "Comment", "/*Detailed description of this encounter, such as for the situation it is intended for. Like a code comment*/" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "Detailed description of this encounter, such as for the situation it is intended for. Like a code comment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "//[todo: probably should use props rather than public variables for that array]\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "[todo: probably should use props rather than public variables for that array]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startingSegment_MetaData[] = {
		{ "Category", "AAAAAAAAA" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayedPlayerOptions_MetaData[] = {
		{ "Category", "AAAAAAAAA" },
		{ "Comment", "//Options within the current encounter that the player has to respond to the npc\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "Options within the current encounter that the player has to respond to the npc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AwaitingPlayerResponse_MetaData[] = {
		{ "Category", "AAAAAAAAA" },
		{ "Comment", "//Set to true when there are no dialogue pages left, and there are dialogue options available in the segment\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "Set to true when there are no dialogue pages left, and there are dialogue options available in the segment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachedEncounterEnd_MetaData[] = {
		{ "Category", "AAAAAAAAA" },
		{ "Comment", "//Set to true when the encounter reaches the end of the available dialogue pages with no responses (or otherwise other branches) available in the segment\n" },
		{ "ModuleRelativePath", "Public/ParalogueEncounter.h" },
		{ "ToolTip", "Set to true when the encounter reaches the end of the available dialogue pages with no responses (or otherwise other branches) available in the segment" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_graphData;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Segments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_startingSegment;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayedPlayerOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayedPlayerOptions;
	static void NewProp_AwaitingPlayerResponse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AwaitingPlayerResponse;
	static void NewProp_ReachedEncounterEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReachedEncounterEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcFaceIdx, "GetCurrentNpcFaceIdx" }, // 2571374058
		{ &Z_Construct_UFunction_UParalogueEncounter_GetCurrentNpcText, "GetCurrentNpcText" }, // 1317523778
		{ &Z_Construct_UFunction_UParalogueEncounter_GetPlayerResponseLog, "GetPlayerResponseLog" }, // 1208811056
		{ &Z_Construct_UFunction_UParalogueEncounter_PageForward, "PageForward" }, // 3068615945
		{ &Z_Construct_UFunction_UParalogueEncounter_ProcessPlayerResponse, "ProcessPlayerResponse" }, // 2311463667
		{ &Z_Construct_UFunction_UParalogueEncounter_SetEncounterToStart, "SetEncounterToStart" }, // 4292187956
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParalogueEncounter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_graphData = { "graphData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParalogueEncounter, graphData), Z_Construct_UClass_UPlogRtEditorSavedGraphData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_graphData_MetaData), NewProp_graphData_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParalogueEncounter, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEncounterSegment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParalogueEncounter, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_startingSegment = { "startingSegment", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParalogueEncounter, startingSegment), Z_Construct_UClass_UEncounterSegment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startingSegment_MetaData), NewProp_startingSegment_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_DisplayedPlayerOptions_Inner = { "DisplayedPlayerOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_DisplayedPlayerOptions = { "DisplayedPlayerOptions", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParalogueEncounter, DisplayedPlayerOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayedPlayerOptions_MetaData), NewProp_DisplayedPlayerOptions_MetaData) };
void Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_AwaitingPlayerResponse_SetBit(void* Obj)
{
	((UParalogueEncounter*)Obj)->AwaitingPlayerResponse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_AwaitingPlayerResponse = { "AwaitingPlayerResponse", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParalogueEncounter), &Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_AwaitingPlayerResponse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AwaitingPlayerResponse_MetaData), NewProp_AwaitingPlayerResponse_MetaData) };
void Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_ReachedEncounterEnd_SetBit(void* Obj)
{
	((UParalogueEncounter*)Obj)->ReachedEncounterEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_ReachedEncounterEnd = { "ReachedEncounterEnd", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParalogueEncounter), &Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_ReachedEncounterEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachedEncounterEnd_MetaData), NewProp_ReachedEncounterEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParalogueEncounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_graphData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_Segments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_Segments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_startingSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_DisplayedPlayerOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_DisplayedPlayerOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_AwaitingPlayerResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParalogueEncounter_Statics::NewProp_ReachedEncounterEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParalogueEncounter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParalogueEncounter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Paralogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParalogueEncounter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParalogueEncounter_Statics::ClassParams = {
	&UParalogueEncounter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UParalogueEncounter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UParalogueEncounter_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParalogueEncounter_Statics::Class_MetaDataParams), Z_Construct_UClass_UParalogueEncounter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParalogueEncounter()
{
	if (!Z_Registration_Info_UClass_UParalogueEncounter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParalogueEncounter.OuterSingleton, Z_Construct_UClass_UParalogueEncounter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParalogueEncounter.OuterSingleton;
}
template<> PARALOGUE_API UClass* StaticClass<UParalogueEncounter>()
{
	return UParalogueEncounter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParalogueEncounter);
UParalogueEncounter::~UParalogueEncounter() {}
// End Class UParalogueEncounter

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_Paralogue_Public_ParalogueEncounter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEncounterSegment, UEncounterSegment::StaticClass, TEXT("UEncounterSegment"), &Z_Registration_Info_UClass_UEncounterSegment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEncounterSegment), 3471990350U) },
		{ Z_Construct_UClass_UParalogueEncounter, UParalogueEncounter::StaticClass, TEXT("UParalogueEncounter"), &Z_Registration_Info_UClass_UParalogueEncounter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParalogueEncounter), 2975844642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_Paralogue_Public_ParalogueEncounter_h_1994265611(TEXT("/Script/Paralogue"),
	Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_Paralogue_Public_ParalogueEncounter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_Paralogue_Public_ParalogueEncounter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
