// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParalogueEditor/Public/ParalogueEditorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParalogueEditorFactory() {}

// Begin Cross Module References
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UParalogueEditorFactory();
PARALOGUEEDITOR_API UClass* Z_Construct_UClass_UParalogueEditorFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_ParalogueEditor();
// End Cross Module References

// Begin Class UParalogueEditorFactory
void UParalogueEditorFactory::StaticRegisterNativesUParalogueEditorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParalogueEditorFactory);
UClass* Z_Construct_UClass_UParalogueEditorFactory_NoRegister()
{
	return UParalogueEditorFactory::StaticClass();
}
struct Z_Construct_UClass_UParalogueEditorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ParalogueEditorFactory.h" },
		{ "ModuleRelativePath", "Public/ParalogueEditorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParalogueEditorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParalogueEditorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ParalogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParalogueEditorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParalogueEditorFactory_Statics::ClassParams = {
	&UParalogueEditorFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParalogueEditorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UParalogueEditorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParalogueEditorFactory()
{
	if (!Z_Registration_Info_UClass_UParalogueEditorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParalogueEditorFactory.OuterSingleton, Z_Construct_UClass_UParalogueEditorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParalogueEditorFactory.OuterSingleton;
}
template<> PARALOGUEEDITOR_API UClass* StaticClass<UParalogueEditorFactory>()
{
	return UParalogueEditorFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParalogueEditorFactory);
UParalogueEditorFactory::~UParalogueEditorFactory() {}
// End Class UParalogueEditorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_ParalogueEditorFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParalogueEditorFactory, UParalogueEditorFactory::StaticClass, TEXT("UParalogueEditorFactory"), &Z_Registration_Info_UClass_UParalogueEditorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParalogueEditorFactory), 1624546875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_ParalogueEditorFactory_h_2280585401(TEXT("/Script/ParalogueEditor"),
	Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_ParalogueEditorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueEditor_Public_ParalogueEditorFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
