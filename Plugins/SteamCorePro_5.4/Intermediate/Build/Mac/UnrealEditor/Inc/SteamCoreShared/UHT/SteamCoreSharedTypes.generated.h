// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamCoreSharedTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamCoreAudioInputDeviceInfo;
#ifdef STEAMCORESHARED_SteamCoreSharedTypes_generated_h
#error "SteamCoreSharedTypes.generated.h already included, missing '#pragma once' in SteamCoreSharedTypes.h"
#endif
#define STEAMCORESHARED_SteamCoreSharedTypes_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreShared_Public_SteamCoreSharedTypes_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORESHARED_API UScriptStruct* StaticStruct<struct FOnlineUserPresenceSteamCoreBlueprint>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreShared_Public_SteamCoreSharedTypes_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamCoreAudioInputDeviceInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORESHARED_API UScriptStruct* StaticStruct<struct FSteamCoreAudioInputDeviceInfo>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreShared_Public_SteamCoreSharedTypes_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORESHARED_API UScriptStruct* StaticStruct<struct FOnlineFriendSteamCoreBlueprint>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreShared_Public_SteamCoreSharedTypes_h_210_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamSessionSetting_Statics; \
	STEAMCORESHARED_API static class UScriptStruct* StaticStruct();


template<> STEAMCORESHARED_API UScriptStruct* StaticStruct<struct FSteamSessionSetting>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreShared_Public_SteamCoreSharedTypes_h_234_DELEGATE \
STEAMCORESHARED_API void FOnSteamCoreAudioInputDevicesObtained_DelegateWrapper(const FScriptDelegate& OnSteamCoreAudioInputDevicesObtained, TArray<FSteamCoreAudioInputDeviceInfo> const& AvailableDevices);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreShared_Public_SteamCoreSharedTypes_h


#define FOREACH_ENUM_ESTEAMLOBBYDISTANCEFILTER(op) \
	op(ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterClose) \
	op(ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterDefault) \
	op(ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterFar) \
	op(ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterWorldwide) 

enum class ESteamLobbyDistanceFilter : uint8;
template<> struct TIsUEnumClass<ESteamLobbyDistanceFilter> { enum { Value = true }; };
template<> STEAMCORESHARED_API UEnum* StaticEnum<ESteamLobbyDistanceFilter>();

#define FOREACH_ENUM_EONLINEFRIENDSTEAMCOREPRESENCESTATE(op) \
	op(EOnlineFriendSteamCorePresenceState::Offline) \
	op(EOnlineFriendSteamCorePresenceState::Online) \
	op(EOnlineFriendSteamCorePresenceState::Away) \
	op(EOnlineFriendSteamCorePresenceState::ExtendedAway) \
	op(EOnlineFriendSteamCorePresenceState::DoNotDisturb) \
	op(EOnlineFriendSteamCorePresenceState::Unknown) 

enum class EOnlineFriendSteamCorePresenceState : uint8;
template<> struct TIsUEnumClass<EOnlineFriendSteamCorePresenceState> { enum { Value = true }; };
template<> STEAMCORESHARED_API UEnum* StaticEnum<EOnlineFriendSteamCorePresenceState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
