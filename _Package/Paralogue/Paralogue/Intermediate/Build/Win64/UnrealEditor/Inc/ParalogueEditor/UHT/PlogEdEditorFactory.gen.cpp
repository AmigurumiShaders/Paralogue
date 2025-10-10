// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParalogueEditor/Public/PlogEdEditorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlogEdEditorFactory() {}

// Begin Cross Module References
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UPlogEdEditorFactory();
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UPlogEdEditorFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_ParalogueEditor();
// End Cross Module References

// Begin Class UPlogEdEditorFactory
void UPlogEdEditorFactory::StaticRegisterNativesUPlogEdEditorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlogEdEditorFactory);
UClass* Z_Construct_UClass_UPlogEdEditorFactory_NoRegister()
{
	return UPlogEdEditorFactory::StaticClass();
}
struct Z_Construct_UClass_UPlogEdEditorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlogEdEditorFactory.h" },
		{ "ModuleRelativePath", "Public/PlogEdEditorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlogEdEditorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlogEdEditorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogEdEditorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlogEdEditorFactory_Statics::ClassParams = {
	&UPlogEdEditorFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlogEdEditorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlogEdEditorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlogEdEditorFactory()
{
	if (!Z_Registration_Info_UClass_UPlogEdEditorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlogEdEditorFactory.OuterSingleton, Z_Construct_UClass_UPlogEdEditorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlogEdEditorFactory.OuterSingleton;
}
template<> PARALOGUEEDITOR_API UClass* StaticClass<UPlogEdEditorFactory>()
{
	return UPlogEdEditorFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlogEdEditorFactory);
UPlogEdEditorFactory::~UPlogEdEditorFactory() {}
// End Class UPlogEdEditorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdEditorFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlogEdEditorFactory, UPlogEdEditorFactory::StaticClass, TEXT("UPlogEdEditorFactory"), &Z_Registration_Info_UClass_UPlogEdEditorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlogEdEditorFactory), 2584305169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdEditorFactory_h_3029582891(TEXT("/Script/ParalogueEditor"),
	Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdEditorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_PlogEdEditorFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
