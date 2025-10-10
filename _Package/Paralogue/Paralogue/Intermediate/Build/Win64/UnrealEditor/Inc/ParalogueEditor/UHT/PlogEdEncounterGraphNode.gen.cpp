// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParalogueEditor/Public/PlogEdEncounterGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlogEdEncounterGraphNode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UPlogEdBaseEncounterGraphNode();
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_NoRegister();
PARALOGUERUNTIME_API UClass* Z_Construct_UClass_UPlogRtNodeUserData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ParalogueEditor();
// End Cross Module References

// Begin Class UPlogEdBaseEncounterGraphNode
void UPlogEdBaseEncounterGraphNode::StaticRegisterNativesUPlogEdBaseEncounterGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlogEdBaseEncounterGraphNode);
UClass* Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_NoRegister()
{
	return UPlogEdBaseEncounterGraphNode::StaticClass();
}
struct Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlogEdEncounterGraphNode.h" },
		{ "ModuleRelativePath", "Public/PlogEdEncounterGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_segmentNodeUserData_MetaData[] = {
		{ "Comment", "/*woe upon ye who forgets the uproperty*/" },
		{ "ModuleRelativePath", "Public/PlogEdEncounterGraphNode.h" },
		{ "ToolTip", "woe upon ye who forgets the uproperty" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_segmentNodeUserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlogEdBaseEncounterGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics::NewProp_segmentNodeUserData = { "segmentNodeUserData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlogEdBaseEncounterGraphNode, segmentNodeUserData), Z_Construct_UClass_UPlogRtNodeUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_segmentNodeUserData_MetaData), NewProp_segmentNodeUserData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics::NewProp_segmentNodeUserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics::ClassParams = {
	&UPlogEdBaseEncounterGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlogEdBaseEncounterGraphNode()
{
	if (!Z_Registration_Info_UClass_UPlogEdBaseEncounterGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlogEdBaseEncounterGraphNode.OuterSingleton, Z_Construct_UClass_UPlogEdBaseEncounterGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlogEdBaseEncounterGraphNode.OuterSingleton;
}
template<> PARALOGUEEDITOR_API UClass* StaticClass<UPlogEdBaseEncounterGraphNode>()
{
	return UPlogEdBaseEncounterGraphNode::StaticClass();
}
UPlogEdBaseEncounterGraphNode::UPlogEdBaseEncounterGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlogEdBaseEncounterGraphNode);
UPlogEdBaseEncounterGraphNode::~UPlogEdBaseEncounterGraphNode() {}
// End Class UPlogEdBaseEncounterGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdEncounterGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlogEdBaseEncounterGraphNode, UPlogEdBaseEncounterGraphNode::StaticClass, TEXT("UPlogEdBaseEncounterGraphNode"), &Z_Registration_Info_UClass_UPlogEdBaseEncounterGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlogEdBaseEncounterGraphNode), 1035344039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdEncounterGraphNode_h_2284006684(TEXT("/Script/ParalogueEditor"),
	Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdEncounterGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdEncounterGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
