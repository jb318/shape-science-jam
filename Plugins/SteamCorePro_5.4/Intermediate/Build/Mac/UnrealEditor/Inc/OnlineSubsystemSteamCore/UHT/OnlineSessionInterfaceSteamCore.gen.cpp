// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemSteamCore/Public/Sessions/OnlineSessionInterfaceSteamCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSessionInterfaceSteamCore() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ONLINESUBSYSTEMSTEAMCORE_API UClass* Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils();
ONLINESUBSYSTEMSTEAMCORE_API UClass* Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteamCore();
// End Cross Module References

// Begin Class UOnlineSessionInterfaceSteamCoreUtils Function GetJoinedLobbyIds
struct Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics
{
	struct OnlineSessionInterfaceSteamCoreUtils_eventGetJoinedLobbyIds_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/Sessions/OnlineSessionInterfaceSteamCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineSessionInterfaceSteamCoreUtils_eventGetJoinedLobbyIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils, nullptr, "GetJoinedLobbyIds", nullptr, nullptr, Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::OnlineSessionInterfaceSteamCoreUtils_eventGetJoinedLobbyIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::OnlineSessionInterfaceSteamCoreUtils_eventGetJoinedLobbyIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnlineSessionInterfaceSteamCoreUtils::execGetJoinedLobbyIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UOnlineSessionInterfaceSteamCoreUtils::GetJoinedLobbyIds();
	P_NATIVE_END;
}
// End Class UOnlineSessionInterfaceSteamCoreUtils Function GetJoinedLobbyIds

// Begin Class UOnlineSessionInterfaceSteamCoreUtils Function GetLastJoinedLobbyId
struct Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics
{
	struct OnlineSessionInterfaceSteamCoreUtils_eventGetLastJoinedLobbyId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/Sessions/OnlineSessionInterfaceSteamCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineSessionInterfaceSteamCoreUtils_eventGetLastJoinedLobbyId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils, nullptr, "GetLastJoinedLobbyId", nullptr, nullptr, Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics::OnlineSessionInterfaceSteamCoreUtils_eventGetLastJoinedLobbyId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics::OnlineSessionInterfaceSteamCoreUtils_eventGetLastJoinedLobbyId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnlineSessionInterfaceSteamCoreUtils::execGetLastJoinedLobbyId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOnlineSessionInterfaceSteamCoreUtils::GetLastJoinedLobbyId();
	P_NATIVE_END;
}
// End Class UOnlineSessionInterfaceSteamCoreUtils Function GetLastJoinedLobbyId

// Begin Class UOnlineSessionInterfaceSteamCoreUtils
void UOnlineSessionInterfaceSteamCoreUtils::StaticRegisterNativesUOnlineSessionInterfaceSteamCoreUtils()
{
	UClass* Class = UOnlineSessionInterfaceSteamCoreUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetJoinedLobbyIds", &UOnlineSessionInterfaceSteamCoreUtils::execGetJoinedLobbyIds },
		{ "GetLastJoinedLobbyId", &UOnlineSessionInterfaceSteamCoreUtils::execGetLastJoinedLobbyId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSessionInterfaceSteamCoreUtils);
UClass* Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils_NoRegister()
{
	return UOnlineSessionInterfaceSteamCoreUtils::StaticClass();
}
struct Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sessions/OnlineSessionInterfaceSteamCore.h" },
		{ "ModuleRelativePath", "Public/Sessions/OnlineSessionInterfaceSteamCore.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetJoinedLobbyIds, "GetJoinedLobbyIds" }, // 2599434332
		{ &Z_Construct_UFunction_UOnlineSessionInterfaceSteamCoreUtils_GetLastJoinedLobbyId, "GetLastJoinedLobbyId" }, // 1467628485
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSessionInterfaceSteamCoreUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils_Statics::ClassParams = {
	&UOnlineSessionInterfaceSteamCoreUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils()
{
	if (!Z_Registration_Info_UClass_UOnlineSessionInterfaceSteamCoreUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSessionInterfaceSteamCoreUtils.OuterSingleton, Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnlineSessionInterfaceSteamCoreUtils.OuterSingleton;
}
template<> ONLINESUBSYSTEMSTEAMCORE_API UClass* StaticClass<UOnlineSessionInterfaceSteamCoreUtils>()
{
	return UOnlineSessionInterfaceSteamCoreUtils::StaticClass();
}
UOnlineSessionInterfaceSteamCoreUtils::UOnlineSessionInterfaceSteamCoreUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSessionInterfaceSteamCoreUtils);
UOnlineSessionInterfaceSteamCoreUtils::~UOnlineSessionInterfaceSteamCoreUtils() {}
// End Class UOnlineSessionInterfaceSteamCoreUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Public_Sessions_OnlineSessionInterfaceSteamCore_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineSessionInterfaceSteamCoreUtils, UOnlineSessionInterfaceSteamCoreUtils::StaticClass, TEXT("UOnlineSessionInterfaceSteamCoreUtils"), &Z_Registration_Info_UClass_UOnlineSessionInterfaceSteamCoreUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSessionInterfaceSteamCoreUtils), 1488777205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Public_Sessions_OnlineSessionInterfaceSteamCore_h_758953972(TEXT("/Script/OnlineSubsystemSteamCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Public_Sessions_OnlineSessionInterfaceSteamCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Public_Sessions_OnlineSessionInterfaceSteamCore_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
