// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParalogueRuntime/Public/PlogRtEncounterGraphData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlogRtEncounterGraphData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtEditorSavedGraphData();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtEditorSavedGraphData_NoRegister();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtEditorSavedNodeData();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtEditorSavedNodeData_NoRegister();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtEditorSavedPinData();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtEditorSavedPinData_NoRegister();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtNodeUserData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ParalogueRuntime();
// End Cross Module References

// Begin Class UPlogRtEditorSavedPinData
void UPlogRtEditorSavedPinData::StaticRegisterNativesUPlogRtEditorSavedPinData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlogRtEditorSavedPinData);
UClass* Z_Construct_UClass_UPlogRtEditorSavedPinData_NoRegister()
{
	return UPlogRtEditorSavedPinData::StaticClass();
}
struct Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlogRtEncounterGraphData.h" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterGraphData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlogRtEncounterGraphData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlogRtEncounterGraphData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
		{ "Comment", "//Array of the connections to this pin. Since we know we want to allow multiple connections to at least the input pins\n" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterGraphData.h" },
		{ "ToolTip", "Array of the connections to this pin. Since we know we want to allow multiple connections to at least the input pins" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PinName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Connections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlogRtEditorSavedPinData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEditorSavedPinData, PinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinName_MetaData), NewProp_PinName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::NewProp_PinId = { "PinId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEditorSavedPinData, PinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinId_MetaData), NewProp_PinId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlogRtEditorSavedPinData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEditorSavedPinData, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connections_MetaData), NewProp_Connections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::NewProp_PinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::NewProp_PinId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::NewProp_Connections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::NewProp_Connections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::ClassParams = {
	&UPlogRtEditorSavedPinData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlogRtEditorSavedPinData()
{
	if (!Z_Registration_Info_UClass_UPlogRtEditorSavedPinData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlogRtEditorSavedPinData.OuterSingleton, Z_Construct_UClass_UPlogRtEditorSavedPinData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlogRtEditorSavedPinData.OuterSingleton;
}
template<> PARALOGUERUNTIME_API UClass* StaticClass<UPlogRtEditorSavedPinData>()
{
	return UPlogRtEditorSavedPinData::StaticClass();
}
UPlogRtEditorSavedPinData::UPlogRtEditorSavedPinData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlogRtEditorSavedPinData);
UPlogRtEditorSavedPinData::~UPlogRtEditorSavedPinData() {}
// End Class UPlogRtEditorSavedPinData

// Begin Class UPlogRtEditorSavedNodeData
void UPlogRtEditorSavedNodeData::StaticRegisterNativesUPlogRtEditorSavedNodeData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlogRtEditorSavedNodeData);
UClass* Z_Construct_UClass_UPlogRtEditorSavedNodeData_NoRegister()
{
	return UPlogRtEditorSavedNodeData::StaticClass();
}
struct Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlogRtEncounterGraphData.h" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterGraphData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPin_MetaData[] = {
		{ "Comment", "//this is not the *connection* to the input pin, it is literally ONLY the pin itself on the node (which then holds the connections)\n" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterGraphData.h" },
		{ "ToolTip", "this is not the *connection* to the input pin, it is literally ONLY the pin itself on the node (which then holds the connections)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlogRtEncounterGraphData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlogRtEncounterGraphData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeUserData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlogRtEncounterGraphData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputPin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputPins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPins;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeUserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlogRtEditorSavedNodeData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::NewProp_InputPin = { "InputPin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEditorSavedNodeData, InputPin), Z_Construct_UClass_UPlogRtEditorSavedPinData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPin_MetaData), NewProp_InputPin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::NewProp_OutputPins_Inner = { "OutputPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlogRtEditorSavedPinData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::NewProp_OutputPins = { "OutputPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEditorSavedNodeData, OutputPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputPins_MetaData), NewProp_OutputPins_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEditorSavedNodeData, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::NewProp_NodeUserData = { "NodeUserData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEditorSavedNodeData, NodeUserData), Z_Construct_UClass_UPlogRtNodeUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeUserData_MetaData), NewProp_NodeUserData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::NewProp_InputPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::NewProp_OutputPins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::NewProp_OutputPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::NewProp_NodeUserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::ClassParams = {
	&UPlogRtEditorSavedNodeData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlogRtEditorSavedNodeData()
{
	if (!Z_Registration_Info_UClass_UPlogRtEditorSavedNodeData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlogRtEditorSavedNodeData.OuterSingleton, Z_Construct_UClass_UPlogRtEditorSavedNodeData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlogRtEditorSavedNodeData.OuterSingleton;
}
template<> PARALOGUERUNTIME_API UClass* StaticClass<UPlogRtEditorSavedNodeData>()
{
	return UPlogRtEditorSavedNodeData::StaticClass();
}
UPlogRtEditorSavedNodeData::UPlogRtEditorSavedNodeData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlogRtEditorSavedNodeData);
UPlogRtEditorSavedNodeData::~UPlogRtEditorSavedNodeData() {}
// End Class UPlogRtEditorSavedNodeData

// Begin Class UPlogRtEditorSavedGraphData
void UPlogRtEditorSavedGraphData::StaticRegisterNativesUPlogRtEditorSavedGraphData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlogRtEditorSavedGraphData);
UClass* Z_Construct_UClass_UPlogRtEditorSavedGraphData_NoRegister()
{
	return UPlogRtEditorSavedGraphData::StaticClass();
}
struct Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "///// <summary>\n///// deprecated\n///// </summary>\n//UCLASS()\n//class PARALOGUE_API UPlogRtEditorSavedNodeData : public UObject\n//{\n//\x09GENERATED_BODY() \n//\x09\n//public:\n//\n//\x09UPROPERTY()//this is not the *connection* to the input pin, it is literally ONLY the pin itself on the node (which then holds the connections)\n//\x09UParalogueEncounterEdPinData* InputPin;\n//\x09UPROPERTY()\n//\x09TArray<UParalogueEncounterEdPinData*> OutputPins;\n//\x09UPROPERTY()\n//\x09""FVector2D Position;\n//\n//\x09UPROPERTY()\n//\x09UPlogRtEncounterSegmentNodeData* NodeSegmentData = nullptr;\n//\x09\n//};\n" },
		{ "IncludePath", "PlogRtEncounterGraphData.h" },
		{ "ModuleRelativePath", "Public/PlogRtEncounterGraphData.h" },
		{ "ToolTip", "<summary>\ndeprecated\n</summary>\nUCLASS()\nclass PARALOGUE_API UPlogRtEditorSavedNodeData : public UObject\n{\n      GENERATED_BODY()\n\npublic:\n\n      UPROPERTY()this is not the *connection* to the input pin, it is literally ONLY the pin itself on the node (which then holds the connections)\n      UParalogueEncounterEdPinData* InputPin;\n      UPROPERTY()\n      TArray<UParalogueEncounterEdPinData*> OutputPins;\n      UPROPERTY()\n      FVector2D Position;\n\n      UPROPERTY()\n      UPlogRtEncounterSegmentNodeData* NodeSegmentData = nullptr;\n\n};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlogRtEncounterGraphData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlogRtEditorSavedGraphData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlogRtEditorSavedNodeData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogRtEditorSavedGraphData, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::NewProp_Nodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::ClassParams = {
	&UPlogRtEditorSavedGraphData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlogRtEditorSavedGraphData()
{
	if (!Z_Registration_Info_UClass_UPlogRtEditorSavedGraphData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlogRtEditorSavedGraphData.OuterSingleton, Z_Construct_UClass_UPlogRtEditorSavedGraphData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlogRtEditorSavedGraphData.OuterSingleton;
}
template<> PARALOGUERUNTIME_API UClass* StaticClass<UPlogRtEditorSavedGraphData>()
{
	return UPlogRtEditorSavedGraphData::StaticClass();
}
UPlogRtEditorSavedGraphData::UPlogRtEditorSavedGraphData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlogRtEditorSavedGraphData);
UPlogRtEditorSavedGraphData::~UPlogRtEditorSavedGraphData() {}
// End Class UPlogRtEditorSavedGraphData

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_PlogRtEncounterGraphData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlogRtEditorSavedPinData, UPlogRtEditorSavedPinData::StaticClass, TEXT("UPlogRtEditorSavedPinData"), &Z_Registration_Info_UClass_UPlogRtEditorSavedPinData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlogRtEditorSavedPinData), 2176859324U) },
		{ Z_Construct_UClass_UPlogRtEditorSavedNodeData, UPlogRtEditorSavedNodeData::StaticClass, TEXT("UPlogRtEditorSavedNodeData"), &Z_Registration_Info_UClass_UPlogRtEditorSavedNodeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlogRtEditorSavedNodeData), 434140424U) },
		{ Z_Construct_UClass_UPlogRtEditorSavedGraphData, UPlogRtEditorSavedGraphData::StaticClass, TEXT("UPlogRtEditorSavedGraphData"), &Z_Registration_Info_UClass_UPlogRtEditorSavedGraphData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlogRtEditorSavedGraphData), 3116174407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_PlogRtEncounterGraphData_h_1291794627(TEXT("/Script/ParalogueRuntime"),
	Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_PlogRtEncounterGraphData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_PlogRtEncounterGraphData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
