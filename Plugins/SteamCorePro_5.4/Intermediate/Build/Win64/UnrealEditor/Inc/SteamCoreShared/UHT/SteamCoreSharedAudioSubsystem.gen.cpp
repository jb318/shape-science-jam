// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreShared/Public/SteamCoreSharedAudioSubsystem.h"
#include "SteamCoreShared/Public/SteamCoreSharedTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreSharedAudioSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
STEAMCORESHARED_API UClass* Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary();
STEAMCORESHARED_API UClass* Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary_NoRegister();
STEAMCORESHARED_API UClass* Z_Construct_UClass_USteamCoreSharedAudioSubsystem();
STEAMCORESHARED_API UClass* Z_Construct_UClass_USteamCoreSharedAudioSubsystem_NoRegister();
STEAMCORESHARED_API UFunction* Z_Construct_UDelegateFunction_SteamCoreShared_OnSteamCoreAudioInputDevicesObtained__DelegateSignature();
STEAMCORESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSteamCoreAudioInputDeviceInfo();
UPackage* Z_Construct_UPackage__Script_SteamCoreShared();
// End Cross Module References

// Begin Class USteamCoreAudioCaptureBlueprintLibrary Function Conv_AudioInputDeviceInfoToString
struct Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics
{
	struct SteamCoreAudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms
	{
		FSteamCoreAudioInputDeviceInfo info;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the device info in a human readable format\n\x09 * @param info - The audio device data to print\n\x09 * @return The data in a string format\n\x09 */" },
#endif
		{ "CompactNodeTitle", "To String" },
		{ "DisplayName", "Audio Input Device Info To String" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the device info in a human readable format\n@param info - The audio device data to print\n@return The data in a string format" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_info;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms, info), Z_Construct_UScriptStruct_FSteamCoreAudioInputDeviceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_info_MetaData), NewProp_info_MetaData) }; // 1078079587
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_info,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary, nullptr, "Conv_AudioInputDeviceInfoToString", nullptr, nullptr, Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::SteamCoreAudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::SteamCoreAudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAudioCaptureBlueprintLibrary::execConv_AudioInputDeviceInfoToString)
{
	P_GET_STRUCT_REF(FSteamCoreAudioInputDeviceInfo,Z_Param_Out_info);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamCoreAudioCaptureBlueprintLibrary::Conv_AudioInputDeviceInfoToString(Z_Param_Out_info);
	P_NATIVE_END;
}
// End Class USteamCoreAudioCaptureBlueprintLibrary Function Conv_AudioInputDeviceInfoToString

// Begin Class USteamCoreAudioCaptureBlueprintLibrary Function GetAvailableAudioInputDevices
struct Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics
{
	struct SteamCoreAudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms
	{
		const UObject* WorldContextObject;
		FScriptDelegate OnObtainDevicesEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets information about all audio output devices available in the system\n\x09 * @param OnObtainDevicesEvent - the event to fire when the audio endpoint devices have been retrieved\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCoreSharedAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets information about all audio output devices available in the system\n@param OnObtainDevicesEvent - the event to fire when the audio endpoint devices have been retrieved" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnObtainDevicesEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnObtainDevicesEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_OnObtainDevicesEvent = { "OnObtainDevicesEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms, OnObtainDevicesEvent), Z_Construct_UDelegateFunction_SteamCoreShared_OnSteamCoreAudioInputDevicesObtained__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnObtainDevicesEvent_MetaData), NewProp_OnObtainDevicesEvent_MetaData) }; // 1746464185
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_OnObtainDevicesEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary, nullptr, "GetAvailableAudioInputDevices", nullptr, nullptr, Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::SteamCoreAudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::SteamCoreAudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAudioCaptureBlueprintLibrary::execGetAvailableAudioInputDevices)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnObtainDevicesEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamCoreAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices(Z_Param_WorldContextObject,FOnSteamCoreAudioInputDevicesObtained(Z_Param_Out_OnObtainDevicesEvent));
	P_NATIVE_END;
}
// End Class USteamCoreAudioCaptureBlueprintLibrary Function GetAvailableAudioInputDevices

