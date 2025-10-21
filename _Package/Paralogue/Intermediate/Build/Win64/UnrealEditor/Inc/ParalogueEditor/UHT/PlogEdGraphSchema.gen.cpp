// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParalogueEditor/Public/PlogEdGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlogEdGraphSchema() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UPlogEdGraphSchema();
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UPlogEdGraphSchema_NoRegister();
PARALOGUEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNewNodeAction();
UPackage* Z_Construct_UPackage__Script_ParalogueEditor();
// End Cross Module References

// Begin Class UPlogEdGraphSchema
void UPlogEdGraphSchema::StaticRegisterNativesUPlogEdGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlogEdGraphSchema);
UClass* Z_Construct_UClass_UPlogEdGraphSchema_NoRegister()
{
	return UPlogEdGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UPlogEdGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * graph schemas define behaviors/logic and things such as if two nodes are allowed to be connected\n */" },
		{ "IncludePath", "PlogEdGraphSchema.h" },
		{ "ModuleRelativePath", "Public/PlogEdGraphSchema.h" },
		{ "ToolTip", "graph schemas define behaviors/logic and things such as if two nodes are allowed to be connected" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlogEdGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlogEdGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogEdGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlogEdGraphSchema_Statics::ClassParams = {
	&UPlogEdGraphSchema::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogEdGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlogEdGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlogEdGraphSchema()
{
	if (!Z_Registration_Info_UClass_UPlogEdGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlogEdGraphSchema.OuterSingleton, Z_Construct_UClass_UPlogEdGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlogEdGraphSchema.OuterSingleton;
}
template<> PARALOGUEEDITOR_API UClass* StaticClass<UPlogEdGraphSchema>()
{
	return UPlogEdGraphSchema::StaticClass();
}
UPlogEdGraphSchema::UPlogEdGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlogEdGraphSchema);
UPlogEdGraphSchema::~UPlogEdGraphSchema() {}
// End Class UPlogEdGraphSchema

// Begin ScriptStruct FNewNodeAction
static_assert(std::is_polymorphic<FNewNodeAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FNewNodeAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NewNodeAction;
class UScriptStruct* FNewNodeAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NewNodeAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NewNodeAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewNodeAction, (UObject*)Z_Construct_UPackage__Script_ParalogueEditor(), TEXT("NewNodeAction"));
	}
	return Z_Registration_Info_UScriptStruct_NewNodeAction.OuterSingleton;
}
template<> PARALOGUEEDITOR_API UScriptStruct* StaticStruct<FNewNodeAction>()
{
	return FNewNodeAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNewNodeAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// specifies the list of actions in the context menu for creating a new node (right click menu)\n" },
		{ "ModuleRelativePath", "Public/PlogEdGraphSchema.h" },
		{ "ToolTip", "specifies the list of actions in the context menu for creating a new node (right click menu)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewNodeAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewNodeAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"NewNodeAction",
	nullptr,
	0,
	sizeof(FNewNodeAction),
	alignof(FNewNodeAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewNodeAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNewNodeAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNewNodeAction()
{
	if (!Z_Registration_Info_UScriptStruct_NewNodeAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NewNodeAction.InnerSingleton, Z_Construct_UScriptStruct_FNewNodeAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NewNodeAction.InnerSingleton;
}
// End ScriptStruct FNewNodeAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdGraphSchema_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNewNodeAction::StaticStruct, Z_Construct_UScriptStruct_FNewNodeAction_Statics::NewStructOps, TEXT("NewNodeAction"), &Z_Registration_Info_UScriptStruct_NewNodeAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNewNodeAction), 2690512500U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlogEdGraphSchema, UPlogEdGraphSchema::StaticClass, TEXT("UPlogEdGraphSchema"), &Z_Registration_Info_UClass_UPlogEdGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlogEdGraphSchema), 3319487043U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdGraphSchema_h_558856256(TEXT("/Script/ParalogueEditor"),
	Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdGraphSchema_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdGraphSchema_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
