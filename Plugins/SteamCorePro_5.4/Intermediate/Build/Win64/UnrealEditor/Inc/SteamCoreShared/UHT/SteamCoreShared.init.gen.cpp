// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreShared_init() {}
	STEAMCORESHARED_API UFunction* Z_Construct_UDelegateFunction_SteamCoreShared_OnSteamCoreAudioInputDevicesObtained__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SteamCoreShared;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SteamCoreShared()
	{
		if (!Z_Registration_Info_UPackage__Script_SteamCoreShared.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamCoreShared_OnSteamCoreAudioInputDevicesObtained__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SteamCoreShared",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5419C515,
				0xDA68D45F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SteamCoreShared.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SteamCoreShared.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SteamCoreShared(Z_Construct_UPackage__Script_SteamCoreShared, TEXT("/Script/SteamCoreShared"), Z_Registration_Info_UPackage__Script_SteamCoreShared, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5419C515, 0xDA68D45F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
