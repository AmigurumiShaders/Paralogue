// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParalogueEditor/Public/PlogEdSegmentGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlogEdSegmentGraphNode() {}

// Begin Cross Module References
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UPlogEdBaseEncounterGraphNode();
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UPlogEdSegmentGraphNode();
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UPlogEdSegmentGraphNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ParalogueEditor();
// End Cross Module References

// Begin Class UPlogEdSegmentGraphNode
void UPlogEdSegmentGraphNode::StaticRegisterNativesUPlogEdSegmentGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlogEdSegmentGraphNode);
UClass* Z_Construct_UClass_UPlogEdSegmentGraphNode_NoRegister()
{
	return UPlogEdSegmentGraphNode::StaticClass();
}
struct Z_Construct_UClass_UPlogEdSegmentGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlogEdSegmentGraphNode.h" },
		{ "ModuleRelativePath", "Public/PlogEdSegmentGraphNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlogEdSegmentGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlogEdSegmentGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlogEdBaseEncounterGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogEdSegmentGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlogEdSegmentGraphNode_Statics::ClassParams = {
	&UPlogEdSegmentGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogEdSegmentGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlogEdSegmentGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlogEdSegmentGraphNode()
{
	if (!Z_Registration_Info_UClass_UPlogEdSegmentGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlogEdSegmentGraphNode.OuterSingleton, Z_Construct_UClass_UPlogEdSegmentGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlogEdSegmentGraphNode.OuterSingleton;
}
template<> PARALOGUEEDITOR_API UClass* StaticClass<UPlogEdSegmentGraphNode>()
{
	return UPlogEdSegmentGraphNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlogEdSegmentGraphNode);
UPlogEdSegmentGraphNode::~UPlogEdSegmentGraphNode() {}
// End Class UPlogEdSegmentGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdSegmentGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlogEdSegmentGraphNode, UPlogEdSegmentGraphNode::StaticClass, TEXT("UPlogEdSegmentGraphNode"), &Z_Registration_Info_UClass_UPlogEdSegmentGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlogEdSegmentGraphNode), 2150616103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdSegmentGraphNode_h_1662623088(TEXT("/Script/ParalogueEditor"),
	Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdSegmentGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdSegmentGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