// Begin Class USteamCoreAudioCaptureBlueprintLibrary
void USteamCoreAudioCaptureBlueprintLibrary::StaticRegisterNativesUSteamCoreAudioCaptureBlueprintLibrary()
{
	UClass* Class = USteamCoreAudioCaptureBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Conv_AudioInputDeviceInfoToString", &USteamCoreAudioCaptureBlueprintLibrary::execConv_AudioInputDeviceInfoToString },
		{ "GetAvailableAudioInputDevices", &USteamCoreAudioCaptureBlueprintLibrary::execGetAvailableAudioInputDevices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreAudioCaptureBlueprintLibrary);
UClass* Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary_NoRegister()
{
	return USteamCoreAudioCaptureBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCoreSharedAudioSubsystem.h" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedAudioSubsystem.h" },
		{ "ScriptName", "SteamCoreAudioCaptureLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString, "Conv_AudioInputDeviceInfoToString" }, // 1868657480
		{ &Z_Construct_UFunction_USteamCoreAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices, "GetAvailableAudioInputDevices" }, // 1903777266
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAudioCaptureBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreShared,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary_Statics::ClassParams = {
	&USteamCoreAudioCaptureBlueprintLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_USteamCoreAudioCaptureBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAudioCaptureBlueprintLibrary.OuterSingleton, Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAudioCaptureBlueprintLibrary.OuterSingleton;
}
template<> STEAMCORESHARED_API UClass* StaticClass<USteamCoreAudioCaptureBlueprintLibrary>()
{
	return USteamCoreAudioCaptureBlueprintLibrary::StaticClass();
}
USteamCoreAudioCaptureBlueprintLibrary::USteamCoreAudioCaptureBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreAudioCaptureBlueprintLibrary);
USteamCoreAudioCaptureBlueprintLibrary::~USteamCoreAudioCaptureBlueprintLibrary() {}
// End Class USteamCoreAudioCaptureBlueprintLibrary

// Begin Class USteamCoreSharedAudioSubsystem Function K2_FindAudioDeviceInfoFromDeviceId
struct Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics
{
	struct SteamCoreSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceId_Parms
	{
		FString DeviceId;
		FSteamCoreAudioInputDeviceInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Voice" },
		{ "DisplayName", "Find Audio Device Info From Device Id" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedAudioSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceId_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceId_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamCoreAudioInputDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 1078079587
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSharedAudioSubsystem, nullptr, "K2_FindAudioDeviceInfoFromDeviceId", nullptr, nullptr, Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::SteamCoreSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::SteamCoreSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSharedAudioSubsystem::execK2_FindAudioDeviceInfoFromDeviceId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamCoreAudioInputDeviceInfo*)Z_Param__Result=USteamCoreSharedAudioSubsystem::K2_FindAudioDeviceInfoFromDeviceId(Z_Param_DeviceId);
	P_NATIVE_END;
}
// End Class USteamCoreSharedAudioSubsystem Function K2_FindAudioDeviceInfoFromDeviceId

// Begin Class USteamCoreSharedAudioSubsystem Function K2_FindAudioDeviceInfoFromDeviceName
struct Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics
{
	struct SteamCoreSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceName_Parms
	{
		FString DeviceName;
		FSteamCoreAudioInputDeviceInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Voice" },
		{ "DisplayName", "Find Audio Device Info From Device Name" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedAudioSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceName_Parms, DeviceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceName_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamCoreAudioInputDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 1078079587
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSharedAudioSubsystem, nullptr, "K2_FindAudioDeviceInfoFromDeviceName", nullptr, nullptr, Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::SteamCoreSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::SteamCoreSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSharedAudioSubsystem::execK2_FindAudioDeviceInfoFromDeviceName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamCoreAudioInputDeviceInfo*)Z_Param__Result=USteamCoreSharedAudioSubsystem::K2_FindAudioDeviceInfoFromDeviceName(Z_Param_DeviceName);
	P_NATIVE_END;
}
// End Class USteamCoreSharedAudioSubsystem Function K2_FindAudioDeviceInfoFromDeviceName

// Begin Class USteamCoreSharedAudioSubsystem Function K2_GetAudioInputDevices
struct Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics
{
	struct SteamCoreSharedAudioSubsystem_eventK2_GetAudioInputDevices_Parms
	{
		TArray<FSteamCoreAudioInputDeviceInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Voice" },
		{ "DisplayName", "Get Audio Input Devices" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedAudioSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamCoreAudioInputDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 1078079587
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSharedAudioSubsystem_eventK2_GetAudioInputDevices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1078079587
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSharedAudioSubsystem, nullptr, "K2_GetAudioInputDevices", nullptr, nullptr, Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::SteamCoreSharedAudioSubsystem_eventK2_GetAudioInputDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::SteamCoreSharedAudioSubsystem_eventK2_GetAudioInputDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSharedAudioSubsystem::execK2_GetAudioInputDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSteamCoreAudioInputDeviceInfo>*)Z_Param__Result=USteamCoreSharedAudioSubsystem::K2_GetAudioInputDevices();
	P_NATIVE_END;
}
// End Class USteamCoreSharedAudioSubsystem Function K2_GetAudioInputDevices

// Begin Class USteamCoreSharedAudioSubsystem
void USteamCoreSharedAudioSubsystem::StaticRegisterNativesUSteamCoreSharedAudioSubsystem()
{
	UClass* Class = USteamCoreSharedAudioSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_FindAudioDeviceInfoFromDeviceId", &USteamCoreSharedAudioSubsystem::execK2_FindAudioDeviceInfoFromDeviceId },
		{ "K2_FindAudioDeviceInfoFromDeviceName", &USteamCoreSharedAudioSubsystem::execK2_FindAudioDeviceInfoFromDeviceName },
		{ "K2_GetAudioInputDevices", &USteamCoreSharedAudioSubsystem::execK2_GetAudioInputDevices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreSharedAudioSubsystem);
UClass* Z_Construct_UClass_USteamCoreSharedAudioSubsystem_NoRegister()
{
	return USteamCoreSharedAudioSubsystem::StaticClass();
}
struct Z_Construct_UClass_USteamCoreSharedAudioSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An implementation of ISoundHandleSystem using AudioEngineSubsystem\n */" },
#endif
		{ "IncludePath", "SteamCoreSharedAudioSubsystem.h" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An implementation of ISoundHandleSystem using AudioEngineSubsystem" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId, "K2_FindAudioDeviceInfoFromDeviceId" }, // 3103001898
		{ &Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName, "K2_FindAudioDeviceInfoFromDeviceName" }, // 2637799497
		{ &Z_Construct_UFunction_USteamCoreSharedAudioSubsystem_K2_GetAudioInputDevices, "K2_GetAudioInputDevices" }, // 291364011
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSharedAudioSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCoreSharedAudioSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreShared,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSharedAudioSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSharedAudioSubsystem_Statics::ClassParams = {
	&USteamCoreSharedAudioSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSharedAudioSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreSharedAudioSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreSharedAudioSubsystem()
{
	if (!Z_Registration_Info_UClass_USteamCoreSharedAudioSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSharedAudioSubsystem.OuterSingleton, Z_Construct_UClass_USteamCoreSharedAudioSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreSharedAudioSubsystem.OuterSingleton;
}
template<> STEAMCORESHARED_API UClass* StaticClass<USteamCoreSharedAudioSubsystem>()
{
	return USteamCoreSharedAudioSubsystem::StaticClass();
}
USteamCoreSharedAudioSubsystem::USteamCoreSharedAudioSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSharedAudioSubsystem);
USteamCoreSharedAudioSubsystem::~USteamCoreSharedAudioSubsystem() {}
// End Class USteamCoreSharedAudioSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreAudioCaptureBlueprintLibrary, USteamCoreAudioCaptureBlueprintLibrary::StaticClass, TEXT("USteamCoreAudioCaptureBlueprintLibrary"), &Z_Registration_Info_UClass_USteamCoreAudioCaptureBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAudioCaptureBlueprintLibrary), 2857642686U) },
		{ Z_Construct_UClass_USteamCoreSharedAudioSubsystem, USteamCoreSharedAudioSubsystem::StaticClass, TEXT("USteamCoreSharedAudioSubsystem"), &Z_Registration_Info_UClass_USteamCoreSharedAudioSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSharedAudioSubsystem), 2169915599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_3827759554(TEXT("/Script/SteamCoreShared"),
	Z_CompiledInDeferFile_FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCoreShared_Public_SteamCoreSharedAudioSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
