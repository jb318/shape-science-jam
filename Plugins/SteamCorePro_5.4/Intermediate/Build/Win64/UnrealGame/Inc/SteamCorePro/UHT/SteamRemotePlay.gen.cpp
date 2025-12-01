// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamRemotePlay/SteamRemotePlay.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamRemotePlay/SteamRemotePlayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRemotePlay() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProRemotePlay();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProRemotePlay_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayCursorID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayInput();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemotePlaySessionID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProRemotePlay Function BEnableRemotePlayTogetherDirectInput
struct Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics
{
	struct SteamProRemotePlay_eventBEnableRemotePlayTogetherDirectInput_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Make mouse and keyboard input for Remote Play Together sessions available via GetInput() instead of being merged with local input\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Make mouse and keyboard input for Remote Play Together sessions available via GetInput() instead of being merged with local input" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemotePlay_eventBEnableRemotePlayTogetherDirectInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemotePlay_eventBEnableRemotePlayTogetherDirectInput_Parms), &Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "BEnableRemotePlayTogetherDirectInput", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::SteamProRemotePlay_eventBEnableRemotePlayTogetherDirectInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::SteamProRemotePlay_eventBEnableRemotePlayTogetherDirectInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execBEnableRemotePlayTogetherDirectInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BEnableRemotePlayTogetherDirectInput();
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function BEnableRemotePlayTogetherDirectInput

// Begin Class USteamProRemotePlay Function BGetSessionClientResolution
struct Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics
{
	struct SteamProRemotePlay_eventBGetSessionClientResolution_Parms
	{
		int32 SessionID;
		int32 ResolutionX;
		int32 ResolutionY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.\n\x09*\n\x09* @param\x09SessionID\x09\x09The session ID to get information about\n\x09* @param\x09ResolutionX\x09\x09""A pointer to a variable to fill with the device resolution width\n\x09* @param\x09ResolutionY\x09\x09""A pointer to a variable to fill with the device resolution height\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.\n\n@param        SessionID               The session ID to get information about\n@param        ResolutionX             A pointer to a variable to fill with the device resolution width\n@param        ResolutionY             A pointer to a variable to fill with the device resolution height" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventBGetSessionClientResolution_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventBGetSessionClientResolution_Parms, ResolutionX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventBGetSessionClientResolution_Parms, ResolutionY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemotePlay_eventBGetSessionClientResolution_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemotePlay_eventBGetSessionClientResolution_Parms), &Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "BGetSessionClientResolution", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::SteamProRemotePlay_eventBGetSessionClientResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::SteamProRemotePlay_eventBGetSessionClientResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execBGetSessionClientResolution)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ResolutionX);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ResolutionY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BGetSessionClientResolution(Z_Param_SessionID,Z_Param_Out_ResolutionX,Z_Param_Out_ResolutionY);
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function BGetSessionClientResolution

// Begin Class USteamProRemotePlay Function BSendRemotePlayTogetherInvite
struct Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics
{
	struct SteamProRemotePlay_eventBSendRemotePlayTogetherInvite_Parms
	{
		FSteamID SteamIDFriend;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Invite a friend to join the game using Remote Play Together\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the friend you'd like to invite\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Invite a friend to join the game using Remote Play Together\n\n@param        SteamIDFriend           The Steam ID of the friend you'd like to invite" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventBSendRemotePlayTogetherInvite_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemotePlay_eventBSendRemotePlayTogetherInvite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemotePlay_eventBSendRemotePlayTogetherInvite_Parms), &Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "BSendRemotePlayTogetherInvite", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::SteamProRemotePlay_eventBSendRemotePlayTogetherInvite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::SteamProRemotePlay_eventBSendRemotePlayTogetherInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execBSendRemotePlayTogetherInvite)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BSendRemotePlayTogetherInvite(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function BSendRemotePlayTogetherInvite

// Begin Class USteamProRemotePlay Function DisableRemotePlayTogetherDirectInput
struct Z_Construct_UFunction_USteamProRemotePlay_DisableRemotePlayTogetherDirectInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09 * Merge Remote Play Together mouse and keyboard input with local input\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Merge Remote Play Together mouse and keyboard input with local input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_DisableRemotePlayTogetherDirectInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "DisableRemotePlayTogetherDirectInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_DisableRemotePlayTogetherDirectInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_DisableRemotePlayTogetherDirectInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProRemotePlay_DisableRemotePlayTogetherDirectInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_DisableRemotePlayTogetherDirectInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execDisableRemotePlayTogetherDirectInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableRemotePlayTogetherDirectInput();
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function DisableRemotePlayTogetherDirectInput

// Begin Class USteamProRemotePlay Function GetInput
struct Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics
{
	struct SteamProRemotePlay_eventGetInput_Parms
	{
		FRemotePlayInput Input;
		int32 MaxEvents;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get input events from Remote Play Together sessions\n\x09* \n\x09* This is available after calling BEnableRemotePlayTogetherDirectInput()\n\x09* Input is an array of input events that will be filled in by this function, up to unMaxEvents.\n\x09*\n\x09* @param\x09Input\x09\x09The Steam ID of the friend you'd like to invite\n\x09* @param\x09MaxEvents\x09\x09The Steam ID of the friend you'd like to invite\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get input events from Remote Play Together sessions\n\nThis is available after calling BEnableRemotePlayTogetherDirectInput()\nInput is an array of input events that will be filled in by this function, up to unMaxEvents.\n\n@param        Input           The Steam ID of the friend you'd like to invite\n@param        MaxEvents               The Steam ID of the friend you'd like to invite" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEvents;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetInput_Parms, Input), Z_Construct_UScriptStruct_FRemotePlayInput, METADATA_PARAMS(0, nullptr) }; // 3349264853
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::NewProp_MaxEvents = { "MaxEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetInput_Parms, MaxEvents), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::NewProp_MaxEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "GetInput", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::SteamProRemotePlay_eventGetInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::SteamProRemotePlay_eventGetInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_GetInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_GetInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execGetInput)
{
	P_GET_STRUCT(FRemotePlayInput,Z_Param_Input);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxEvents);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInput(Z_Param_Input,Z_Param_MaxEvents);
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function GetInput

// Begin Class USteamProRemotePlay Function GetSessionClientFormFactor
struct Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics
{
	struct SteamProRemotePlay_eventGetSessionClientFormFactor_Parms
	{
		int32 SessionID;
		ESteamCoreProDeviceFormFactor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the form factor of the session client device\n\x09*\n\x09* @param\x09SessionID\x09The session ID to get information about\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the form factor of the session client device\n\n@param        SessionID       The session ID to get information about" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetSessionClientFormFactor_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetSessionClientFormFactor_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor, METADATA_PARAMS(0, nullptr) }; // 642209036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "GetSessionClientFormFactor", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::SteamProRemotePlay_eventGetSessionClientFormFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::SteamProRemotePlay_eventGetSessionClientFormFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execGetSessionClientFormFactor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamCoreProDeviceFormFactor*)Z_Param__Result=P_THIS->GetSessionClientFormFactor(Z_Param_SessionID);
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function GetSessionClientFormFactor

// Begin Class USteamProRemotePlay Function GetSessionClientName
struct Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics
{
	struct SteamProRemotePlay_eventGetSessionClientName_Parms
	{
		int32 SessionID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the name of the session client device\n\x09*\n\x09* @param\x09SessionID\x09The session ID to get information about\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the name of the session client device\n\n@param        SessionID       The session ID to get information about" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetSessionClientName_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetSessionClientName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "GetSessionClientName", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::SteamProRemotePlay_eventGetSessionClientName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::SteamProRemotePlay_eventGetSessionClientName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execGetSessionClientName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSessionClientName(Z_Param_SessionID);
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function GetSessionClientName

// Begin Class USteamProRemotePlay Function GetSessionCount
struct Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics
{
	struct SteamProRemotePlay_eventGetSessionCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the number of currently connected Steam Remote Play sessions\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the number of currently connected Steam Remote Play sessions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetSessionCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "GetSessionCount", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics::SteamProRemotePlay_eventGetSessionCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics::SteamProRemotePlay_eventGetSessionCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execGetSessionCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSessionCount();
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function GetSessionCount

// Begin Class USteamProRemotePlay Function GetSessionID
struct Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics
{
	struct SteamProRemotePlay_eventGetSessionID_Parms
	{
		int32 SessionIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the currently connected Steam Remote Play session ID at the specified index\n\x09*\n\x09* @param\x09SessionIndex\x09The index of the specified session\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the currently connected Steam Remote Play session ID at the specified index\n\n@param        SessionIndex    The index of the specified session" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::NewProp_SessionIndex = { "SessionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetSessionID_Parms, SessionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetSessionID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::NewProp_SessionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "GetSessionID", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::SteamProRemotePlay_eventGetSessionID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::SteamProRemotePlay_eventGetSessionID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_GetSessionID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_GetSessionID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execGetSessionID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSessionID(Z_Param_SessionIndex);
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function GetSessionID

// Begin Class USteamProRemotePlay Function GetSessionSteamID
struct Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics
{
	struct SteamProRemotePlay_eventGetSessionSteamID_Parms
	{
		int32 SessionID;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the SteamID of the connected user\n\x09*\n\x09* @param\x09SessionID\x09The session ID to get information about\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the SteamID of the connected user\n\n@param        SessionID       The session ID to get information about" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetSessionSteamID_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetSessionSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "GetSessionSteamID", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::SteamProRemotePlay_eventGetSessionSteamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::SteamProRemotePlay_eventGetSessionSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execGetSessionSteamID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=P_THIS->GetSessionSteamID(Z_Param_SessionID);
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function GetSessionSteamID

// Begin Class USteamProRemotePlay Function GetSteamRemotePlay
struct Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics
{
	struct SteamProRemotePlay_eventGetSteamRemotePlay_Parms
	{
		USteamProRemotePlay* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventGetSteamRemotePlay_Parms, ReturnValue), Z_Construct_UClass_USteamProRemotePlay_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "GetSteamRemotePlay", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics::SteamProRemotePlay_eventGetSteamRemotePlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics::SteamProRemotePlay_eventGetSteamRemotePlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execGetSteamRemotePlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProRemotePlay**)Z_Param__Result=USteamProRemotePlay::GetSteamRemotePlay();
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function GetSteamRemotePlay

// Begin Class USteamProRemotePlay Function SetMouseCursor
struct Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics
{
	struct SteamProRemotePlay_eventSetMouseCursor_Parms
	{
		FRemotePlaySessionID SessionID;
		FRemotePlayCursorID CursorID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09 * Set the mouse cursor for a remote player\n\x09 * \n\x09 * This is available after calling BEnableRemotePlayTogetherDirectInput()\n\x09 * The cursor ID is a value returned by CreateMouseCursor()\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Set the mouse cursor for a remote player\n\nThis is available after calling BEnableRemotePlayTogetherDirectInput()\nThe cursor ID is a value returned by CreateMouseCursor()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CursorID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventSetMouseCursor_Parms, SessionID), Z_Construct_UScriptStruct_FRemotePlaySessionID, METADATA_PARAMS(0, nullptr) }; // 711577021
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::NewProp_CursorID = { "CursorID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventSetMouseCursor_Parms, CursorID), Z_Construct_UScriptStruct_FRemotePlayCursorID, METADATA_PARAMS(0, nullptr) }; // 1782993331
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::NewProp_CursorID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "SetMouseCursor", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::SteamProRemotePlay_eventSetMouseCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::SteamProRemotePlay_eventSetMouseCursor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execSetMouseCursor)
{
	P_GET_STRUCT(FRemotePlaySessionID,Z_Param_SessionID);
	P_GET_STRUCT(FRemotePlayCursorID,Z_Param_CursorID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseCursor(Z_Param_SessionID,Z_Param_CursorID);
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function SetMouseCursor

// Begin Class USteamProRemotePlay Function SetMousePosition
struct Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics
{
	struct SteamProRemotePlay_eventSetMousePosition_Parms
	{
		FRemotePlaySessionID SessionID;
		float NormalizedX;
		float NormalizedY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09 * Set the mouse cursor position for a remote player\n\x09 * \n\x09 * This is available after calling BEnableRemotePlayTogetherDirectInput()\n\x09 *\n\x09 * This is used to warp the cursor to a specific location and isn't needed during normal event processing.\n\x09 * The position is normalized relative to the window, where 0,0 is the upper left, and 1,1 is the lower right.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Set the mouse cursor position for a remote player\n\nThis is available after calling BEnableRemotePlayTogetherDirectInput()\n\nThis is used to warp the cursor to a specific location and isn't needed during normal event processing.\nThe position is normalized relative to the window, where 0,0 is the upper left, and 1,1 is the lower right." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventSetMousePosition_Parms, SessionID), Z_Construct_UScriptStruct_FRemotePlaySessionID, METADATA_PARAMS(0, nullptr) }; // 711577021
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::NewProp_NormalizedX = { "NormalizedX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventSetMousePosition_Parms, NormalizedX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::NewProp_NormalizedY = { "NormalizedY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventSetMousePosition_Parms, NormalizedY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::NewProp_NormalizedX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::NewProp_NormalizedY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "SetMousePosition", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::SteamProRemotePlay_eventSetMousePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::SteamProRemotePlay_eventSetMousePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execSetMousePosition)
{
	P_GET_STRUCT(FRemotePlaySessionID,Z_Param_SessionID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMousePosition(Z_Param_SessionID,Z_Param_NormalizedX,Z_Param_NormalizedY);
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function SetMousePosition

// Begin Class USteamProRemotePlay Function SetMouseVisibility
struct Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics
{
	struct SteamProRemotePlay_eventSetMouseVisibility_Parms
	{
		FRemotePlaySessionID SessionID;
		bool bVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09 * Set the mouse cursor visibility for a remote player\n\x09 * \n\x09 * This is available after calling BEnableRemotePlayTogetherDirectInput()\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Set the mouse cursor visibility for a remote player\n\nThis is available after calling BEnableRemotePlayTogetherDirectInput()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionID;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemotePlay_eventSetMouseVisibility_Parms, SessionID), Z_Construct_UScriptStruct_FRemotePlaySessionID, METADATA_PARAMS(0, nullptr) }; // 711577021
void Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((SteamProRemotePlay_eventSetMouseVisibility_Parms*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemotePlay_eventSetMouseVisibility_Parms), &Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::NewProp_bVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "SetMouseVisibility", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::SteamProRemotePlay_eventSetMouseVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::SteamProRemotePlay_eventSetMouseVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execSetMouseVisibility)
{
	P_GET_STRUCT(FRemotePlaySessionID,Z_Param_SessionID);
	P_GET_UBOOL(Z_Param_bVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseVisibility(Z_Param_SessionID,Z_Param_bVisible);
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function SetMouseVisibility

// Begin Class USteamProRemotePlay Function ShowRemotePlayTogetherUI
struct Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics
{
	struct SteamProRemotePlay_eventShowRemotePlayTogetherUI_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/*\n\x09 * Show the Remote Play Together UI in the game overlay\n\x09 * This returns false if your game is not configured for Remote Play Together\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "* Show the Remote Play Together UI in the game overlay\n* This returns false if your game is not configured for Remote Play Together" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemotePlay_eventShowRemotePlayTogetherUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemotePlay_eventShowRemotePlayTogetherUI_Parms), &Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemotePlay, nullptr, "ShowRemotePlayTogetherUI", nullptr, nullptr, Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::SteamProRemotePlay_eventShowRemotePlayTogetherUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::SteamProRemotePlay_eventShowRemotePlayTogetherUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemotePlay::execShowRemotePlayTogetherUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShowRemotePlayTogetherUI();
	P_NATIVE_END;
}
// End Class USteamProRemotePlay Function ShowRemotePlayTogetherUI

// Begin Class USteamProRemotePlay
void USteamProRemotePlay::StaticRegisterNativesUSteamProRemotePlay()
{
	UClass* Class = USteamProRemotePlay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BEnableRemotePlayTogetherDirectInput", &USteamProRemotePlay::execBEnableRemotePlayTogetherDirectInput },
		{ "BGetSessionClientResolution", &USteamProRemotePlay::execBGetSessionClientResolution },
		{ "BSendRemotePlayTogetherInvite", &USteamProRemotePlay::execBSendRemotePlayTogetherInvite },
		{ "DisableRemotePlayTogetherDirectInput", &USteamProRemotePlay::execDisableRemotePlayTogetherDirectInput },
		{ "GetInput", &USteamProRemotePlay::execGetInput },
		{ "GetSessionClientFormFactor", &USteamProRemotePlay::execGetSessionClientFormFactor },
		{ "GetSessionClientName", &USteamProRemotePlay::execGetSessionClientName },
		{ "GetSessionCount", &USteamProRemotePlay::execGetSessionCount },
		{ "GetSessionID", &USteamProRemotePlay::execGetSessionID },
		{ "GetSessionSteamID", &USteamProRemotePlay::execGetSessionSteamID },
		{ "GetSteamRemotePlay", &USteamProRemotePlay::execGetSteamRemotePlay },
		{ "SetMouseCursor", &USteamProRemotePlay::execSetMouseCursor },
		{ "SetMousePosition", &USteamProRemotePlay::execSetMousePosition },
		{ "SetMouseVisibility", &USteamProRemotePlay::execSetMouseVisibility },
		{ "ShowRemotePlayTogetherUI", &USteamProRemotePlay::execShowRemotePlayTogetherUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProRemotePlay);
UClass* Z_Construct_UClass_USteamProRemotePlay_NoRegister()
{
	return USteamProRemotePlay::StaticClass();
}
struct Z_Construct_UClass_USteamProRemotePlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamRemotePlay/SteamRemotePlay.h" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamRemotePlaySessionConnected_MetaData[] = {
		{ "Category", "SteamCore|RemotePlay|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamRemotePlaySessionDisconnected_MetaData[] = {
		{ "Category", "SteamCore|RemotePlay|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamRemotePlaySessionConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamRemotePlaySessionDisconnected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProRemotePlay_BEnableRemotePlayTogetherDirectInput, "BEnableRemotePlayTogetherDirectInput" }, // 3661630406
		{ &Z_Construct_UFunction_USteamProRemotePlay_BGetSessionClientResolution, "BGetSessionClientResolution" }, // 2815920390
		{ &Z_Construct_UFunction_USteamProRemotePlay_BSendRemotePlayTogetherInvite, "BSendRemotePlayTogetherInvite" }, // 1498197606
		{ &Z_Construct_UFunction_USteamProRemotePlay_DisableRemotePlayTogetherDirectInput, "DisableRemotePlayTogetherDirectInput" }, // 2230401524
		{ &Z_Construct_UFunction_USteamProRemotePlay_GetInput, "GetInput" }, // 3076489369
		{ &Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientFormFactor, "GetSessionClientFormFactor" }, // 2969908768
		{ &Z_Construct_UFunction_USteamProRemotePlay_GetSessionClientName, "GetSessionClientName" }, // 1294819515
		{ &Z_Construct_UFunction_USteamProRemotePlay_GetSessionCount, "GetSessionCount" }, // 1413994158
		{ &Z_Construct_UFunction_USteamProRemotePlay_GetSessionID, "GetSessionID" }, // 4248794250
		{ &Z_Construct_UFunction_USteamProRemotePlay_GetSessionSteamID, "GetSessionSteamID" }, // 965430400
		{ &Z_Construct_UFunction_USteamProRemotePlay_GetSteamRemotePlay, "GetSteamRemotePlay" }, // 2061355386
		{ &Z_Construct_UFunction_USteamProRemotePlay_SetMouseCursor, "SetMouseCursor" }, // 3827680028
		{ &Z_Construct_UFunction_USteamProRemotePlay_SetMousePosition, "SetMousePosition" }, // 1108978813
		{ &Z_Construct_UFunction_USteamProRemotePlay_SetMouseVisibility, "SetMouseVisibility" }, // 3383719890
		{ &Z_Construct_UFunction_USteamProRemotePlay_ShowRemotePlayTogetherUI, "ShowRemotePlayTogetherUI" }, // 3756552239
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProRemotePlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProRemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected = { "SteamRemotePlaySessionConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProRemotePlay, SteamRemotePlaySessionConnected), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamRemotePlaySessionConnected_MetaData), NewProp_SteamRemotePlaySessionConnected_MetaData) }; // 1956204480
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProRemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected = { "SteamRemotePlaySessionDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProRemotePlay, SteamRemotePlaySessionDisconnected), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamRemotePlaySessionDisconnected_MetaData), NewProp_SteamRemotePlaySessionDisconnected_MetaData) }; // 2952812927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProRemotePlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProRemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProRemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProRemotePlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProRemotePlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProRemotePlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProRemotePlay_Statics::ClassParams = {
	&USteamProRemotePlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProRemotePlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProRemotePlay_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProRemotePlay_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProRemotePlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProRemotePlay()
{
	if (!Z_Registration_Info_UClass_USteamProRemotePlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProRemotePlay.OuterSingleton, Z_Construct_UClass_USteamProRemotePlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProRemotePlay.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProRemotePlay>()
{
	return USteamProRemotePlay::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProRemotePlay);
// End Class USteamProRemotePlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProRemotePlay, USteamProRemotePlay::StaticClass, TEXT("USteamProRemotePlay"), &Z_Registration_Info_UClass_USteamProRemotePlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProRemotePlay), 3029660856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h_3498899149(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
