// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParalogueRuntime/Public/PlogRtEncounterSegmentNodeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlogRtEncounterSegmentNodeData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_NoRegister();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_NoRegister();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtNodeUserData();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtNodeUserData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ParalogueRuntime();
// End Cross Module References

// Begin Class UPlogRtNodeUserData
void UPlogRtNodeUserData::StaticRegisterNativesUPlogRtNodeUserData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlogRtNodeUserData);
UClass* Z_Construct_UClass_UPlogRtNodeUserData_NoRegister()
{
	return UPlogRtNodeUserData::StaticClass();
}
struct Z_Construct_UClass_UPlogRtNodeUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Base class for storing the data that the user enters into each node\n/// </summary>\n" },
		{ "IncludePath", "PlogRtEncounterSegmentNodeData.h" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterSegmentNodeData.h" },
		{ "ToolTip", "<summary>\nBase class for storing the data that the user enters into each node\n</summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Meta" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterSegmentNodeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Meta" },
		{ "Comment", "/*Detailed description of this node, such as for the narrative situation it is intended for. Like a code comment*/" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterSegmentNodeData.h" },
		{ "ToolTip", "Detailed description of this node, such as for the narrative situation it is intended for. Like a code comment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetAsStartNode_MetaData[] = {
		{ "Category", "Meta" },
		{ "Comment", "//maybe call this writer comment or something later but not worth overthinking now\n//todo: it appears unreal maybe has some sort of \"info\" type, which might be a good thing to change this to\n" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterSegmentNodeData.h" },
		{ "ToolTip", "maybe call this writer comment or something later but not worth overthinking now\ntodo: it appears unreal maybe has some sort of \"info\" type, which might be a good thing to change this to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static void NewProp_SetAsStartNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SetAsStartNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlogRtNodeUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPlogRtNodeUserData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtNodeUserData, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPlogRtNodeUserData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtNodeUserData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UClass_UPlogRtNodeUserData_Statics::NewProp_SetAsStartNode_SetBit(void* Obj)
{
	((UPlogRtNodeUserData*)Obj)->SetAsStartNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlogRtNodeUserData_Statics::NewProp_SetAsStartNode = { "SetAsStartNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlogRtNodeUserData), &Z_Construct_UClass_UPlogRtNodeUserData_Statics::NewProp_SetAsStartNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetAsStartNode_MetaData), NewProp_SetAsStartNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlogRtNodeUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtNodeUserData_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtNodeUserData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtNodeUserData_Statics::NewProp_SetAsStartNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtNodeUserData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlogRtNodeUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtNodeUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlogRtNodeUserData_Statics::ClassParams = {
	&UPlogRtNodeUserData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlogRtNodeUserData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtNodeUserData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtNodeUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlogRtNodeUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlogRtNodeUserData()
{
	if (!Z_Registration_Info_UClass_UPlogRtNodeUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlogRtNodeUserData.OuterSingleton, Z_Construct_UClass_UPlogRtNodeUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlogRtNodeUserData.OuterSingleton;
}
template<> PARALOGUERUNTIME_API UClass* StaticClass<UPlogRtNodeUserData>()
{
	return UPlogRtNodeUserData::StaticClass();
}
UPlogRtNodeUserData::UPlogRtNodeUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlogRtNodeUserData);
UPlogRtNodeUserData::~UPlogRtNodeUserData() {}
// End Class UPlogRtNodeUserData

// Begin Class UPlogRtEncounterSegmentNodeUserData
void UPlogRtEncounterSegmentNodeUserData::StaticRegisterNativesUPlogRtEncounterSegmentNodeUserData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlogRtEncounterSegmentNodeUserData);
UClass* Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_NoRegister()
{
	return UPlogRtEncounterSegmentNodeUserData::StaticClass();
}
struct Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Data for the main encounter segments\n/// </summary>\n" },
		{ "IncludePath", "PlogRtEncounterSegmentNodeData.h" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterSegmentNodeData.h" },
		{ "ToolTip", "<summary>\nData for the main encounter segments\n</summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterFaces_MetaData[] = {
		{ "Category", "Dialogue Content" },
		{ "Comment", "//meta=(MultiLine=true) add this?\n" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterSegmentNodeData.h" },
		{ "ToolTip", "meta=(MultiLine=true) add this?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLines_MetaData[] = {
		{ "Category", "Dialogue Content" },
		{ "Comment", "/*Linear segment of dialogue from the character, with each array element being one page of text*///meta=(MultiLine=true) add this?\n" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterSegmentNodeData.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Linear segment of dialogue from the character, with each array element being one page of text//meta=(MultiLine=true) add this?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerResponseOptions_MetaData[] = {
		{ "Category", "Dialogue Content" },
		{ "Comment", "//meta=(MultiLine=true) add this?\n" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterSegmentNodeData.h" },
		{ "ToolTip", "meta=(MultiLine=true) add this?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagToSet_MetaData[] = {
		{ "Category", "Route Flags" },
		{ "FlagToSet", "" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterSegmentNodeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagValue_MetaData[] = {
		{ "Category", "Route Flags" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterSegmentNodeData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterFaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterFaces;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CharacterLines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterLines;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PlayerResponseOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerResponseOptions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FlagToSet;
	static void NewProp_FlagValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FlagValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlogRtEncounterSegmentNodeUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_CharacterFaces_Inner = { "CharacterFaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_CharacterFaces = { "CharacterFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEncounterSegmentNodeUserData, CharacterFaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterFaces_MetaData), NewProp_CharacterFaces_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_CharacterLines_Inner = { "CharacterLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_CharacterLines = { "CharacterLines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEncounterSegmentNodeUserData, CharacterLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterLines_MetaData), NewProp_CharacterLines_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_PlayerResponseOptions_Inner = { "PlayerResponseOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_PlayerResponseOptions = { "PlayerResponseOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEncounterSegmentNodeUserData, PlayerResponseOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerResponseOptions_MetaData), NewProp_PlayerResponseOptions_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_FlagToSet = { "FlagToSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEncounterSegmentNodeUserData, FlagToSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagToSet_MetaData), NewProp_FlagToSet_MetaData) };
void Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_FlagValue_SetBit(void* Obj)
{
	((UPlogRtEncounterSegmentNodeUserData*)Obj)->FlagValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_FlagValue = { "FlagValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlogRtEncounterSegmentNodeUserData), &Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_FlagValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagValue_MetaData), NewProp_FlagValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_CharacterFaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_CharacterFaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_CharacterLines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_CharacterLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_PlayerResponseOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_PlayerResponseOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_FlagToSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::NewProp_FlagValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlogRtNodeUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::ClassParams = {
	&UPlogRtEncounterSegmentNodeUserData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData()
{
	if (!Z_Registration_Info_UClass_UPlogRtEncounterSegmentNodeUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlogRtEncounterSegmentNodeUserData.OuterSingleton, Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlogRtEncounterSegmentNodeUserData.OuterSingleton;
}
template<> PARALOGUERUNTIME_API UClass* StaticClass<UPlogRtEncounterSegmentNodeUserData>()
{
	return UPlogRtEncounterSegmentNodeUserData::StaticClass();
}
UPlogRtEncounterSegmentNodeUserData::UPlogRtEncounterSegmentNodeUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlogRtEncounterSegmentNodeUserData);
UPlogRtEncounterSegmentNodeUserData::~UPlogRtEncounterSegmentNodeUserData() {}
// End Class UPlogRtEncounterSegmentNodeUserData

// Begin Class UPlogRtEncounterBranchNodeUserData
void UPlogRtEncounterBranchNodeUserData::StaticRegisterNativesUPlogRtEncounterBranchNodeUserData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlogRtEncounterBranchNodeUserData);
UClass* Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_NoRegister()
{
	return UPlogRtEncounterBranchNodeUserData::StaticClass();
}
struct Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Simply the name of the route flag to check to decide on the branch\n/// </summary>\n" },
		{ "IncludePath", "PlogRtEncounterSegmentNodeData.h" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterSegmentNodeData.h" },
		{ "ToolTip", "<summary>\nSimply the name of the route flag to check to decide on the branch\n</summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagToCheck_MetaData[] = {
		{ "Category", "Route Flags" },
		{ "FlagToCheck", "" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterSegmentNodeData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FlagToCheck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlogRtEncounterBranchNodeUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics::NewProp_FlagToCheck = { "FlagToCheck", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEncounterBranchNodeUserData, FlagToCheck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagToCheck_MetaData), NewProp_FlagToCheck_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics::NewProp_FlagToCheck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlogRtNodeUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics::ClassParams = {
	&UPlogRtEncounterBranchNodeUserData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData()
{
	if (!Z_Registration_Info_UClass_UPlogRtEncounterBranchNodeUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlogRtEncounterBranchNodeUserData.OuterSingleton, Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlogRtEncounterBranchNodeUserData.OuterSingleton;
}
template<> PARALOGUERUNTIME_API UClass* StaticClass<UPlogRtEncounterBranchNodeUserData>()
{
	return UPlogRtEncounterBranchNodeUserData::StaticClass();
}
UPlogRtEncounterBranchNodeUserData::UPlogRtEncounterBranchNodeUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlogRtEncounterBranchNodeUserData);
UPlogRtEncounterBranchNodeUserData::~UPlogRtEncounterBranchNodeUserData() {}
// End Class UPlogRtEncounterBranchNodeUserData

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_PlogRtEncounterSegmentNodeData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlogRtNodeUserData, UPlogRtNodeUserData::StaticClass, TEXT("UPlogRtNodeUserData"), &Z_Registration_Info_UClass_UPlogRtNodeUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlogRtNodeUserData), 649989127U) },
		{ Z_Construct_UClass_UPlogRtEncounterSegmentNodeUserData, UPlogRtEncounterSegmentNodeUserData::StaticClass, TEXT("UPlogRtEncounterSegmentNodeUserData"), &Z_Registration_Info_UClass_UPlogRtEncounterSegmentNodeUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlogRtEncounterSegmentNodeUserData), 3241689451U) },
		{ Z_Construct_UClass_UPlogRtEncounterBranchNodeUserData, UPlogRtEncounterBranchNodeUserData::StaticClass, TEXT("UPlogRtEncounterBranchNodeUserData"), &Z_Registration_Info_UClass_UPlogRtEncounterBranchNodeUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlogRtEncounterBranchNodeUserData), 2001149227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_PlogRtEncounterSegmentNodeData_h_1339076111(TEXT("/Script/ParalogueRuntime"),
	Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_PlogRtEncounterSegmentNodeData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_PlogRtEncounterSegmentNodeData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
