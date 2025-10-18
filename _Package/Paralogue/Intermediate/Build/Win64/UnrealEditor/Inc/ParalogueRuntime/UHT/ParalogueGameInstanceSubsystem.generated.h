// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParalogueGameInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARALOGUERUNTIME_ParalogueGameInstanceSubsystem_generated_h
#error "ParalogueGameInstanceSubsystem.generated.h already included, missing '#pragma once' in ParalogueGameInstanceSubsystem.h"
#endif
#define PARALOGUERUNTIME_ParalogueGameInstanceSubsystem_generated_h

#define FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_ParalogueGameInstanceSubsystem_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerResponseData_Statics; \
	PARALOGUERUNTIME_API static class UScriptStruct* StaticStruct();


template<> PARALOGUERUNTIME_API UScriptStruct* StaticStruct<struct FPlayerResponseData>();

#define FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_ParalogueGameInstanceSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponseDataByEncounter); \
	DECLARE_FUNCTION(execGetRouteFlag); \
	DECLARE_FUNCTION(execSetRouteFlag); \
	DECLARE_FUNCTION(execGetRouteVariable); \
	DECLARE_FUNCTION(execSetRouteVariable);


#define FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_ParalogueGameInstanceSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParalogueGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UParalogueGameInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UParalogueGameInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParalogueRuntime"), NO_API) \
	DECLARE_SERIALIZER(UParalogueGameInstanceSubsystem)


#define FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_ParalogueGameInstanceSubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParalogueGameInstanceSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParalogueGameInstanceSubsystem(UParalogueGameInstanceSubsystem&&); \
	UParalogueGameInstanceSubsystem(const UParalogueGameInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParalogueGameInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParalogueGameInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UParalogueGameInstanceSubsystem) \
	NO_API virtual ~UParalogueGameInstanceSubsystem();


#define FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_ParalogueGameInstanceSubsystem_h_24_PROLOG
#define FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_ParalogueGameInstanceSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_ParalogueGameInstanceSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_ParalogueGameInstanceSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_ParalogueGameInstanceSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARALOGUERUNTIME_API UClass* StaticClass<class UParalogueGameInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_My_Stuff__Projects_UE_sandbox_Plugins5_4_Plugins_Paralogue__Package_Paralogue_HostProject_Plugins_Paralogue_Source_ParalogueRuntime_Public_ParalogueGameInstanceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
