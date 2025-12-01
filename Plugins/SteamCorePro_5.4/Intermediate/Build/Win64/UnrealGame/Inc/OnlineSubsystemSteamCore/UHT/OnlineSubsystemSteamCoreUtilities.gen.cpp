// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemSteamCore/Private/OnlineSubsystemSteamCoreUtilities.h"
#include "SteamCoreShared/Public/SteamCoreSharedTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSubsystemSteamCoreUtilities() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ONLINESUBSYSTEMSTEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystemUtilities();
ONLINESUBSYSTEMSTEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystemUtilities_NoRegister();
STEAMCORESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteamCore();
// End Cross Module References

// Begin Class USteamCoreSubsystemUtilities Function FindFriendSessions
struct Z_Construct_UFunction_USteamCoreSubsystemUtilities_FindFriendSessions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Private/OnlineSubsystemSteamCoreUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_FindFriendSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSubsystemUtilities, nullptr, "FindFriendSessions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_FindFriendSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSubsystemUtilities_FindFriendSessions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamCoreSubsystemUtilities_FindFriendSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSubsystemUtilities_FindFriendSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSubsystemUtilities::execFindFriendSessions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamCoreSubsystemUtilities::FindFriendSessions();
	P_NATIVE_END;
}
// End Class USteamCoreSubsystemUtilities Function FindFriendSessions

