// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamCoreSharedAudioSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSteamCoreAudioInputDeviceInfo;
#ifdef STEAMCORESHARED_SteamCoreSharedAudioSubsystem_generated_h
#error "SteamCoreSharedAudioSubsystem.generated.h already included, missing '#pragma once' in SteamCoreSharedAudioSubsystem.h"
#endif
#define STEAMCORESHARED_SteamCoreSharedAudioSubsystem_generated_h

#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAvailableAudioInputDevices); \
	DECLARE_FUNCTION(execConv_AudioInputDeviceInfoToString);


#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreAudioCaptureBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USteamCoreAudioCaptureBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreShared"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreAudioCaptureBlueprintLibrary)


#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreAudioCaptureBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamCoreAudioCaptureBlueprintLibrary(USteamCoreAudioCaptureBlueprintLibrary&&); \
	USteamCoreAudioCaptureBlueprintLibrary(const USteamCoreAudioCaptureBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreAudioCaptureBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreAudioCaptureBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreAudioCaptureBlueprintLibrary) \
	NO_API virtual ~USteamCoreAudioCaptureBlueprintLibrary();


#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_14_PROLOG
#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORESHARED_API UClass* StaticClass<class USteamCoreAudioCaptureBlueprintLibrary>();

#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_FindAudioDeviceInfoFromDeviceName); \
	DECLARE_FUNCTION(execK2_GetAudioInputDevices); \
	DECLARE_FUNCTION(execK2_FindAudioDeviceInfoFromDeviceId);


#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSharedAudioSubsystem(); \
	friend struct Z_Construct_UClass_USteamCoreSharedAudioSubsystem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSharedAudioSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreShared"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSharedAudioSubsystem)


#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSharedAudioSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamCoreSharedAudioSubsystem(USteamCoreSharedAudioSubsystem&&); \
	USteamCoreSharedAudioSubsystem(const USteamCoreSharedAudioSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSharedAudioSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSharedAudioSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreSharedAudioSubsystem) \
	NO_API virtual ~USteamCoreSharedAudioSubsystem();


#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_40_PROLOG
#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_43_INCLASS_NO_PURE_DECLS \
	FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORESHARED_API UClass* StaticClass<class USteamCoreSharedAudioSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
