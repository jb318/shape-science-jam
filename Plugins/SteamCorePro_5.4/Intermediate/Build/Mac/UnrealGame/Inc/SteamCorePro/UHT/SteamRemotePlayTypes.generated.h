// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemotePlay/SteamRemotePlayTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamRemotePlaySessionConnected;
struct FSteamRemotePlaySessionDisconnected;
#ifdef STEAMCOREPRO_SteamRemotePlayTypes_generated_h
#error "SteamRemotePlayTypes.generated.h already included, missing '#pragma once' in SteamRemotePlayTypes.h"
#endif
#define STEAMCOREPRO_SteamRemotePlayTypes_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_195_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FRemotePlayInputKey>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FRemotePlayInputMouseWheel>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FRemotePlayInputMouseMotion>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_320_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FSteamRemotePlaySessionConnected>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_349_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FSteamRemotePlaySessionDisconnected>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_379_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FRemotePlaySessionID>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_404_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemotePlayInput_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FRemotePlayInput>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_465_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FRemotePlayCursorID>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_491_DELEGATE \
STEAMCOREPRO_API void FOnSteamRemotePlaySessionConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionConnected, FSteamRemotePlaySessionConnected const& Data);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_492_DELEGATE \
STEAMCOREPRO_API void FOnSteamRemotePlaySessionDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionDisconnected, FSteamRemotePlaySessionDisconnected const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h


#define FOREACH_ENUM_ESTEAMREMOTEPLAYKEYMODIFIER(op) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierNone) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftShift) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightShift) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftControl) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightControl) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftAlt) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightAlt) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftGUI) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightGUI) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierNumLock) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierCapsLock) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierMask) 

enum class ESteamRemotePlayKeyModifier : uint8;
template<> struct TIsUEnumClass<ESteamRemotePlayKeyModifier> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamRemotePlayKeyModifier>();

#define FOREACH_ENUM_ESTEAMREMOTEPLAYSCANCODE(op) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeUnknown) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeA) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeB) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeC) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeD) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeE) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeG) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeH) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeI) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeJ) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeK) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeL) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeM) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeN) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeO) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeP) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeQ) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeR) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeS) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeT) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeU) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeV) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeW) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeX) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeY) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeZ) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode1) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode2) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode3) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode4) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode5) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode6) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode7) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode8) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode9) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode0) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeReturn) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeEscape) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeBackspace) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeTab) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeSpace) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeMinus) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeEquals) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftBracket) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeRightBracket) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeBackslash) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeSemicolon) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeApostrophe) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeGrave) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeComma) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodePeriod) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeSlash) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeCapsLock) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF1) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF2) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF3) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF4) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF5) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF6) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF7) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF8) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF9) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF10) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF11) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF12) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeInsert) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeHome) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodePageUp) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeDelete) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeEnd) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodePageDown) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeRight) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeLeft) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeDown) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeUp) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftControl) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftShift) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftAlt) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftGUI) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeRightControl) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeRightShift) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeRightALT) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeRightGUI) 

enum class ESteamRemotePlayScancode : uint8;
template<> struct TIsUEnumClass<ESteamRemotePlayScancode> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamRemotePlayScancode>();

#define FOREACH_ENUM_ESTEAMREMOTEPLAYMOUSEWHEELDIRECTION(op) \
	op(ESteamRemotePlayMouseWheelDirection::NOT_SET) \
	op(ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelUp) \
	op(ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelDown) \
	op(ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelLeft) \
	op(ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelRight) 

enum class ESteamRemotePlayMouseWheelDirection : uint8;
template<> struct TIsUEnumClass<ESteamRemotePlayMouseWheelDirection> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamRemotePlayMouseWheelDirection>();

#define FOREACH_ENUM_ESTEAMREMOTEPLAYMOUSEBUTTON(op) \
	op(ESteamRemotePlayMouseButton::NOT_SET) \
	op(ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonLeft) \
	op(ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonRight) \
	op(ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonMiddle) \
	op(ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonX1) \
	op(ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonX2) 

enum class ESteamRemotePlayMouseButton : uint8;
template<> struct TIsUEnumClass<ESteamRemotePlayMouseButton> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamRemotePlayMouseButton>();

#define FOREACH_ENUM_ESTEAMREMOTEPLAYINPUTTYPE(op) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputUnknown) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputMouseMotion) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputMouseButtonDown) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputMouseButtonUp) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputMouseWheel) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputKeyDown) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputKeyUp) 

enum class ESteamRemotePlayInputType : uint8;
template<> struct TIsUEnumClass<ESteamRemotePlayInputType> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamRemotePlayInputType>();

#define FOREACH_ENUM_ESTEAMCOREPRODEVICEFORMFACTOR(op) \
	op(ESteamCoreProDeviceFormFactor::Unknown) \
	op(ESteamCoreProDeviceFormFactor::Phone) \
	op(ESteamCoreProDeviceFormFactor::Tablet) \
	op(ESteamCoreProDeviceFormFactor::Computer) \
	op(ESteamCoreProDeviceFormFactor::TV) 

enum class ESteamCoreProDeviceFormFactor : uint8;
template<> struct TIsUEnumClass<ESteamCoreProDeviceFormFactor> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProDeviceFormFactor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
