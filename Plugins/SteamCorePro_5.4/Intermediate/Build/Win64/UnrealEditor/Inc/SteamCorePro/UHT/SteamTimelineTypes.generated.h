// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamTimeline/SteamTimelineTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamTimelineEventRecordingExists;
struct FSteamTimelineGamePhaseRecordingExists;
#ifdef STEAMCOREPRO_SteamTimelineTypes_generated_h
#error "SteamTimelineTypes.generated.h already included, missing '#pragma once' in SteamTimelineTypes.h"
#endif
#define STEAMCOREPRO_SteamTimelineTypes_generated_h

#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCorePro_Public_SteamTimeline_SteamTimelineTypes_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineEventHandle_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FTimelineEventHandle>();

#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCorePro_Public_SteamTimeline_SteamTimelineTypes_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FSteamTimelineEventRecordingExists>();

#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCorePro_Public_SteamTimeline_SteamTimelineTypes_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FSteamTimelineGamePhaseRecordingExists>();

#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCorePro_Public_SteamTimeline_SteamTimelineTypes_h_130_DELEGATE \
STEAMCOREPRO_API void FOnSteamTimelineEventRecordingExists_DelegateWrapper(const FMulticastScriptDelegate& OnSteamTimelineEventRecordingExists, FSteamTimelineEventRecordingExists const& Data);


#define FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCorePro_Public_SteamTimeline_SteamTimelineTypes_h_131_DELEGATE \
STEAMCOREPRO_API void FOnSteamTimelineGamePhaseRecordingExists_DelegateWrapper(const FMulticastScriptDelegate& OnSteamTimelineGamePhaseRecordingExists, FSteamTimelineGamePhaseRecordingExists const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCorePro_Public_SteamTimeline_SteamTimelineTypes_h


#define FOREACH_ENUM_ESTEAMTIMELINEGAMEMODE(op) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Invalid) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Playing) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Staging) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Menus) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_LoadingScreen) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Max) 

enum class ESteamTimelineGameMode : uint8;
template<> struct TIsUEnumClass<ESteamTimelineGameMode> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamTimelineGameMode>();

#define FOREACH_ENUM_ESTEAMTIMELINEEVENTCLIPPRIORITY(op) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Invalid) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_None) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Standard) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Featured) 

enum class ESteamTimelineEventClipPriority : uint8;
template<> struct TIsUEnumClass<ESteamTimelineEventClipPriority> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamTimelineEventClipPriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