// Begin Class USteamCoreSubsystemUtilities Function GetExtraSessionSettings
struct Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics
{
	struct SteamCoreSubsystemUtilities_eventGetExtraSessionSettings_Parms
	{
		TArray<FSteamSessionSetting> SessionSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Private/OnlineSubsystemSteamCoreUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::NewProp_SessionSettings_Inner = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 3078998749
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSubsystemUtilities_eventGetExtraSessionSettings_Parms, SessionSettings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3078998749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::NewProp_SessionSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::NewProp_SessionSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSubsystemUtilities, nullptr, "GetExtraSessionSettings", nullptr, nullptr, Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::SteamCoreSubsystemUtilities_eventGetExtraSessionSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::SteamCoreSubsystemUtilities_eventGetExtraSessionSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSubsystemUtilities::execGetExtraSessionSettings)
{
	P_GET_TARRAY_REF(FSteamSessionSetting,Z_Param_Out_SessionSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamCoreSubsystemUtilities::GetExtraSessionSettings(Z_Param_Out_SessionSettings);
	P_NATIVE_END;
}
// End Class USteamCoreSubsystemUtilities Function GetExtraSessionSettings

// Begin Class USteamCoreSubsystemUtilities Function GetSessionSettings
struct Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics
{
	struct SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms
	{
		UObject* WorldContextObject;
		TArray<FSteamSessionSetting> SessionSettings;
		FString SessionName;
		int32 MaxPlayers;
		bool bAllowInvites;
		bool bUsesPresence;
		bool bAllowJoinInProgress;
		bool bAllowJoinViaPresence;
		bool bAllowJoinViaPresenceFriendsOnly;
		bool bAntiCheatProtected;
		bool bUsesStats;
		bool bShouldAdvertise;
		bool bUseLobbiesIfAvailable;
		bool bUseLobbiesVoiceChatIfAvailable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Private/OnlineSubsystemSteamCoreUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static void NewProp_bAllowInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
	static void NewProp_bUsesPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesPresence;
	static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
	static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
	static void NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly;
	static void NewProp_bAntiCheatProtected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatProtected;
	static void NewProp_bUsesStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesStats;
	static void NewProp_bShouldAdvertise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
	static void NewProp_bUseLobbiesIfAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLobbiesIfAvailable;
	static void NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLobbiesVoiceChatIfAvailable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_SessionSettings_Inner = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 3078998749
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms, SessionSettings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3078998749
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
{
	((SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms*)Obj)->bAllowInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms), &Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUsesPresence_SetBit(void* Obj)
{
	((SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms*)Obj)->bUsesPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUsesPresence = { "bUsesPresence", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms), &Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUsesPresence_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
{
	((SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms*)Obj)->bAllowJoinInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms), &Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
{
	((SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms*)Obj)->bAllowJoinViaPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms), &Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
{
	((SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms), &Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAntiCheatProtected_SetBit(void* Obj)
{
	((SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms*)Obj)->bAntiCheatProtected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAntiCheatProtected = { "bAntiCheatProtected", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms), &Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAntiCheatProtected_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUsesStats_SetBit(void* Obj)
{
	((SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms*)Obj)->bUsesStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUsesStats = { "bUsesStats", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms), &Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUsesStats_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
{
	((SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms*)Obj)->bShouldAdvertise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms), &Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUseLobbiesIfAvailable_SetBit(void* Obj)
{
	((SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms*)Obj)->bUseLobbiesIfAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUseLobbiesIfAvailable = { "bUseLobbiesIfAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms), &Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUseLobbiesIfAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj)
{
	((SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms*)Obj)->bUseLobbiesVoiceChatIfAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable = { "bUseLobbiesVoiceChatIfAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms), &Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_SessionSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUsesPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowJoinInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowJoinViaPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bAntiCheatProtected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUsesStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bShouldAdvertise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUseLobbiesIfAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSubsystemUtilities, nullptr, "GetSessionSettings", nullptr, nullptr, Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::SteamCoreSubsystemUtilities_eventGetSessionSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSubsystemUtilities::execGetSessionSettings)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FSteamSessionSetting,Z_Param_Out_SessionSettings);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SessionName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxPlayers);
	P_GET_UBOOL_REF(Z_Param_Out_bAllowInvites);
	P_GET_UBOOL_REF(Z_Param_Out_bUsesPresence);
	P_GET_UBOOL_REF(Z_Param_Out_bAllowJoinInProgress);
	P_GET_UBOOL_REF(Z_Param_Out_bAllowJoinViaPresence);
	P_GET_UBOOL_REF(Z_Param_Out_bAllowJoinViaPresenceFriendsOnly);
	P_GET_UBOOL_REF(Z_Param_Out_bAntiCheatProtected);
	P_GET_UBOOL_REF(Z_Param_Out_bUsesStats);
	P_GET_UBOOL_REF(Z_Param_Out_bShouldAdvertise);
	P_GET_UBOOL_REF(Z_Param_Out_bUseLobbiesIfAvailable);
	P_GET_UBOOL_REF(Z_Param_Out_bUseLobbiesVoiceChatIfAvailable);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamCoreSubsystemUtilities::GetSessionSettings(Z_Param_WorldContextObject,Z_Param_Out_SessionSettings,Z_Param_Out_SessionName,Z_Param_Out_MaxPlayers,Z_Param_Out_bAllowInvites,Z_Param_Out_bUsesPresence,Z_Param_Out_bAllowJoinInProgress,Z_Param_Out_bAllowJoinViaPresence,Z_Param_Out_bAllowJoinViaPresenceFriendsOnly,Z_Param_Out_bAntiCheatProtected,Z_Param_Out_bUsesStats,Z_Param_Out_bShouldAdvertise,Z_Param_Out_bUseLobbiesIfAvailable,Z_Param_Out_bUseLobbiesVoiceChatIfAvailable);
	P_NATIVE_END;
}
// End Class USteamCoreSubsystemUtilities Function GetSessionSettings

// Begin Class USteamCoreSubsystemUtilities Function SendSessionInviteToFriend
struct Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics
{
	struct SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms
	{
		int32 LocalUserNum;
		FString FriendSteamId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Private/OnlineSubsystemSteamCoreUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendSteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FriendSteamId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_FriendSteamId = { "FriendSteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms, FriendSteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendSteamId_MetaData), NewProp_FriendSteamId_MetaData) };
void Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms), &Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_FriendSteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSubsystemUtilities, nullptr, "SendSessionInviteToFriend", nullptr, nullptr, Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSubsystemUtilities::execSendSessionInviteToFriend)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_PROPERTY(FStrProperty,Z_Param_FriendSteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamCoreSubsystemUtilities::SendSessionInviteToFriend(Z_Param_LocalUserNum,Z_Param_FriendSteamId);
	P_NATIVE_END;
}
// End Class USteamCoreSubsystemUtilities Function SendSessionInviteToFriend

// Begin Class USteamCoreSubsystemUtilities
void USteamCoreSubsystemUtilities::StaticRegisterNativesUSteamCoreSubsystemUtilities()
{
	UClass* Class = USteamCoreSubsystemUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindFriendSessions", &USteamCoreSubsystemUtilities::execFindFriendSessions },
		{ "GetExtraSessionSettings", &USteamCoreSubsystemUtilities::execGetExtraSessionSettings },
		{ "GetSessionSettings", &USteamCoreSubsystemUtilities::execGetSessionSettings },
		{ "SendSessionInviteToFriend", &USteamCoreSubsystemUtilities::execSendSessionInviteToFriend },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreSubsystemUtilities);
UClass* Z_Construct_UClass_USteamCoreSubsystemUtilities_NoRegister()
{
	return USteamCoreSubsystemUtilities::StaticClass();
}
struct Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineSubsystemSteamCoreUtilities.h" },
		{ "ModuleRelativePath", "Private/OnlineSubsystemSteamCoreUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreSubsystemUtilities_FindFriendSessions, "FindFriendSessions" }, // 2589225913
		{ &Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetExtraSessionSettings, "GetExtraSessionSettings" }, // 3152150136
		{ &Z_Construct_UFunction_USteamCoreSubsystemUtilities_GetSessionSettings, "GetSessionSettings" }, // 2267565908
		{ &Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend, "SendSessionInviteToFriend" }, // 1054678753
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSubsystemUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics::ClassParams = {
	&USteamCoreSubsystemUtilities::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreSubsystemUtilities()
{
	if (!Z_Registration_Info_UClass_USteamCoreSubsystemUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSubsystemUtilities.OuterSingleton, Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreSubsystemUtilities.OuterSingleton;
}
template<> ONLINESUBSYSTEMSTEAMCORE_API UClass* StaticClass<USteamCoreSubsystemUtilities>()
{
	return USteamCoreSubsystemUtilities::StaticClass();
}
USteamCoreSubsystemUtilities::USteamCoreSubsystemUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSubsystemUtilities);
USteamCoreSubsystemUtilities::~USteamCoreSubsystemUtilities() {}
// End Class USteamCoreSubsystemUtilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_OnlineSubsystemSteamCoreUtilities_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreSubsystemUtilities, USteamCoreSubsystemUtilities::StaticClass, TEXT("USteamCoreSubsystemUtilities"), &Z_Registration_Info_UClass_USteamCoreSubsystemUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSubsystemUtilities), 46104303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_OnlineSubsystemSteamCoreUtilities_h_935545372(TEXT("/Script/OnlineSubsystemSteamCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_OnlineSubsystemSteamCoreUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_OnlineSubsystemSteamCoreUtilities_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
