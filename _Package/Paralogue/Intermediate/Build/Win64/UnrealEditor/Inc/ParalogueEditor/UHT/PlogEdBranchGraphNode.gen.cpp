// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParalogueEditor/Public/PlogEdBranchGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlogEdBranchGraphNode() {}

// Begin Cross Module References
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UPlogEdBaseEncounterGraphNode();
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UPlogEdBranchGraphNode();
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UPlogEdBranchGraphNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ParalogueEditor();
// End Cross Module References

// Begin Class UPlogEdBranchGraphNode
void UPlogEdBranchGraphNode::StaticRegisterNativesUPlogEdBranchGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlogEdBranchGraphNode);
UClass* Z_Construct_UClass_UPlogEdBranchGraphNode_NoRegister()
{
	return UPlogEdBranchGraphNode::StaticClass();
}
struct Z_Construct_UClass_UPlogEdBranchGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlogEdBranchGraphNode.h" },
		{ "ModuleRelativePath", "Public/PlogEdBranchGraphNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlogEdBranchGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlogEdBranchGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlogEdBaseEncounterGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogEdBranchGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlogEdBranchGraphNode_Statics::ClassParams = {
	&UPlogEdBranchGraphNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogEdBranchGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlogEdBranchGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlogEdBranchGraphNode()
{
	if (!Z_Registration_Info_UClass_UPlogEdBranchGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlogEdBranchGraphNode.OuterSingleton, Z_Construct_UClass_UPlogEdBranchGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlogEdBranchGraphNode.OuterSingleton;
}
template<> PARALOGUEEDITOR_API UClass* StaticClass<UPlogEdBranchGraphNode>()
{
	return UPlogEdBranchGraphNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlogEdBranchGraphNode);
UPlogEdBranchGraphNode::~UPlogEdBranchGraphNode() {}
// End Class UPlogEdBranchGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdBranchGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlogEdBranchGraphNode, UPlogEdBranchGraphNode::StaticClass, TEXT("UPlogEdBranchGraphNode"), &Z_Registration_Info_UClass_UPlogEdBranchGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlogEdBranchGraphNode), 474084842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdBranchGraphNode_h_2346378318(TEXT("/Script/ParalogueEditor"),
	Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdBranchGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdBranchGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
