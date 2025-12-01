// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamRemotePlay/SteamRemotePlayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRemotePlayTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayInputType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayKeyModifier();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseButton();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseWheelDirection();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayScancode();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayCursorID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayInput();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayInputKey();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemotePlaySessionID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamRemotePlayKeyModifier
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamRemotePlayKeyModifier;
static UEnum* ESteamRemotePlayKeyModifier_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamRemotePlayKeyModifier.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamRemotePlayKeyModifier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayKeyModifier, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamRemotePlayKeyModifier"));
	}
	return Z_Registration_Info_UEnum_ESteamRemotePlayKeyModifier.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamRemotePlayKeyModifier>()
{
	return ESteamRemotePlayKeyModifier_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayKeyModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//-----------------------------------------------------------------------------\n// Purpose: Key modifier in ERemotePlayInput_t\n//-----------------------------------------------------------------------------\n" },
		{ "k_ERemotePlayKeyModifierCapsLock.Name", "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierCapsLock" },
		{ "k_ERemotePlayKeyModifierLeftAlt.Name", "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftAlt" },
		{ "k_ERemotePlayKeyModifierLeftControl.Name", "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftControl" },
		{ "k_ERemotePlayKeyModifierLeftGUI.Name", "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftGUI" },
		{ "k_ERemotePlayKeyModifierLeftShift.Name", "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftShift" },
		{ "k_ERemotePlayKeyModifierMask.Name", "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierMask" },
		{ "k_ERemotePlayKeyModifierNone.Name", "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierNone" },
		{ "k_ERemotePlayKeyModifierNumLock.Name", "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierNumLock" },
		{ "k_ERemotePlayKeyModifierRightAlt.Name", "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightAlt" },
		{ "k_ERemotePlayKeyModifierRightControl.Name", "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightControl" },
		{ "k_ERemotePlayKeyModifierRightGUI.Name", "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightGUI" },
		{ "k_ERemotePlayKeyModifierRightShift.Name", "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightShift" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Purpose: Key modifier in ERemotePlayInput_t" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierNone", (int64)ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierNone },
		{ "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftShift", (int64)ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftShift },
		{ "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightShift", (int64)ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightShift },
		{ "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftControl", (int64)ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftControl },
		{ "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightControl", (int64)ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightControl },
		{ "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftAlt", (int64)ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftAlt },
		{ "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightAlt", (int64)ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightAlt },
		{ "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftGUI", (int64)ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftGUI },
		{ "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightGUI", (int64)ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightGUI },
		{ "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierNumLock", (int64)ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierNumLock },
		{ "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierCapsLock", (int64)ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierCapsLock },
		{ "ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierMask", (int64)ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierMask },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayKeyModifier_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamRemotePlayKeyModifier",
	"ESteamRemotePlayKeyModifier",
	Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayKeyModifier_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayKeyModifier_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayKeyModifier_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayKeyModifier_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayKeyModifier()
{
	if (!Z_Registration_Info_UEnum_ESteamRemotePlayKeyModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamRemotePlayKeyModifier.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayKeyModifier_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamRemotePlayKeyModifier.InnerSingleton;
}
// End Enum ESteamRemotePlayKeyModifier

// Begin Enum ESteamRemotePlayScancode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamRemotePlayScancode;
static UEnum* ESteamRemotePlayScancode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamRemotePlayScancode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamRemotePlayScancode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayScancode, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamRemotePlayScancode"));
	}
	return Z_Registration_Info_UEnum_ESteamRemotePlayScancode.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamRemotePlayScancode>()
{
	return ESteamRemotePlayScancode_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayScancode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//-----------------------------------------------------------------------------\n// Purpose: Key scancode in ERemotePlayInput_t\n//\n// This is a USB scancode value as defined for the Keyboard/Keypad Page (0x07)\n// This enumeration isn't a complete list, just the most commonly used keys.\n//-----------------------------------------------------------------------------\n" },
		{ "k_ERemotePlayScancode0.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancode0" },
		{ "k_ERemotePlayScancode1.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancode1" },
		{ "k_ERemotePlayScancode2.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancode2" },
		{ "k_ERemotePlayScancode3.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancode3" },
		{ "k_ERemotePlayScancode4.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancode4" },
		{ "k_ERemotePlayScancode5.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancode5" },
		{ "k_ERemotePlayScancode6.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancode6" },
		{ "k_ERemotePlayScancode7.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancode7" },
		{ "k_ERemotePlayScancode8.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancode8" },
		{ "k_ERemotePlayScancode9.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancode9" },
		{ "k_ERemotePlayScancodeA.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeA" },
		{ "k_ERemotePlayScancodeApostrophe.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeApostrophe" },
		{ "k_ERemotePlayScancodeB.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeB" },
		{ "k_ERemotePlayScancodeBackslash.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeBackslash" },
		{ "k_ERemotePlayScancodeBackspace.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeBackspace" },
		{ "k_ERemotePlayScancodeC.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeC" },
		{ "k_ERemotePlayScancodeCapsLock.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeCapsLock" },
		{ "k_ERemotePlayScancodeComma.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeComma" },
		{ "k_ERemotePlayScancodeD.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeD" },
		{ "k_ERemotePlayScancodeDelete.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeDelete" },
		{ "k_ERemotePlayScancodeDown.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeDown" },
		{ "k_ERemotePlayScancodeE.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeE" },
		{ "k_ERemotePlayScancodeEnd.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeEnd" },
		{ "k_ERemotePlayScancodeEquals.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeEquals" },
		{ "k_ERemotePlayScancodeEscape.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeEscape" },
		{ "k_ERemotePlayScancodeF.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF" },
		{ "k_ERemotePlayScancodeF1.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF1" },
		{ "k_ERemotePlayScancodeF10.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF10" },
		{ "k_ERemotePlayScancodeF11.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF11" },
		{ "k_ERemotePlayScancodeF12.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF12" },
		{ "k_ERemotePlayScancodeF2.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF2" },
		{ "k_ERemotePlayScancodeF3.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF3" },
		{ "k_ERemotePlayScancodeF4.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF4" },
		{ "k_ERemotePlayScancodeF5.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF5" },
		{ "k_ERemotePlayScancodeF6.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF6" },
		{ "k_ERemotePlayScancodeF7.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF7" },
		{ "k_ERemotePlayScancodeF8.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF8" },
		{ "k_ERemotePlayScancodeF9.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeF9" },
		{ "k_ERemotePlayScancodeG.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeG" },
		{ "k_ERemotePlayScancodeGrave.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeGrave" },
		{ "k_ERemotePlayScancodeH.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeH" },
		{ "k_ERemotePlayScancodeHome.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeHome" },
		{ "k_ERemotePlayScancodeI.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeI" },
		{ "k_ERemotePlayScancodeInsert.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeInsert" },
		{ "k_ERemotePlayScancodeJ.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeJ" },
		{ "k_ERemotePlayScancodeK.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeK" },
		{ "k_ERemotePlayScancodeL.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeL" },
		{ "k_ERemotePlayScancodeLeft.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeLeft" },
		{ "k_ERemotePlayScancodeLeftAlt.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftAlt" },
		{ "k_ERemotePlayScancodeLeftBracket.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftBracket" },
		{ "k_ERemotePlayScancodeLeftControl.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftControl" },
		{ "k_ERemotePlayScancodeLeftGUI.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftGUI" },
		{ "k_ERemotePlayScancodeLeftShift.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftShift" },
		{ "k_ERemotePlayScancodeM.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeM" },
		{ "k_ERemotePlayScancodeMinus.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeMinus" },
		{ "k_ERemotePlayScancodeN.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeN" },
		{ "k_ERemotePlayScancodeO.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeO" },
		{ "k_ERemotePlayScancodeP.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeP" },
		{ "k_ERemotePlayScancodePageDown.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodePageDown" },
		{ "k_ERemotePlayScancodePageUp.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodePageUp" },
		{ "k_ERemotePlayScancodePeriod.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodePeriod" },
		{ "k_ERemotePlayScancodeQ.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeQ" },
		{ "k_ERemotePlayScancodeR.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeR" },
		{ "k_ERemotePlayScancodeReturn.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeReturn" },
		{ "k_ERemotePlayScancodeRight.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeRight" },
		{ "k_ERemotePlayScancodeRightALT.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeRightALT" },
		{ "k_ERemotePlayScancodeRightBracket.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeRightBracket" },
		{ "k_ERemotePlayScancodeRightControl.Comment", "// windows, command (apple), meta\n" },
		{ "k_ERemotePlayScancodeRightControl.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeRightControl" },
		{ "k_ERemotePlayScancodeRightControl.ToolTip", "windows, command (apple), meta" },
		{ "k_ERemotePlayScancodeRightGUI.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeRightGUI" },
		{ "k_ERemotePlayScancodeRightShift.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeRightShift" },
		{ "k_ERemotePlayScancodeS.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeS" },
		{ "k_ERemotePlayScancodeSemicolon.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeSemicolon" },
		{ "k_ERemotePlayScancodeSlash.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeSlash" },
		{ "k_ERemotePlayScancodeSpace.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeSpace" },
		{ "k_ERemotePlayScancodeT.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeT" },
		{ "k_ERemotePlayScancodeTab.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeTab" },
		{ "k_ERemotePlayScancodeU.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeU" },
		{ "k_ERemotePlayScancodeUnknown.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeUnknown" },
		{ "k_ERemotePlayScancodeUp.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeUp" },
		{ "k_ERemotePlayScancodeV.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeV" },
		{ "k_ERemotePlayScancodeW.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeW" },
		{ "k_ERemotePlayScancodeX.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeX" },
		{ "k_ERemotePlayScancodeY.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeY" },
		{ "k_ERemotePlayScancodeZ.Name", "ESteamRemotePlayScancode::k_ERemotePlayScancodeZ" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Purpose: Key scancode in ERemotePlayInput_t\n\nThis is a USB scancode value as defined for the Keyboard/Keypad Page (0x07)\nThis enumeration isn't a complete list, just the most commonly used keys." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeUnknown", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeUnknown },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeA", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeA },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeB", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeB },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeC", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeC },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeD", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeD },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeE", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeE },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeG", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeG },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeH", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeH },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeI", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeI },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeJ", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeJ },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeK", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeK },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeL", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeL },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeM", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeM },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeN", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeN },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeO", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeO },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeP", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeP },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeQ", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeQ },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeR", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeR },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeS", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeS },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeT", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeT },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeU", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeU },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeV", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeV },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeW", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeW },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeX", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeX },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeY", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeY },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeZ", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeZ },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancode1", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancode1 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancode2", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancode2 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancode3", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancode3 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancode4", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancode4 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancode5", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancode5 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancode6", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancode6 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancode7", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancode7 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancode8", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancode8 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancode9", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancode9 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancode0", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancode0 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeReturn", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeReturn },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeEscape", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeEscape },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeBackspace", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeBackspace },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeTab", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeTab },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeSpace", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeSpace },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeMinus", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeMinus },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeEquals", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeEquals },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftBracket", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftBracket },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeRightBracket", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeRightBracket },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeBackslash", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeBackslash },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeSemicolon", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeSemicolon },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeApostrophe", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeApostrophe },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeGrave", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeGrave },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeComma", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeComma },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodePeriod", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodePeriod },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeSlash", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeSlash },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeCapsLock", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeCapsLock },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF1", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF1 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF2", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF2 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF3", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF3 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF4", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF4 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF5", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF5 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF6", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF6 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF7", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF7 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF8", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF8 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF9", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF9 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF10", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF10 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF11", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF11 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeF12", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeF12 },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeInsert", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeInsert },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeHome", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeHome },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodePageUp", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodePageUp },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeDelete", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeDelete },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeEnd", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeEnd },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodePageDown", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodePageDown },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeRight", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeRight },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeLeft", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeLeft },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeDown", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeDown },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeUp", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeUp },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftControl", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftControl },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftShift", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftShift },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftAlt", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftAlt },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftGUI", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftGUI },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeRightControl", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeRightControl },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeRightShift", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeRightShift },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeRightALT", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeRightALT },
		{ "ESteamRemotePlayScancode::k_ERemotePlayScancodeRightGUI", (int64)ESteamRemotePlayScancode::k_ERemotePlayScancodeRightGUI },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayScancode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamRemotePlayScancode",
	"ESteamRemotePlayScancode",
	Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayScancode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayScancode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayScancode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayScancode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayScancode()
{
	if (!Z_Registration_Info_UEnum_ESteamRemotePlayScancode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamRemotePlayScancode.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayScancode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamRemotePlayScancode.InnerSingleton;
}
// End Enum ESteamRemotePlayScancode

// Begin Enum ESteamRemotePlayMouseWheelDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamRemotePlayMouseWheelDirection;
static UEnum* ESteamRemotePlayMouseWheelDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamRemotePlayMouseWheelDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamRemotePlayMouseWheelDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseWheelDirection, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamRemotePlayMouseWheelDirection"));
	}
	return Z_Registration_Info_UEnum_ESteamRemotePlayMouseWheelDirection.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamRemotePlayMouseWheelDirection>()
{
	return ESteamRemotePlayMouseWheelDirection_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseWheelDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//-----------------------------------------------------------------------------\n// Purpose: Mouse wheel direction in ERemotePlayInput_t\n//-----------------------------------------------------------------------------\n" },
		{ "k_ERemotePlayMouseWheelDown.Name", "ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelDown" },
		{ "k_ERemotePlayMouseWheelLeft.Name", "ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelLeft" },
		{ "k_ERemotePlayMouseWheelRight.Name", "ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelRight" },
		{ "k_ERemotePlayMouseWheelUp.Name", "ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelUp" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "NOT_SET.Name", "ESteamRemotePlayMouseWheelDirection::NOT_SET" },
		{ "ToolTip", "Purpose: Mouse wheel direction in ERemotePlayInput_t" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamRemotePlayMouseWheelDirection::NOT_SET", (int64)ESteamRemotePlayMouseWheelDirection::NOT_SET },
		{ "ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelUp", (int64)ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelUp },
		{ "ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelDown", (int64)ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelDown },
		{ "ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelLeft", (int64)ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelLeft },
		{ "ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelRight", (int64)ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseWheelDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamRemotePlayMouseWheelDirection",
	"ESteamRemotePlayMouseWheelDirection",
	Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseWheelDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseWheelDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseWheelDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseWheelDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseWheelDirection()
{
	if (!Z_Registration_Info_UEnum_ESteamRemotePlayMouseWheelDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamRemotePlayMouseWheelDirection.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseWheelDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamRemotePlayMouseWheelDirection.InnerSingleton;
}
// End Enum ESteamRemotePlayMouseWheelDirection

// Begin Enum ESteamRemotePlayMouseButton
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamRemotePlayMouseButton;
static UEnum* ESteamRemotePlayMouseButton_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamRemotePlayMouseButton.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamRemotePlayMouseButton.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseButton, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamRemotePlayMouseButton"));
	}
	return Z_Registration_Info_UEnum_ESteamRemotePlayMouseButton.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamRemotePlayMouseButton>()
{
	return ESteamRemotePlayMouseButton_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//-----------------------------------------------------------------------------\n// Purpose: Mouse buttons in ERemotePlayInput_t\n//-----------------------------------------------------------------------------\n" },
		{ "k_ERemotePlayMouseButtonLeft.Name", "ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonLeft" },
		{ "k_ERemotePlayMouseButtonMiddle.Name", "ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonMiddle" },
		{ "k_ERemotePlayMouseButtonRight.Name", "ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonRight" },
		{ "k_ERemotePlayMouseButtonX1.Name", "ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonX1" },
		{ "k_ERemotePlayMouseButtonX2.Name", "ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonX2" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "NOT_SET.Name", "ESteamRemotePlayMouseButton::NOT_SET" },
		{ "ToolTip", "Purpose: Mouse buttons in ERemotePlayInput_t" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamRemotePlayMouseButton::NOT_SET", (int64)ESteamRemotePlayMouseButton::NOT_SET },
		{ "ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonLeft", (int64)ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonLeft },
		{ "ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonRight", (int64)ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonRight },
		{ "ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonMiddle", (int64)ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonMiddle },
		{ "ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonX1", (int64)ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonX1 },
		{ "ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonX2", (int64)ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonX2 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseButton_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamRemotePlayMouseButton",
	"ESteamRemotePlayMouseButton",
	Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseButton_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseButton_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseButton_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseButton_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseButton()
{
	if (!Z_Registration_Info_UEnum_ESteamRemotePlayMouseButton.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamRemotePlayMouseButton.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseButton_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamRemotePlayMouseButton.InnerSingleton;
}
// End Enum ESteamRemotePlayMouseButton

// Begin Enum ESteamRemotePlayInputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamRemotePlayInputType;
static UEnum* ESteamRemotePlayInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamRemotePlayInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamRemotePlayInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayInputType, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamRemotePlayInputType"));
	}
	return Z_Registration_Info_UEnum_ESteamRemotePlayInputType.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamRemotePlayInputType>()
{
	return ESteamRemotePlayInputType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//-----------------------------------------------------------------------------\n// Purpose: The type of input in ERemotePlayInput_t\n//-----------------------------------------------------------------------------\n" },
		{ "k_ERemotePlayInputKeyDown.Name", "ESteamRemotePlayInputType::k_ERemotePlayInputKeyDown" },
		{ "k_ERemotePlayInputKeyUp.Name", "ESteamRemotePlayInputType::k_ERemotePlayInputKeyUp" },
		{ "k_ERemotePlayInputMouseButtonDown.Name", "ESteamRemotePlayInputType::k_ERemotePlayInputMouseButtonDown" },
		{ "k_ERemotePlayInputMouseButtonUp.Name", "ESteamRemotePlayInputType::k_ERemotePlayInputMouseButtonUp" },
		{ "k_ERemotePlayInputMouseMotion.Name", "ESteamRemotePlayInputType::k_ERemotePlayInputMouseMotion" },
		{ "k_ERemotePlayInputMouseWheel.Name", "ESteamRemotePlayInputType::k_ERemotePlayInputMouseWheel" },
		{ "k_ERemotePlayInputUnknown.Name", "ESteamRemotePlayInputType::k_ERemotePlayInputUnknown" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Purpose: The type of input in ERemotePlayInput_t" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamRemotePlayInputType::k_ERemotePlayInputUnknown", (int64)ESteamRemotePlayInputType::k_ERemotePlayInputUnknown },
		{ "ESteamRemotePlayInputType::k_ERemotePlayInputMouseMotion", (int64)ESteamRemotePlayInputType::k_ERemotePlayInputMouseMotion },
		{ "ESteamRemotePlayInputType::k_ERemotePlayInputMouseButtonDown", (int64)ESteamRemotePlayInputType::k_ERemotePlayInputMouseButtonDown },
		{ "ESteamRemotePlayInputType::k_ERemotePlayInputMouseButtonUp", (int64)ESteamRemotePlayInputType::k_ERemotePlayInputMouseButtonUp },
		{ "ESteamRemotePlayInputType::k_ERemotePlayInputMouseWheel", (int64)ESteamRemotePlayInputType::k_ERemotePlayInputMouseWheel },
		{ "ESteamRemotePlayInputType::k_ERemotePlayInputKeyDown", (int64)ESteamRemotePlayInputType::k_ERemotePlayInputKeyDown },
		{ "ESteamRemotePlayInputType::k_ERemotePlayInputKeyUp", (int64)ESteamRemotePlayInputType::k_ERemotePlayInputKeyUp },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamRemotePlayInputType",
	"ESteamRemotePlayInputType",
	Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayInputType()
{
	if (!Z_Registration_Info_UEnum_ESteamRemotePlayInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamRemotePlayInputType.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamRemotePlayInputType.InnerSingleton;
}
// End Enum ESteamRemotePlayInputType

// Begin Enum ESteamCoreProDeviceFormFactor
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor;
static UEnum* ESteamCoreProDeviceFormFactor_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreProDeviceFormFactor"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProDeviceFormFactor>()
{
	return ESteamCoreProDeviceFormFactor_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Computer.Name", "ESteamCoreProDeviceFormFactor::Computer" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "Phone.Name", "ESteamCoreProDeviceFormFactor::Phone" },
		{ "Tablet.Name", "ESteamCoreProDeviceFormFactor::Tablet" },
		{ "TV.Name", "ESteamCoreProDeviceFormFactor::TV" },
		{ "Unknown.Name", "ESteamCoreProDeviceFormFactor::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreProDeviceFormFactor::Unknown", (int64)ESteamCoreProDeviceFormFactor::Unknown },
		{ "ESteamCoreProDeviceFormFactor::Phone", (int64)ESteamCoreProDeviceFormFactor::Phone },
		{ "ESteamCoreProDeviceFormFactor::Tablet", (int64)ESteamCoreProDeviceFormFactor::Tablet },
		{ "ESteamCoreProDeviceFormFactor::Computer", (int64)ESteamCoreProDeviceFormFactor::Computer },
		{ "ESteamCoreProDeviceFormFactor::TV", (int64)ESteamCoreProDeviceFormFactor::TV },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreProDeviceFormFactor",
	"ESteamCoreProDeviceFormFactor",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor.InnerSingleton;
}
// End Enum ESteamCoreProDeviceFormFactor

// Begin ScriptStruct FRemotePlayInputKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemotePlayInputKey;
class UScriptStruct* FRemotePlayInputKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemotePlayInputKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemotePlayInputKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemotePlayInputKey, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemotePlayInputKey"));
	}
	return Z_Registration_Info_UScriptStruct_RemotePlayInputKey.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemotePlayInputKey>()
{
	return FRemotePlayInputKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Key event data, valid when m_eType is k_ERemotePlayInputKeyDown or k_ERemotePlayInputKeyUp\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Key event data, valid when m_eType is k_ERemotePlayInputKeyDown or k_ERemotePlayInputKeyUp" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scancode_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "Comment", "// Keyboard scancode, common values are defined in ERemotePlayScancode\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Keyboard scancode, common values are defined in ERemotePlayScancode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keycode_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "Comment", "// Mask of ERemotePlayKeyModifier active for this key event\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Mask of ERemotePlayKeyModifier active for this key event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Scancode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Keycode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemotePlayInputKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::NewProp_Scancode = { "Scancode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInputKey, Scancode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scancode_MetaData), NewProp_Scancode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInputKey, Modifiers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::NewProp_Keycode = { "Keycode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInputKey, Keycode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keycode_MetaData), NewProp_Keycode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::NewProp_Scancode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::NewProp_Keycode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemotePlayInputKey",
	Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::PropPointers),
	sizeof(FRemotePlayInputKey),
	alignof(FRemotePlayInputKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayInputKey()
{
	if (!Z_Registration_Info_UScriptStruct_RemotePlayInputKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemotePlayInputKey.InnerSingleton, Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemotePlayInputKey.InnerSingleton;
}
// End ScriptStruct FRemotePlayInputKey

// Begin ScriptStruct FRemotePlayInputMouseWheel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemotePlayInputMouseWheel;
class UScriptStruct* FRemotePlayInputMouseWheel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemotePlayInputMouseWheel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemotePlayInputMouseWheel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemotePlayInputMouseWheel"));
	}
	return Z_Registration_Info_UScriptStruct_RemotePlayInputMouseWheel.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemotePlayInputMouseWheel>()
{
	return FRemotePlayInputMouseWheel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Mouse wheel event data, valid when m_eType is k_ERemotePlayInputMouseWheel\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Mouse wheel event data, valid when m_eType is k_ERemotePlayInputMouseWheel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "Comment", "// 1.0f is a single click of the wheel, 120 units on Windows\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "1.0f is a single click of the wheel, 120 units on Windows" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemotePlayInputMouseWheel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInputMouseWheel, Direction), Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseWheelDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 1386965094
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInputMouseWheel, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemotePlayInputMouseWheel",
	Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::PropPointers),
	sizeof(FRemotePlayInputMouseWheel),
	alignof(FRemotePlayInputMouseWheel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel()
{
	if (!Z_Registration_Info_UScriptStruct_RemotePlayInputMouseWheel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemotePlayInputMouseWheel.InnerSingleton, Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemotePlayInputMouseWheel.InnerSingleton;
}
// End ScriptStruct FRemotePlayInputMouseWheel

// Begin ScriptStruct FRemotePlayInputMouseMotion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemotePlayInputMouseMotion;
class UScriptStruct* FRemotePlayInputMouseMotion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemotePlayInputMouseMotion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemotePlayInputMouseMotion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemotePlayInputMouseMotion"));
	}
	return Z_Registration_Info_UScriptStruct_RemotePlayInputMouseMotion.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemotePlayInputMouseMotion>()
{
	return FRemotePlayInputMouseMotion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Mouse motion event data, valid when m_eType is k_ERemotePlayInputMouseMotion\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Mouse motion event data, valid when m_eType is k_ERemotePlayInputMouseMotion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsolute_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "Comment", "// True if this is absolute mouse motion and m_flNormalizedX and m_flNormalizedY are valid\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "True if this is absolute mouse motion and m_flNormalizedX and m_flNormalizedY are valid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedX_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "Comment", "// The absolute X position of the mouse, normalized to the display, if m_bAbsolute is true\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "The absolute X position of the mouse, normalized to the display, if m_bAbsolute is true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedY_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "Comment", "// The absolute Y position of the mouse, normalized to the display, if m_bAbsolute is true\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "The absolute Y position of the mouse, normalized to the display, if m_bAbsolute is true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaX_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "Comment", "// Relative mouse motion in the X direction\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Relative mouse motion in the X direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaY_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "Comment", "// Relative mouse motion in the Y direction\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Relative mouse motion in the Y direction" },
	};
#endif // WITH_METADATA
	static void NewProp_bAbsolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeltaX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeltaY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemotePlayInputMouseMotion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewProp_bAbsolute_SetBit(void* Obj)
{
	((FRemotePlayInputMouseMotion*)Obj)->bAbsolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRemotePlayInputMouseMotion), &Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsolute_MetaData), NewProp_bAbsolute_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewProp_NormalizedX = { "NormalizedX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInputMouseMotion, NormalizedX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedX_MetaData), NewProp_NormalizedX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewProp_NormalizedY = { "NormalizedY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInputMouseMotion, NormalizedY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedY_MetaData), NewProp_NormalizedY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewProp_DeltaX = { "DeltaX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInputMouseMotion, DeltaX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaX_MetaData), NewProp_DeltaX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewProp_DeltaY = { "DeltaY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInputMouseMotion, DeltaY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaY_MetaData), NewProp_DeltaY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewProp_bAbsolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewProp_NormalizedX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewProp_NormalizedY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewProp_DeltaX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewProp_DeltaY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemotePlayInputMouseMotion",
	Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::PropPointers),
	sizeof(FRemotePlayInputMouseMotion),
	alignof(FRemotePlayInputMouseMotion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion()
{
	if (!Z_Registration_Info_UScriptStruct_RemotePlayInputMouseMotion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemotePlayInputMouseMotion.InnerSingleton, Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemotePlayInputMouseMotion.InnerSingleton;
}
// End ScriptStruct FRemotePlayInputMouseMotion

// Begin ScriptStruct FSteamRemotePlaySessionConnected
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected;
class UScriptStruct* FSteamRemotePlaySessionConnected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamRemotePlaySessionConnected"));
	}
	return Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamRemotePlaySessionConnected>()
{
	return FSteamRemotePlaySessionConnected::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamRemotePlaySessionConnected>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamRemotePlaySessionConnected, SessionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionID_MetaData), NewProp_SessionID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamRemotePlaySessionConnected",
	Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers),
	sizeof(FSteamRemotePlaySessionConnected),
	alignof(FSteamRemotePlaySessionConnected),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected()
{
	if (!Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.InnerSingleton, Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.InnerSingleton;
}
// End ScriptStruct FSteamRemotePlaySessionConnected

// Begin ScriptStruct FSteamRemotePlaySessionDisconnected
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected;
class UScriptStruct* FSteamRemotePlaySessionDisconnected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamRemotePlaySessionDisconnected"));
	}
	return Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamRemotePlaySessionDisconnected>()
{
	return FSteamRemotePlaySessionDisconnected::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamRemotePlaySessionDisconnected>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamRemotePlaySessionDisconnected, SessionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionID_MetaData), NewProp_SessionID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamRemotePlaySessionDisconnected",
	Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers),
	sizeof(FSteamRemotePlaySessionDisconnected),
	alignof(FSteamRemotePlaySessionDisconnected),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected()
{
	if (!Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.InnerSingleton, Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.InnerSingleton;
}
// End ScriptStruct FSteamRemotePlaySessionDisconnected

// Begin ScriptStruct FRemotePlaySessionID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemotePlaySessionID;
class UScriptStruct* FRemotePlaySessionID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemotePlaySessionID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemotePlaySessionID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemotePlaySessionID, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemotePlaySessionID"));
	}
	return Z_Registration_Info_UScriptStruct_RemotePlaySessionID.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemotePlaySessionID>()
{
	return FRemotePlaySessionID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Steam Remote Play session ID\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Steam Remote Play session ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemotePlaySessionID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlaySessionID, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemotePlaySessionID",
	Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics::PropPointers),
	sizeof(FRemotePlaySessionID),
	alignof(FRemotePlaySessionID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemotePlaySessionID()
{
	if (!Z_Registration_Info_UScriptStruct_RemotePlaySessionID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemotePlaySessionID.InnerSingleton, Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemotePlaySessionID.InnerSingleton;
}
// End ScriptStruct FRemotePlaySessionID

// Begin ScriptStruct FRemotePlayInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemotePlayInput;
class UScriptStruct* FRemotePlayInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemotePlayInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemotePlayInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemotePlayInput, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemotePlayInput"));
	}
	return Z_Registration_Info_UScriptStruct_RemotePlayInput.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemotePlayInput>()
{
	return FRemotePlayInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemotePlayInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseMotion_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "Comment", "// Mouse motion event data, valid when m_eType is k_ERemotePlayInputMouseMotion\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Mouse motion event data, valid when m_eType is k_ERemotePlayInputMouseMotion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseButton_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "Comment", "// Mouse button event data, valid when m_eType is k_ERemotePlayInputMouseButtonDown or k_ERemotePlayInputMouseButtonUp\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Mouse button event data, valid when m_eType is k_ERemotePlayInputMouseButtonDown or k_ERemotePlayInputMouseButtonUp" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseWheel_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "Comment", "// Mouse wheel event data, valid when m_eType is k_ERemotePlayInputMouseWheel\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Mouse wheel event data, valid when m_eType is k_ERemotePlayInputMouseWheel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "Comment", "// Key event data, valid when m_eType is k_ERemotePlayInputKeyDown or k_ERemotePlayInputKeyUp\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Key event data, valid when m_eType is k_ERemotePlayInputKeyDown or k_ERemotePlayInputKeyUp" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseMotion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MouseButton_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MouseButton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseWheel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemotePlayInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInput, SessionID), Z_Construct_UScriptStruct_FRemotePlaySessionID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionID_MetaData), NewProp_SessionID_MetaData) }; // 711577021
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInput, Type), Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2603065799
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_MouseMotion = { "MouseMotion", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInput, MouseMotion), Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseMotion_MetaData), NewProp_MouseMotion_MetaData) }; // 3609022807
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_MouseButton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_MouseButton = { "MouseButton", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInput, MouseButton), Z_Construct_UEnum_SteamCorePro_ESteamRemotePlayMouseButton, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseButton_MetaData), NewProp_MouseButton_MetaData) }; // 3000075943
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_MouseWheel = { "MouseWheel", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInput, MouseWheel), Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseWheel_MetaData), NewProp_MouseWheel_MetaData) }; // 846277165
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayInput, Key), Z_Construct_UScriptStruct_FRemotePlayInputKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 4254172496
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemotePlayInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_MouseMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_MouseButton_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_MouseButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_MouseWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemotePlayInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemotePlayInput",
	Z_Construct_UScriptStruct_FRemotePlayInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayInput_Statics::PropPointers),
	sizeof(FRemotePlayInput),
	alignof(FRemotePlayInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemotePlayInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayInput()
{
	if (!Z_Registration_Info_UScriptStruct_RemotePlayInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemotePlayInput.InnerSingleton, Z_Construct_UScriptStruct_FRemotePlayInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemotePlayInput.InnerSingleton;
}
// End ScriptStruct FRemotePlayInput

// Begin ScriptStruct FRemotePlayCursorID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemotePlayCursorID;
class UScriptStruct* FRemotePlayCursorID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemotePlayCursorID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemotePlayCursorID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemotePlayCursorID, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemotePlayCursorID"));
	}
	return Z_Registration_Info_UScriptStruct_RemotePlayCursorID.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemotePlayCursorID>()
{
	return FRemotePlayCursorID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Steam Remote Play mouse cursor ID\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "Steam Remote Play mouse cursor ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemotePlayCursorID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemotePlayCursorID, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemotePlayCursorID",
	Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics::PropPointers),
	sizeof(FRemotePlayCursorID),
	alignof(FRemotePlayCursorID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayCursorID()
{
	if (!Z_Registration_Info_UScriptStruct_RemotePlayCursorID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemotePlayCursorID.InnerSingleton, Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemotePlayCursorID.InnerSingleton;
}
// End ScriptStruct FRemotePlayCursorID

// Begin Delegate FOnSteamRemotePlaySessionConnected
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamRemotePlaySessionConnected_Parms
	{
		FSteamRemotePlaySessionConnected Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamRemotePlaySessionConnected_Parms, Data), Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 139214045
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamRemotePlaySessionConnected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamRemotePlaySessionConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamRemotePlaySessionConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamRemotePlaySessionConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionConnected, FSteamRemotePlaySessionConnected const& Data)
{
	struct _Script_SteamCorePro_eventOnSteamRemotePlaySessionConnected_Parms
	{
		FSteamRemotePlaySessionConnected Data;
	};
	_Script_SteamCorePro_eventOnSteamRemotePlaySessionConnected_Parms Parms;
	Parms.Data=Data;
	OnSteamRemotePlaySessionConnected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamRemotePlaySessionConnected

// Begin Delegate FOnSteamRemotePlaySessionDisconnected
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamRemotePlaySessionDisconnected_Parms
	{
		FSteamRemotePlaySessionDisconnected Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamRemotePlaySessionDisconnected_Parms, Data), Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3615686471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamRemotePlaySessionDisconnected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamRemotePlaySessionDisconnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamRemotePlaySessionDisconnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamRemotePlaySessionDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionDisconnected, FSteamRemotePlaySessionDisconnected const& Data)
{
	struct _Script_SteamCorePro_eventOnSteamRemotePlaySessionDisconnected_Parms
	{
		FSteamRemotePlaySessionDisconnected Data;
	};
	_Script_SteamCorePro_eventOnSteamRemotePlaySessionDisconnected_Parms Parms;
	Parms.Data=Data;
	OnSteamRemotePlaySessionDisconnected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamRemotePlaySessionDisconnected

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamRemotePlayKeyModifier_StaticEnum, TEXT("ESteamRemotePlayKeyModifier"), &Z_Registration_Info_UEnum_ESteamRemotePlayKeyModifier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1905473408U) },
		{ ESteamRemotePlayScancode_StaticEnum, TEXT("ESteamRemotePlayScancode"), &Z_Registration_Info_UEnum_ESteamRemotePlayScancode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2454693891U) },
		{ ESteamRemotePlayMouseWheelDirection_StaticEnum, TEXT("ESteamRemotePlayMouseWheelDirection"), &Z_Registration_Info_UEnum_ESteamRemotePlayMouseWheelDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1386965094U) },
		{ ESteamRemotePlayMouseButton_StaticEnum, TEXT("ESteamRemotePlayMouseButton"), &Z_Registration_Info_UEnum_ESteamRemotePlayMouseButton, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3000075943U) },
		{ ESteamRemotePlayInputType_StaticEnum, TEXT("ESteamRemotePlayInputType"), &Z_Registration_Info_UEnum_ESteamRemotePlayInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2603065799U) },
		{ ESteamCoreProDeviceFormFactor_StaticEnum, TEXT("ESteamCoreProDeviceFormFactor"), &Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 642209036U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRemotePlayInputKey::StaticStruct, Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics::NewStructOps, TEXT("RemotePlayInputKey"), &Z_Registration_Info_UScriptStruct_RemotePlayInputKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemotePlayInputKey), 4254172496U) },
		{ FRemotePlayInputMouseWheel::StaticStruct, Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics::NewStructOps, TEXT("RemotePlayInputMouseWheel"), &Z_Registration_Info_UScriptStruct_RemotePlayInputMouseWheel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemotePlayInputMouseWheel), 846277165U) },
		{ FRemotePlayInputMouseMotion::StaticStruct, Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics::NewStructOps, TEXT("RemotePlayInputMouseMotion"), &Z_Registration_Info_UScriptStruct_RemotePlayInputMouseMotion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemotePlayInputMouseMotion), 3609022807U) },
		{ FSteamRemotePlaySessionConnected::StaticStruct, Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewStructOps, TEXT("SteamRemotePlaySessionConnected"), &Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamRemotePlaySessionConnected), 139214045U) },
		{ FSteamRemotePlaySessionDisconnected::StaticStruct, Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewStructOps, TEXT("SteamRemotePlaySessionDisconnected"), &Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamRemotePlaySessionDisconnected), 3615686471U) },
		{ FRemotePlaySessionID::StaticStruct, Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics::NewStructOps, TEXT("RemotePlaySessionID"), &Z_Registration_Info_UScriptStruct_RemotePlaySessionID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemotePlaySessionID), 711577021U) },
		{ FRemotePlayInput::StaticStruct, Z_Construct_UScriptStruct_FRemotePlayInput_Statics::NewStructOps, TEXT("RemotePlayInput"), &Z_Registration_Info_UScriptStruct_RemotePlayInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemotePlayInput), 3349264853U) },
		{ FRemotePlayCursorID::StaticStruct, Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics::NewStructOps, TEXT("RemotePlayCursorID"), &Z_Registration_Info_UScriptStruct_RemotePlayCursorID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemotePlayCursorID), 1782993331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_227999853(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
