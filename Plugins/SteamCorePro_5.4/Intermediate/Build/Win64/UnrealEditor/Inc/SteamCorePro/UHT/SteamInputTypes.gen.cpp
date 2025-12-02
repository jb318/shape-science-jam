// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamInput/SteamInputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInputTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_EScePadTriggerEffectMode();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreInputConfigurationEnableType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputGlyphSize();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputLEDFlag();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSource();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSourceMode();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectCommand();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamCoreProInputGlyphSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreProInputGlyphSize;
static UEnum* ESteamCoreProInputGlyphSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProInputGlyphSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreProInputGlyphSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputGlyphSize, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreProInputGlyphSize"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreProInputGlyphSize.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProInputGlyphSize>()
{
	return ESteamCoreProInputGlyphSize_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputGlyphSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "k_ESteamInputGlyphSize_Count.Comment", "// 256x256 pixels\n" },
		{ "k_ESteamInputGlyphSize_Count.Name", "ESteamCoreProInputGlyphSize::k_ESteamInputGlyphSize_Count" },
		{ "k_ESteamInputGlyphSize_Count.ToolTip", "256x256 pixels" },
		{ "k_ESteamInputGlyphSize_Large.Comment", "// 128x128 pixels\n" },
		{ "k_ESteamInputGlyphSize_Large.Name", "ESteamCoreProInputGlyphSize::k_ESteamInputGlyphSize_Large" },
		{ "k_ESteamInputGlyphSize_Large.ToolTip", "128x128 pixels" },
		{ "k_ESteamInputGlyphSize_Medium.Comment", "// 32x32 pixels\n" },
		{ "k_ESteamInputGlyphSize_Medium.Name", "ESteamCoreProInputGlyphSize::k_ESteamInputGlyphSize_Medium" },
		{ "k_ESteamInputGlyphSize_Medium.ToolTip", "32x32 pixels" },
		{ "k_ESteamInputGlyphSize_Small.Name", "ESteamCoreProInputGlyphSize::k_ESteamInputGlyphSize_Small" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreProInputGlyphSize::k_ESteamInputGlyphSize_Small", (int64)ESteamCoreProInputGlyphSize::k_ESteamInputGlyphSize_Small },
		{ "ESteamCoreProInputGlyphSize::k_ESteamInputGlyphSize_Medium", (int64)ESteamCoreProInputGlyphSize::k_ESteamInputGlyphSize_Medium },
		{ "ESteamCoreProInputGlyphSize::k_ESteamInputGlyphSize_Large", (int64)ESteamCoreProInputGlyphSize::k_ESteamInputGlyphSize_Large },
		{ "ESteamCoreProInputGlyphSize::k_ESteamInputGlyphSize_Count", (int64)ESteamCoreProInputGlyphSize::k_ESteamInputGlyphSize_Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputGlyphSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreProInputGlyphSize",
	"ESteamCoreProInputGlyphSize",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputGlyphSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputGlyphSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputGlyphSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputGlyphSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputGlyphSize()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProInputGlyphSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreProInputGlyphSize.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputGlyphSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreProInputGlyphSize.InnerSingleton;
}
// End Enum ESteamCoreProInputGlyphSize

// Begin Enum ESteamCoreProInputSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreProInputSource;
static UEnum* ESteamCoreProInputSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProInputSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreProInputSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSource, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreProInputSource"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreProInputSource.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProInputSource>()
{
	return ESteamCoreProInputSource_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ABXY.Name", "ESteamCoreProInputSource::ABXY" },
		{ "BlueprintType", "true" },
		{ "CenterTrackpad.Name", "ESteamCoreProInputSource::CenterTrackpad" },
		{ "Count.Name", "ESteamCoreProInputSource::Count" },
		{ "DPad.Name", "ESteamCoreProInputSource::DPad" },
		{ "Gyro.Name", "ESteamCoreProInputSource::Gyro" },
		{ "Joystick.Name", "ESteamCoreProInputSource::Joystick" },
		{ "Key.Name", "ESteamCoreProInputSource::Key" },
		{ "LeftBumper.Name", "ESteamCoreProInputSource::LeftBumper" },
		{ "LeftGyro.Name", "ESteamCoreProInputSource::LeftGyro" },
		{ "LeftTrackpad.Name", "ESteamCoreProInputSource::LeftTrackpad" },
		{ "LeftTrigger.Name", "ESteamCoreProInputSource::LeftTrigger" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "Mouse.Name", "ESteamCoreProInputSource::Mouse" },
		{ "None.Name", "ESteamCoreProInputSource::None" },
		{ "RightBumper.Name", "ESteamCoreProInputSource::RightBumper" },
		{ "RightJoystick.Name", "ESteamCoreProInputSource::RightJoystick" },
		{ "RightTrackpad.Name", "ESteamCoreProInputSource::RightTrackpad" },
		{ "RightTrigger.Name", "ESteamCoreProInputSource::RightTrigger" },
		{ "Switch.Name", "ESteamCoreProInputSource::Switch" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreProInputSource::None", (int64)ESteamCoreProInputSource::None },
		{ "ESteamCoreProInputSource::LeftTrackpad", (int64)ESteamCoreProInputSource::LeftTrackpad },
		{ "ESteamCoreProInputSource::RightTrackpad", (int64)ESteamCoreProInputSource::RightTrackpad },
		{ "ESteamCoreProInputSource::Joystick", (int64)ESteamCoreProInputSource::Joystick },
		{ "ESteamCoreProInputSource::ABXY", (int64)ESteamCoreProInputSource::ABXY },
		{ "ESteamCoreProInputSource::Switch", (int64)ESteamCoreProInputSource::Switch },
		{ "ESteamCoreProInputSource::LeftTrigger", (int64)ESteamCoreProInputSource::LeftTrigger },
		{ "ESteamCoreProInputSource::RightTrigger", (int64)ESteamCoreProInputSource::RightTrigger },
		{ "ESteamCoreProInputSource::LeftBumper", (int64)ESteamCoreProInputSource::LeftBumper },
		{ "ESteamCoreProInputSource::RightBumper", (int64)ESteamCoreProInputSource::RightBumper },
		{ "ESteamCoreProInputSource::Gyro", (int64)ESteamCoreProInputSource::Gyro },
		{ "ESteamCoreProInputSource::CenterTrackpad", (int64)ESteamCoreProInputSource::CenterTrackpad },
		{ "ESteamCoreProInputSource::RightJoystick", (int64)ESteamCoreProInputSource::RightJoystick },
		{ "ESteamCoreProInputSource::DPad", (int64)ESteamCoreProInputSource::DPad },
		{ "ESteamCoreProInputSource::Key", (int64)ESteamCoreProInputSource::Key },
		{ "ESteamCoreProInputSource::Mouse", (int64)ESteamCoreProInputSource::Mouse },
		{ "ESteamCoreProInputSource::LeftGyro", (int64)ESteamCoreProInputSource::LeftGyro },
		{ "ESteamCoreProInputSource::Count", (int64)ESteamCoreProInputSource::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreProInputSource",
	"ESteamCoreProInputSource",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSource()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProInputSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreProInputSource.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreProInputSource.InnerSingleton;
}
// End Enum ESteamCoreProInputSource

// Begin Enum ESteamCoreProInputSourceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreProInputSourceMode;
static UEnum* ESteamCoreProInputSourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProInputSourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreProInputSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSourceMode, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreProInputSourceMode"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreProInputSourceMode.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProInputSourceMode>()
{
	return ESteamCoreProInputSourceMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbsoluteMouse.Name", "ESteamCoreProInputSourceMode::AbsoluteMouse" },
		{ "BlueprintType", "true" },
		{ "Buttons.Name", "ESteamCoreProInputSourceMode::Buttons" },
		{ "Dpad.Name", "ESteamCoreProInputSourceMode::Dpad" },
		{ "FourButtons.Name", "ESteamCoreProInputSourceMode::FourButtons" },
		{ "JoystickCamera.Name", "ESteamCoreProInputSourceMode::JoystickCamera" },
		{ "JoystickMouse.Name", "ESteamCoreProInputSourceMode::JoystickMouse" },
		{ "JoystickMove.Name", "ESteamCoreProInputSourceMode::JoystickMove" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "MouseJoystick.Name", "ESteamCoreProInputSourceMode::MouseJoystick" },
		{ "MouseRegion.Name", "ESteamCoreProInputSourceMode::MouseRegion" },
		{ "None.Name", "ESteamCoreProInputSourceMode::None" },
		{ "RadialMenu.Name", "ESteamCoreProInputSourceMode::RadialMenu" },
		{ "RelativeMouse.Name", "ESteamCoreProInputSourceMode::RelativeMouse" },
		{ "ScrollWheel.Name", "ESteamCoreProInputSourceMode::ScrollWheel" },
		{ "SingleButton.Name", "ESteamCoreProInputSourceMode::SingleButton" },
		{ "Switches.Name", "ESteamCoreProInputSourceMode::Switches" },
		{ "TouchMenu.Name", "ESteamCoreProInputSourceMode::TouchMenu" },
		{ "Trigger.Name", "ESteamCoreProInputSourceMode::Trigger" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreProInputSourceMode::None", (int64)ESteamCoreProInputSourceMode::None },
		{ "ESteamCoreProInputSourceMode::Dpad", (int64)ESteamCoreProInputSourceMode::Dpad },
		{ "ESteamCoreProInputSourceMode::Buttons", (int64)ESteamCoreProInputSourceMode::Buttons },
		{ "ESteamCoreProInputSourceMode::FourButtons", (int64)ESteamCoreProInputSourceMode::FourButtons },
		{ "ESteamCoreProInputSourceMode::AbsoluteMouse", (int64)ESteamCoreProInputSourceMode::AbsoluteMouse },
		{ "ESteamCoreProInputSourceMode::RelativeMouse", (int64)ESteamCoreProInputSourceMode::RelativeMouse },
		{ "ESteamCoreProInputSourceMode::JoystickMove", (int64)ESteamCoreProInputSourceMode::JoystickMove },
		{ "ESteamCoreProInputSourceMode::JoystickMouse", (int64)ESteamCoreProInputSourceMode::JoystickMouse },
		{ "ESteamCoreProInputSourceMode::JoystickCamera", (int64)ESteamCoreProInputSourceMode::JoystickCamera },
		{ "ESteamCoreProInputSourceMode::ScrollWheel", (int64)ESteamCoreProInputSourceMode::ScrollWheel },
		{ "ESteamCoreProInputSourceMode::Trigger", (int64)ESteamCoreProInputSourceMode::Trigger },
		{ "ESteamCoreProInputSourceMode::TouchMenu", (int64)ESteamCoreProInputSourceMode::TouchMenu },
		{ "ESteamCoreProInputSourceMode::MouseJoystick", (int64)ESteamCoreProInputSourceMode::MouseJoystick },
		{ "ESteamCoreProInputSourceMode::MouseRegion", (int64)ESteamCoreProInputSourceMode::MouseRegion },
		{ "ESteamCoreProInputSourceMode::RadialMenu", (int64)ESteamCoreProInputSourceMode::RadialMenu },
		{ "ESteamCoreProInputSourceMode::SingleButton", (int64)ESteamCoreProInputSourceMode::SingleButton },
		{ "ESteamCoreProInputSourceMode::Switches", (int64)ESteamCoreProInputSourceMode::Switches },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreProInputSourceMode",
	"ESteamCoreProInputSourceMode",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSourceMode()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProInputSourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreProInputSourceMode.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreProInputSourceMode.InnerSingleton;
}
// End Enum ESteamCoreProInputSourceMode

// Begin Enum ESteamCoreProXboxOrigin
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreProXboxOrigin;
static UEnum* ESteamCoreProXboxOrigin_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProXboxOrigin.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreProXboxOrigin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreProXboxOrigin"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreProXboxOrigin.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProXboxOrigin>()
{
	return ESteamCoreProXboxOrigin_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "A.Name", "ESteamCoreProXboxOrigin::A" },
		{ "B.Name", "ESteamCoreProXboxOrigin::B" },
		{ "BlueprintType", "true" },
		{ "Count.Name", "ESteamCoreProXboxOrigin::Count" },
		{ "DPad_East.Name", "ESteamCoreProXboxOrigin::DPad_East" },
		{ "DPad_North.Name", "ESteamCoreProXboxOrigin::DPad_North" },
		{ "DPad_South.Name", "ESteamCoreProXboxOrigin::DPad_South" },
		{ "DPad_West.Name", "ESteamCoreProXboxOrigin::DPad_West" },
		{ "LeftBumper.Name", "ESteamCoreProXboxOrigin::LeftBumper" },
		{ "LeftStick_Click.Name", "ESteamCoreProXboxOrigin::LeftStick_Click" },
		{ "LeftStick_DPadEast.Name", "ESteamCoreProXboxOrigin::LeftStick_DPadEast" },
		{ "LeftStick_DPadNorth.Name", "ESteamCoreProXboxOrigin::LeftStick_DPadNorth" },
		{ "LeftStick_DPadSouth.Name", "ESteamCoreProXboxOrigin::LeftStick_DPadSouth" },
		{ "LeftStick_DPadWest.Name", "ESteamCoreProXboxOrigin::LeftStick_DPadWest" },
		{ "LeftStick_Move.Name", "ESteamCoreProXboxOrigin::LeftStick_Move" },
		{ "LeftTrigger_Click.Name", "ESteamCoreProXboxOrigin::LeftTrigger_Click" },
		{ "LeftTrigger_Pull.Name", "ESteamCoreProXboxOrigin::LeftTrigger_Pull" },
		{ "Menu.Name", "ESteamCoreProXboxOrigin::Menu" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "RightBumper.Name", "ESteamCoreProXboxOrigin::RightBumper" },
		{ "RightStick_Click.Name", "ESteamCoreProXboxOrigin::RightStick_Click" },
		{ "RightStick_DPadEast.Name", "ESteamCoreProXboxOrigin::RightStick_DPadEast" },
		{ "RightStick_DPadNorth.Name", "ESteamCoreProXboxOrigin::RightStick_DPadNorth" },
		{ "RightStick_DPadSouth.Name", "ESteamCoreProXboxOrigin::RightStick_DPadSouth" },
		{ "RightStick_DPadWest.Name", "ESteamCoreProXboxOrigin::RightStick_DPadWest" },
		{ "RightStick_Move.Name", "ESteamCoreProXboxOrigin::RightStick_Move" },
		{ "RightTrigger_Click.Name", "ESteamCoreProXboxOrigin::RightTrigger_Click" },
		{ "RightTrigger_Pull.Name", "ESteamCoreProXboxOrigin::RightTrigger_Pull" },
		{ "View.Name", "ESteamCoreProXboxOrigin::View" },
		{ "X.Name", "ESteamCoreProXboxOrigin::X" },
		{ "Y.Name", "ESteamCoreProXboxOrigin::Y" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreProXboxOrigin::A", (int64)ESteamCoreProXboxOrigin::A },
		{ "ESteamCoreProXboxOrigin::B", (int64)ESteamCoreProXboxOrigin::B },
		{ "ESteamCoreProXboxOrigin::X", (int64)ESteamCoreProXboxOrigin::X },
		{ "ESteamCoreProXboxOrigin::Y", (int64)ESteamCoreProXboxOrigin::Y },
		{ "ESteamCoreProXboxOrigin::LeftBumper", (int64)ESteamCoreProXboxOrigin::LeftBumper },
		{ "ESteamCoreProXboxOrigin::RightBumper", (int64)ESteamCoreProXboxOrigin::RightBumper },
		{ "ESteamCoreProXboxOrigin::Menu", (int64)ESteamCoreProXboxOrigin::Menu },
		{ "ESteamCoreProXboxOrigin::View", (int64)ESteamCoreProXboxOrigin::View },
		{ "ESteamCoreProXboxOrigin::LeftTrigger_Pull", (int64)ESteamCoreProXboxOrigin::LeftTrigger_Pull },
		{ "ESteamCoreProXboxOrigin::LeftTrigger_Click", (int64)ESteamCoreProXboxOrigin::LeftTrigger_Click },
		{ "ESteamCoreProXboxOrigin::RightTrigger_Pull", (int64)ESteamCoreProXboxOrigin::RightTrigger_Pull },
		{ "ESteamCoreProXboxOrigin::RightTrigger_Click", (int64)ESteamCoreProXboxOrigin::RightTrigger_Click },
		{ "ESteamCoreProXboxOrigin::LeftStick_Move", (int64)ESteamCoreProXboxOrigin::LeftStick_Move },
		{ "ESteamCoreProXboxOrigin::LeftStick_Click", (int64)ESteamCoreProXboxOrigin::LeftStick_Click },
		{ "ESteamCoreProXboxOrigin::LeftStick_DPadNorth", (int64)ESteamCoreProXboxOrigin::LeftStick_DPadNorth },
		{ "ESteamCoreProXboxOrigin::LeftStick_DPadSouth", (int64)ESteamCoreProXboxOrigin::LeftStick_DPadSouth },
		{ "ESteamCoreProXboxOrigin::LeftStick_DPadWest", (int64)ESteamCoreProXboxOrigin::LeftStick_DPadWest },
		{ "ESteamCoreProXboxOrigin::LeftStick_DPadEast", (int64)ESteamCoreProXboxOrigin::LeftStick_DPadEast },
		{ "ESteamCoreProXboxOrigin::RightStick_Move", (int64)ESteamCoreProXboxOrigin::RightStick_Move },
		{ "ESteamCoreProXboxOrigin::RightStick_Click", (int64)ESteamCoreProXboxOrigin::RightStick_Click },
		{ "ESteamCoreProXboxOrigin::RightStick_DPadNorth", (int64)ESteamCoreProXboxOrigin::RightStick_DPadNorth },
		{ "ESteamCoreProXboxOrigin::RightStick_DPadSouth", (int64)ESteamCoreProXboxOrigin::RightStick_DPadSouth },
		{ "ESteamCoreProXboxOrigin::RightStick_DPadWest", (int64)ESteamCoreProXboxOrigin::RightStick_DPadWest },
		{ "ESteamCoreProXboxOrigin::RightStick_DPadEast", (int64)ESteamCoreProXboxOrigin::RightStick_DPadEast },
		{ "ESteamCoreProXboxOrigin::DPad_North", (int64)ESteamCoreProXboxOrigin::DPad_North },
		{ "ESteamCoreProXboxOrigin::DPad_South", (int64)ESteamCoreProXboxOrigin::DPad_South },
		{ "ESteamCoreProXboxOrigin::DPad_West", (int64)ESteamCoreProXboxOrigin::DPad_West },
		{ "ESteamCoreProXboxOrigin::DPad_East", (int64)ESteamCoreProXboxOrigin::DPad_East },
		{ "ESteamCoreProXboxOrigin::Count", (int64)ESteamCoreProXboxOrigin::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreProXboxOrigin",
	"ESteamCoreProXboxOrigin",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProXboxOrigin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreProXboxOrigin.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreProXboxOrigin.InnerSingleton;
}
// End Enum ESteamCoreProXboxOrigin

// Begin Enum ESteamCoreProControllerPad
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreProControllerPad;
static UEnum* ESteamCoreProControllerPad_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProControllerPad.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreProControllerPad.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreProControllerPad"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreProControllerPad.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProControllerPad>()
{
	return ESteamCoreProControllerPad_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "ESteamCoreProControllerPad::Left" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "Right.Name", "ESteamCoreProControllerPad::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreProControllerPad::Left", (int64)ESteamCoreProControllerPad::Left },
		{ "ESteamCoreProControllerPad::Right", (int64)ESteamCoreProControllerPad::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreProControllerPad",
	"ESteamCoreProControllerPad",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProControllerPad.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreProControllerPad.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreProControllerPad.InnerSingleton;
}
// End Enum ESteamCoreProControllerPad

// Begin Enum ESteamCoreProInputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreProInputType;
static UEnum* ESteamCoreProInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreProInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreProInputType"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreProInputType.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProInputType>()
{
	return ESteamCoreProInputType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AndroidController.Comment", "// Unused\n" },
		{ "AndroidController.Name", "ESteamCoreProInputType::AndroidController" },
		{ "AndroidController.ToolTip", "Unused" },
		{ "AppleMFiController.Name", "ESteamCoreProInputType::AppleMFiController" },
		{ "BlueprintType", "true" },
		{ "Count.Comment", "// Added in SDK 153\n" },
		{ "Count.Name", "ESteamCoreProInputType::Count" },
		{ "Count.ToolTip", "Added in SDK 153" },
		{ "GenericGamepad.Name", "ESteamCoreProInputType::GenericGamepad" },
		{ "MaximumPossibleValue.Name", "ESteamCoreProInputType::MaximumPossibleValue" },
		{ "MobileTouch.Name", "ESteamCoreProInputType::MobileTouch" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "PS3Controller.Comment", "// Steam Link App On-screen Virtual Controller\n" },
		{ "PS3Controller.Name", "ESteamCoreProInputType::PS3Controller" },
		{ "PS3Controller.ToolTip", "Steam Link App On-screen Virtual Controller" },
		{ "PS4Controller.Comment", "// DirectInput controllers\n" },
		{ "PS4Controller.Name", "ESteamCoreProInputType::PS4Controller" },
		{ "PS4Controller.ToolTip", "DirectInput controllers" },
		{ "PS5Controller.Comment", "// Currently uses PS4 Origins\n" },
		{ "PS5Controller.Name", "ESteamCoreProInputType::PS5Controller" },
		{ "PS5Controller.ToolTip", "Currently uses PS4 Origins" },
		{ "SteamController.Name", "ESteamCoreProInputType::SteamController" },
		{ "SteamDeckController.Comment", "// Added in SDK 151\n" },
		{ "SteamDeckController.Name", "ESteamCoreProInputType::SteamDeckController" },
		{ "SteamDeckController.ToolTip", "Added in SDK 151" },
		{ "SwitchJoyConPair.Comment", "// Unused\n" },
		{ "SwitchJoyConPair.Name", "ESteamCoreProInputType::SwitchJoyConPair" },
		{ "SwitchJoyConPair.ToolTip", "Unused" },
		{ "SwitchJoyConSingle.Comment", "// Unused\n" },
		{ "SwitchJoyConSingle.Name", "ESteamCoreProInputType::SwitchJoyConSingle" },
		{ "SwitchJoyConSingle.ToolTip", "Unused" },
		{ "SwitchProController.Comment", "// Unused\n" },
		{ "SwitchProController.Name", "ESteamCoreProInputType::SwitchProController" },
		{ "SwitchProController.ToolTip", "Unused" },
		{ "Unknown.Name", "ESteamCoreProInputType::Unknown" },
		{ "XBox360Controller.Name", "ESteamCoreProInputType::XBox360Controller" },
		{ "XBoxOneController.Name", "ESteamCoreProInputType::XBoxOneController" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreProInputType::Unknown", (int64)ESteamCoreProInputType::Unknown },
		{ "ESteamCoreProInputType::SteamController", (int64)ESteamCoreProInputType::SteamController },
		{ "ESteamCoreProInputType::XBox360Controller", (int64)ESteamCoreProInputType::XBox360Controller },
		{ "ESteamCoreProInputType::XBoxOneController", (int64)ESteamCoreProInputType::XBoxOneController },
		{ "ESteamCoreProInputType::GenericGamepad", (int64)ESteamCoreProInputType::GenericGamepad },
		{ "ESteamCoreProInputType::PS4Controller", (int64)ESteamCoreProInputType::PS4Controller },
		{ "ESteamCoreProInputType::AppleMFiController", (int64)ESteamCoreProInputType::AppleMFiController },
		{ "ESteamCoreProInputType::AndroidController", (int64)ESteamCoreProInputType::AndroidController },
		{ "ESteamCoreProInputType::SwitchJoyConPair", (int64)ESteamCoreProInputType::SwitchJoyConPair },
		{ "ESteamCoreProInputType::SwitchJoyConSingle", (int64)ESteamCoreProInputType::SwitchJoyConSingle },
		{ "ESteamCoreProInputType::SwitchProController", (int64)ESteamCoreProInputType::SwitchProController },
		{ "ESteamCoreProInputType::MobileTouch", (int64)ESteamCoreProInputType::MobileTouch },
		{ "ESteamCoreProInputType::PS3Controller", (int64)ESteamCoreProInputType::PS3Controller },
		{ "ESteamCoreProInputType::PS5Controller", (int64)ESteamCoreProInputType::PS5Controller },
		{ "ESteamCoreProInputType::SteamDeckController", (int64)ESteamCoreProInputType::SteamDeckController },
		{ "ESteamCoreProInputType::Count", (int64)ESteamCoreProInputType::Count },
		{ "ESteamCoreProInputType::MaximumPossibleValue", (int64)ESteamCoreProInputType::MaximumPossibleValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreProInputType",
	"ESteamCoreProInputType",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreProInputType.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreProInputType.InnerSingleton;
}
// End Enum ESteamCoreProInputType

// Begin Enum ESteamCoreProInputLEDFlag
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreProInputLEDFlag;
static UEnum* ESteamCoreProInputLEDFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProInputLEDFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreProInputLEDFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputLEDFlag, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreProInputLEDFlag"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreProInputLEDFlag.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProInputLEDFlag>()
{
	return ESteamCoreProInputLEDFlag_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputLEDFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "RestoreUserDefault.Name", "ESteamCoreProInputLEDFlag::RestoreUserDefault" },
		{ "SetColor.Name", "ESteamCoreProInputLEDFlag::SetColor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreProInputLEDFlag::SetColor", (int64)ESteamCoreProInputLEDFlag::SetColor },
		{ "ESteamCoreProInputLEDFlag::RestoreUserDefault", (int64)ESteamCoreProInputLEDFlag::RestoreUserDefault },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputLEDFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreProInputLEDFlag",
	"ESteamCoreProInputLEDFlag",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputLEDFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputLEDFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputLEDFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputLEDFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputLEDFlag()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProInputLEDFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreProInputLEDFlag.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputLEDFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreProInputLEDFlag.InnerSingleton;
}
// End Enum ESteamCoreProInputLEDFlag

// Begin Enum ESteamCoreInputConfigurationEnableType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreInputConfigurationEnableType;
static UEnum* ESteamCoreInputConfigurationEnableType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreInputConfigurationEnableType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreInputConfigurationEnableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreInputConfigurationEnableType, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreInputConfigurationEnableType"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreInputConfigurationEnableType.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreInputConfigurationEnableType>()
{
	return ESteamCoreInputConfigurationEnableType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreInputConfigurationEnableType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Individual values are used by the GetSessionInputConfigurationSettings bitmask\n" },
#endif
		{ "ESteamInputConfigurationEnableType_Generic.Name", "ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_Generic" },
		{ "ESteamInputConfigurationEnableType_None.Name", "ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_None" },
		{ "ESteamInputConfigurationEnableType_Playstation.Name", "ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_Playstation" },
		{ "ESteamInputConfigurationEnableType_Switch.Name", "ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_Switch" },
		{ "ESteamInputConfigurationEnableType_Xbox.Name", "ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_Xbox" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Individual values are used by the GetSessionInputConfigurationSettings bitmask" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_None", (int64)ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_None },
		{ "ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_Playstation", (int64)ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_Playstation },
		{ "ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_Xbox", (int64)ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_Xbox },
		{ "ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_Generic", (int64)ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_Generic },
		{ "ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_Switch", (int64)ESteamCoreInputConfigurationEnableType::ESteamInputConfigurationEnableType_Switch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreInputConfigurationEnableType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreInputConfigurationEnableType",
	"ESteamCoreInputConfigurationEnableType",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreInputConfigurationEnableType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreInputConfigurationEnableType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreInputConfigurationEnableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreInputConfigurationEnableType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreInputConfigurationEnableType()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreInputConfigurationEnableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreInputConfigurationEnableType.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreInputConfigurationEnableType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreInputConfigurationEnableType.InnerSingleton;
}
// End Enum ESteamCoreInputConfigurationEnableType

// Begin Enum EScePadTriggerEffectMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScePadTriggerEffectMode;
static UEnum* EScePadTriggerEffectMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScePadTriggerEffectMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScePadTriggerEffectMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_EScePadTriggerEffectMode, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("EScePadTriggerEffectMode"));
	}
	return Z_Registration_Info_UEnum_EScePadTriggerEffectMode.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<EScePadTriggerEffectMode>()
{
	return EScePadTriggerEffectMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_EScePadTriggerEffectMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_OFF.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_OFF" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_OFF", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_OFF },
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK },
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON },
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION },
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK },
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK },
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_EScePadTriggerEffectMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"EScePadTriggerEffectMode",
	"EScePadTriggerEffectMode",
	Z_Construct_UEnum_SteamCorePro_EScePadTriggerEffectMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_EScePadTriggerEffectMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_EScePadTriggerEffectMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_EScePadTriggerEffectMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_EScePadTriggerEffectMode()
{
	if (!Z_Registration_Info_UEnum_EScePadTriggerEffectMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScePadTriggerEffectMode.InnerSingleton, Z_Construct_UEnum_SteamCorePro_EScePadTriggerEffectMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScePadTriggerEffectMode.InnerSingleton;
}
// End Enum EScePadTriggerEffectMode

// Begin ScriptStruct FScePadTriggerEffectOffParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScePadTriggerEffectOffParam;
class UScriptStruct* FScePadTriggerEffectOffParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectOffParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScePadTriggerEffectOffParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ScePadTriggerEffectOffParam"));
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectOffParam.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FScePadTriggerEffectOffParam>()
{
	return FScePadTriggerEffectOffParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E  \n *  @brief parameter for setting the trigger effect to off mode.\n *         Off Mode: Stop trigger effect.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to off mode.\n        Off Mode: Stop trigger effect." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectOffParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectOffParam",
	nullptr,
	0,
	sizeof(FScePadTriggerEffectOffParam),
	alignof(FScePadTriggerEffectOffParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectOffParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScePadTriggerEffectOffParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectOffParam.InnerSingleton;
}
// End ScriptStruct FScePadTriggerEffectOffParam

// Begin ScriptStruct FScePadTriggerEffectFeedbackParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScePadTriggerEffectFeedbackParam;
class UScriptStruct* FScePadTriggerEffectFeedbackParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectFeedbackParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScePadTriggerEffectFeedbackParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ScePadTriggerEffectFeedbackParam"));
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectFeedbackParam.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FScePadTriggerEffectFeedbackParam>()
{
	return FScePadTriggerEffectFeedbackParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E  \n *  @brief parameter for setting the trigger effect to Feedback mode.\n *         Feedback Mode: The motor arm pushes back trigger.\n *                        Trigger obtains stiffness at specified position.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to Feedback mode.\n        Feedback Mode: The motor arm pushes back trigger.\n                       Trigger obtains stiffness at specified position." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E position where the strength of target trigger start changing(0~9). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E position where the strength of target trigger start changing(0~9)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E strength that the motor arm pushes back target trigger(0~8 (0: Same as Off mode)). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E strength that the motor arm pushes back target trigger(0~8 (0: Same as Off mode))." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectFeedbackParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectFeedbackParam, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectFeedbackParam, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectFeedbackParam",
	Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::PropPointers),
	sizeof(FScePadTriggerEffectFeedbackParam),
	alignof(FScePadTriggerEffectFeedbackParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectFeedbackParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScePadTriggerEffectFeedbackParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectFeedbackParam.InnerSingleton;
}
// End ScriptStruct FScePadTriggerEffectFeedbackParam

// Begin ScriptStruct FScePadTriggerEffectWeaponParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScePadTriggerEffectWeaponParam;
class UScriptStruct* FScePadTriggerEffectWeaponParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectWeaponParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScePadTriggerEffectWeaponParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ScePadTriggerEffectWeaponParam"));
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectWeaponParam.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FScePadTriggerEffectWeaponParam>()
{
	return FScePadTriggerEffectWeaponParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E  \n *  @brief parameter for setting the trigger effect to Weapon mode.\n *         Weapon Mode: Emulate weapon like gun trigger.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to Weapon mode.\n        Weapon Mode: Emulate weapon like gun trigger." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E position where the stiffness of trigger start changing(2~7). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E position where the stiffness of trigger start changing(2~7)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E position where the stiffness of trigger finish changing(startPosition+1~8). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E position where the stiffness of trigger finish changing(startPosition+1~8)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E strength of gun trigger(0~8 (0: Same as Off mode)). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E strength of gun trigger(0~8 (0: Same as Off mode))." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectWeaponParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectWeaponParam, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectWeaponParam, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectWeaponParam, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectWeaponParam",
	Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::PropPointers),
	sizeof(FScePadTriggerEffectWeaponParam),
	alignof(FScePadTriggerEffectWeaponParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectWeaponParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScePadTriggerEffectWeaponParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectWeaponParam.InnerSingleton;
}
// End ScriptStruct FScePadTriggerEffectWeaponParam

// Begin ScriptStruct FScePadTriggerEffectVibrationParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScePadTriggerEffectVibrationParam;
class UScriptStruct* FScePadTriggerEffectVibrationParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectVibrationParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScePadTriggerEffectVibrationParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ScePadTriggerEffectVibrationParam"));
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectVibrationParam.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FScePadTriggerEffectVibrationParam>()
{
	return FScePadTriggerEffectVibrationParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E  \n *  @brief parameter for setting the trigger effect to Vibration mode.\n *         Vibration Mode: Vibrates motor arm around specified position.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to Vibration mode.\n        Vibration Mode: Vibrates motor arm around specified position." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E position where the motor arm start vibrating(0~9). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E position where the motor arm start vibrating(0~9)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E vibration amplitude(0~8 (0: Same as Off mode)). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E vibration amplitude(0~8 (0: Same as Off mode))." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E vibration frequency(0~255[Hz] (0: Same as Off mode)). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E vibration frequency(0~255[Hz] (0: Same as Off mode))." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectVibrationParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectVibrationParam, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectVibrationParam, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectVibrationParam, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewProp_Frequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectVibrationParam",
	Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::PropPointers),
	sizeof(FScePadTriggerEffectVibrationParam),
	alignof(FScePadTriggerEffectVibrationParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectVibrationParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScePadTriggerEffectVibrationParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectVibrationParam.InnerSingleton;
}
// End ScriptStruct FScePadTriggerEffectVibrationParam

// Begin ScriptStruct FScePadTriggerEffectMultiplePositionFeedbackParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionFeedbackParam;
class UScriptStruct* FScePadTriggerEffectMultiplePositionFeedbackParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionFeedbackParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionFeedbackParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ScePadTriggerEffectMultiplePositionFeedbackParam"));
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionFeedbackParam.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FScePadTriggerEffectMultiplePositionFeedbackParam>()
{
	return FScePadTriggerEffectMultiplePositionFeedbackParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E  \n *  @brief parameter for setting the trigger effect to ScePadTriggerEffectMultiplePositionFeedbackParam mode.\n *         Multi Position Feedback Mode: The motor arm pushes back trigger.\n *                                       Trigger obtains specified stiffness at each control point.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to ScePadTriggerEffectMultiplePositionFeedbackParam mode.\n        Multi Position Feedback Mode: The motor arm pushes back trigger.\n                                      Trigger obtains specified stiffness at each control point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E strength that the motor arm pushes back target trigger at position(0~8 (0: Same as Off mode)).\n\x09 *  strength[0] means strength of motor arm at position0.\n\x09 *  strength[1] means strength of motor arm at position1.\n\x09 * */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E strength that the motor arm pushes back target trigger at position(0~8 (0: Same as Off mode)).\n        *  strength[0] means strength of motor arm at position0.\n        *  strength[1] means strength of motor arm at position1." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectMultiplePositionFeedbackParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewProp_Strength_Inner = { "Strength", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectMultiplePositionFeedbackParam, Strength), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewProp_Strength_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectMultiplePositionFeedbackParam",
	Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::PropPointers),
	sizeof(FScePadTriggerEffectMultiplePositionFeedbackParam),
	alignof(FScePadTriggerEffectMultiplePositionFeedbackParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionFeedbackParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionFeedbackParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionFeedbackParam.InnerSingleton;
}
// End ScriptStruct FScePadTriggerEffectMultiplePositionFeedbackParam

// Begin ScriptStruct FScePadTriggerEffectSlopeFeedbackParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScePadTriggerEffectSlopeFeedbackParam;
class UScriptStruct* FScePadTriggerEffectSlopeFeedbackParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectSlopeFeedbackParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScePadTriggerEffectSlopeFeedbackParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ScePadTriggerEffectSlopeFeedbackParam"));
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectSlopeFeedbackParam.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FScePadTriggerEffectSlopeFeedbackParam>()
{
	return FScePadTriggerEffectSlopeFeedbackParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E  \n *  @brief parameter for setting the trigger effect to Feedback3 mode.\n *         Slope Feedback Mode: The motor arm pushes back trigger between two spedified control points.\n *                              Stiffness of the trigger is changing depending on the set place.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to Feedback3 mode.\n        Slope Feedback Mode: The motor arm pushes back trigger between two spedified control points.\n                             Stiffness of the trigger is changing depending on the set place." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E position where the strength of target trigger start changing(0~endPosition). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E position where the strength of target trigger start changing(0~endPosition)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E position where the strength of target trigger finish changing(startPosition+1~9). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E position where the strength of target trigger finish changing(startPosition+1~9)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartStrength_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E strength when trigger's position is startPosition(1~8) */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E strength when trigger's position is startPosition(1~8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndStrength_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E strength when trigger's position is endPosition(1~8) */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E strength when trigger's position is endPosition(1~8)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectSlopeFeedbackParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectSlopeFeedbackParam, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectSlopeFeedbackParam, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_StartStrength = { "StartStrength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectSlopeFeedbackParam, StartStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartStrength_MetaData), NewProp_StartStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_EndStrength = { "EndStrength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectSlopeFeedbackParam, EndStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndStrength_MetaData), NewProp_EndStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_StartStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_EndStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectSlopeFeedbackParam",
	Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::PropPointers),
	sizeof(FScePadTriggerEffectSlopeFeedbackParam),
	alignof(FScePadTriggerEffectSlopeFeedbackParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectSlopeFeedbackParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScePadTriggerEffectSlopeFeedbackParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectSlopeFeedbackParam.InnerSingleton;
}
// End ScriptStruct FScePadTriggerEffectSlopeFeedbackParam

// Begin ScriptStruct FScePadTriggerEffectMultiplePositionVibrationParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionVibrationParam;
class UScriptStruct* FScePadTriggerEffectMultiplePositionVibrationParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionVibrationParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionVibrationParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ScePadTriggerEffectMultiplePositionVibrationParam"));
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionVibrationParam.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FScePadTriggerEffectMultiplePositionVibrationParam>()
{
	return FScePadTriggerEffectMultiplePositionVibrationParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E  \n *  @brief parameter for setting the trigger effect to Vibration2 mode.\n *         Multi Position Vibration Mode: Vibrates motor arm around specified control point.\n *                                        Trigger vibrates specified amplitude at each control point.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to Vibration2 mode.\n        Multi Position Vibration Mode: Vibrates motor arm around specified control point.\n                                       Trigger vibrates specified amplitude at each control point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E vibration frequency(0~255 (0: Same as Off mode)) */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E vibration frequency(0~255 (0: Same as Off mode))" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E vibration amplitude at position(0~8 (0: Same as Off mode)).\n\x09 *  amplitude[0] means amplitude of vibration at position0.\n\x09 *  amplitude[1] means amplitude of vibration at position1.\n\x09 *  ...\n\x09 * */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E vibration amplitude at position(0~8 (0: Same as Off mode)).\n        *  amplitude[0] means amplitude of vibration at position0.\n        *  amplitude[1] means amplitude of vibration at position1.\n        *  ..." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amplitude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectMultiplePositionVibrationParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectMultiplePositionVibrationParam, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Amplitude_Inner = { "Amplitude", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectMultiplePositionVibrationParam, Amplitude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Amplitude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectMultiplePositionVibrationParam",
	Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::PropPointers),
	sizeof(FScePadTriggerEffectMultiplePositionVibrationParam),
	alignof(FScePadTriggerEffectMultiplePositionVibrationParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionVibrationParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionVibrationParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionVibrationParam.InnerSingleton;
}
// End ScriptStruct FScePadTriggerEffectMultiplePositionVibrationParam

// Begin ScriptStruct FScePadTriggerEffectCommandData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommandData;
class UScriptStruct* FScePadTriggerEffectCommandData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommandData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommandData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ScePadTriggerEffectCommandData"));
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommandData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FScePadTriggerEffectCommandData>()
{
	return FScePadTriggerEffectCommandData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VibrationParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplePositionFeedbackParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlopeFeedbackParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplePositionVibrationParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FeedbackParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VibrationParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiplePositionFeedbackParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlopeFeedbackParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiplePositionVibrationParam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectCommandData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_OffParam = { "OffParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, OffParam), Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffParam_MetaData), NewProp_OffParam_MetaData) }; // 2601634586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_FeedbackParam = { "FeedbackParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, FeedbackParam), Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackParam_MetaData), NewProp_FeedbackParam_MetaData) }; // 3437972099
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_WeaponParam = { "WeaponParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, WeaponParam), Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponParam_MetaData), NewProp_WeaponParam_MetaData) }; // 2245676856
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_VibrationParam = { "VibrationParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, VibrationParam), Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VibrationParam_MetaData), NewProp_VibrationParam_MetaData) }; // 177973101
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_MultiplePositionFeedbackParam = { "MultiplePositionFeedbackParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, MultiplePositionFeedbackParam), Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplePositionFeedbackParam_MetaData), NewProp_MultiplePositionFeedbackParam_MetaData) }; // 1271110195
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_SlopeFeedbackParam = { "SlopeFeedbackParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, SlopeFeedbackParam), Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlopeFeedbackParam_MetaData), NewProp_SlopeFeedbackParam_MetaData) }; // 1586559714
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_MultiplePositionVibrationParam = { "MultiplePositionVibrationParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, MultiplePositionVibrationParam), Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplePositionVibrationParam_MetaData), NewProp_MultiplePositionVibrationParam_MetaData) }; // 1810977753
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_OffParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_FeedbackParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_WeaponParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_VibrationParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_MultiplePositionFeedbackParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_SlopeFeedbackParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_MultiplePositionVibrationParam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectCommandData",
	Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::PropPointers),
	sizeof(FScePadTriggerEffectCommandData),
	alignof(FScePadTriggerEffectCommandData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommandData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommandData.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommandData.InnerSingleton;
}
// End ScriptStruct FScePadTriggerEffectCommandData

// Begin ScriptStruct FScePadTriggerEffectCommand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommand;
class UScriptStruct* FScePadTriggerEffectCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectCommand, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ScePadTriggerEffectCommand"));
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommand.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FScePadTriggerEffectCommand>()
{
	return FScePadTriggerEffectCommand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandData_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommandData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommand, Mode), Z_Construct_UEnum_SteamCorePro_EScePadTriggerEffectMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2793540500
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewProp_CommandData = { "CommandData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommand, CommandData), Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandData_MetaData), NewProp_CommandData_MetaData) }; // 1014010674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewProp_CommandData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectCommand",
	Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::PropPointers),
	sizeof(FScePadTriggerEffectCommand),
	alignof(FScePadTriggerEffectCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectCommand()
{
	if (!Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommand.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommand.InnerSingleton;
}
// End ScriptStruct FScePadTriggerEffectCommand

// Begin ScriptStruct FInputAnalogActionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAnalogActionData;
class UScriptStruct* FInputAnalogActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAnalogActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAnalogActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAnalogActionData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("InputAnalogActionData"));
	}
	return Z_Registration_Info_UScriptStruct_InputAnalogActionData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FInputAnalogActionData>()
{
	return FInputAnalogActionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputAnalogActionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAnalogActionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAnalogActionData, Mode), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2888713030
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAnalogActionData, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAnalogActionData, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
void Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FInputAnalogActionData*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputAnalogActionData), &Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"InputAnalogActionData",
	Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers),
	sizeof(FInputAnalogActionData),
	alignof(FInputAnalogActionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData()
{
	if (!Z_Registration_Info_UScriptStruct_InputAnalogActionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAnalogActionData.InnerSingleton, Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputAnalogActionData.InnerSingleton;
}
// End ScriptStruct FInputAnalogActionData

// Begin ScriptStruct FInputDigitalActionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputDigitalActionData;
class UScriptStruct* FInputDigitalActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputDigitalActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputDigitalActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDigitalActionData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("InputDigitalActionData"));
	}
	return Z_Registration_Info_UScriptStruct_InputDigitalActionData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FInputDigitalActionData>()
{
	return FInputDigitalActionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputDigitalActionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bState_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bState;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDigitalActionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_SetBit(void* Obj)
{
	((FInputDigitalActionData*)Obj)->bState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputDigitalActionData), &Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bState_MetaData), NewProp_bState_MetaData) };
void Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FInputDigitalActionData*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputDigitalActionData), &Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"InputDigitalActionData",
	Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers),
	sizeof(FInputDigitalActionData),
	alignof(FInputDigitalActionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData()
{
	if (!Z_Registration_Info_UScriptStruct_InputDigitalActionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputDigitalActionData.InnerSingleton, Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputDigitalActionData.InnerSingleton;
}
// End ScriptStruct FInputDigitalActionData

// Begin ScriptStruct FInputMotionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputMotionData;
class UScriptStruct* FInputMotionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputMotionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputMotionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMotionData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("InputMotionData"));
	}
	return Z_Registration_Info_UScriptStruct_InputMotionData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FInputMotionData>()
{
	return FInputMotionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputMotionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatW_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosAccelX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosAccelY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosAccelZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotVelX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotVelY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotVelZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatW;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosAccelX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosAccelY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosAccelZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotVelX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotVelY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotVelZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMotionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX = { "RotQuatX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotQuatX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotQuatX_MetaData), NewProp_RotQuatX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY = { "RotQuatY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotQuatY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotQuatY_MetaData), NewProp_RotQuatY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ = { "RotQuatZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotQuatZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotQuatZ_MetaData), NewProp_RotQuatZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW = { "RotQuatW", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotQuatW), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotQuatW_MetaData), NewProp_RotQuatW_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX = { "PosAccelX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, PosAccelX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosAccelX_MetaData), NewProp_PosAccelX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY = { "PosAccelY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, PosAccelY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosAccelY_MetaData), NewProp_PosAccelY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ = { "PosAccelZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, PosAccelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosAccelZ_MetaData), NewProp_PosAccelZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX = { "RotVelX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotVelX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotVelX_MetaData), NewProp_RotVelX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY = { "RotVelY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotVelY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotVelY_MetaData), NewProp_RotVelY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ = { "RotVelZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotVelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotVelZ_MetaData), NewProp_RotVelZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMotionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"InputMotionData",
	Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers),
	sizeof(FInputMotionData),
	alignof(FInputMotionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData()
{
	if (!Z_Registration_Info_UScriptStruct_InputMotionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputMotionData.InnerSingleton, Z_Construct_UScriptStruct_FInputMotionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputMotionData.InnerSingleton;
}
// End ScriptStruct FInputMotionData

// Begin ScriptStruct FInputHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputHandle;
class UScriptStruct* FInputHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputHandle, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("InputHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InputHandle.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FInputHandle>()
{
	return FInputHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"InputHandle",
	nullptr,
	0,
	sizeof(FInputHandle),
	alignof(FInputHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputHandle()
{
	if (!Z_Registration_Info_UScriptStruct_InputHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputHandle.InnerSingleton;
}
// End ScriptStruct FInputHandle

// Begin ScriptStruct FInputActionSetHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionSetHandle;
class UScriptStruct* FInputActionSetHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionSetHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionSetHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionSetHandle, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("InputActionSetHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionSetHandle.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FInputActionSetHandle>()
{
	return FInputActionSetHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputActionSetHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionSetHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"InputActionSetHandle",
	nullptr,
	0,
	sizeof(FInputActionSetHandle),
	alignof(FInputActionSetHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionSetHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionSetHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputActionSetHandle.InnerSingleton;
}
// End ScriptStruct FInputActionSetHandle

// Begin ScriptStruct FInputDigitalActionHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputDigitalActionHandle;
class UScriptStruct* FInputDigitalActionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputDigitalActionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputDigitalActionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDigitalActionHandle, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("InputDigitalActionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InputDigitalActionHandle.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FInputDigitalActionHandle>()
{
	return FInputDigitalActionHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDigitalActionHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"InputDigitalActionHandle",
	nullptr,
	0,
	sizeof(FInputDigitalActionHandle),
	alignof(FInputDigitalActionHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle()
{
	if (!Z_Registration_Info_UScriptStruct_InputDigitalActionHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputDigitalActionHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputDigitalActionHandle.InnerSingleton;
}
// End ScriptStruct FInputDigitalActionHandle

// Begin ScriptStruct FInputAnalogActionHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAnalogActionHandle;
class UScriptStruct* FInputAnalogActionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAnalogActionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAnalogActionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAnalogActionHandle, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("InputAnalogActionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InputAnalogActionHandle.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FInputAnalogActionHandle>()
{
	return FInputAnalogActionHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAnalogActionHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"InputAnalogActionHandle",
	nullptr,
	0,
	sizeof(FInputAnalogActionHandle),
	alignof(FInputAnalogActionHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle()
{
	if (!Z_Registration_Info_UScriptStruct_InputAnalogActionHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAnalogActionHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputAnalogActionHandle.InnerSingleton;
}
// End ScriptStruct FInputAnalogActionHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCorePro_Public_SteamInput_SteamInputTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamCoreProInputGlyphSize_StaticEnum, TEXT("ESteamCoreProInputGlyphSize"), &Z_Registration_Info_UEnum_ESteamCoreProInputGlyphSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4131445480U) },
		{ ESteamCoreProInputSource_StaticEnum, TEXT("ESteamCoreProInputSource"), &Z_Registration_Info_UEnum_ESteamCoreProInputSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1748530438U) },
		{ ESteamCoreProInputSourceMode_StaticEnum, TEXT("ESteamCoreProInputSourceMode"), &Z_Registration_Info_UEnum_ESteamCoreProInputSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2888713030U) },
		{ ESteamCoreProXboxOrigin_StaticEnum, TEXT("ESteamCoreProXboxOrigin"), &Z_Registration_Info_UEnum_ESteamCoreProXboxOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3735483929U) },
		{ ESteamCoreProControllerPad_StaticEnum, TEXT("ESteamCoreProControllerPad"), &Z_Registration_Info_UEnum_ESteamCoreProControllerPad, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3556313679U) },
		{ ESteamCoreProInputType_StaticEnum, TEXT("ESteamCoreProInputType"), &Z_Registration_Info_UEnum_ESteamCoreProInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3147720343U) },
		{ ESteamCoreProInputLEDFlag_StaticEnum, TEXT("ESteamCoreProInputLEDFlag"), &Z_Registration_Info_UEnum_ESteamCoreProInputLEDFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 887432845U) },
		{ ESteamCoreInputConfigurationEnableType_StaticEnum, TEXT("ESteamCoreInputConfigurationEnableType"), &Z_Registration_Info_UEnum_ESteamCoreInputConfigurationEnableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3709308973U) },
		{ EScePadTriggerEffectMode_StaticEnum, TEXT("EScePadTriggerEffectMode"), &Z_Registration_Info_UEnum_EScePadTriggerEffectMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2793540500U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScePadTriggerEffectOffParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectOffParam"), &Z_Registration_Info_UScriptStruct_ScePadTriggerEffectOffParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectOffParam), 2601634586U) },
		{ FScePadTriggerEffectFeedbackParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectFeedbackParam"), &Z_Registration_Info_UScriptStruct_ScePadTriggerEffectFeedbackParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectFeedbackParam), 3437972099U) },
		{ FScePadTriggerEffectWeaponParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectWeaponParam"), &Z_Registration_Info_UScriptStruct_ScePadTriggerEffectWeaponParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectWeaponParam), 2245676856U) },
		{ FScePadTriggerEffectVibrationParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectVibrationParam"), &Z_Registration_Info_UScriptStruct_ScePadTriggerEffectVibrationParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectVibrationParam), 177973101U) },
		{ FScePadTriggerEffectMultiplePositionFeedbackParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectMultiplePositionFeedbackParam"), &Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionFeedbackParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectMultiplePositionFeedbackParam), 1271110195U) },
		{ FScePadTriggerEffectSlopeFeedbackParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectSlopeFeedbackParam"), &Z_Registration_Info_UScriptStruct_ScePadTriggerEffectSlopeFeedbackParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectSlopeFeedbackParam), 1586559714U) },
		{ FScePadTriggerEffectMultiplePositionVibrationParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectMultiplePositionVibrationParam"), &Z_Registration_Info_UScriptStruct_ScePadTriggerEffectMultiplePositionVibrationParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectMultiplePositionVibrationParam), 1810977753U) },
		{ FScePadTriggerEffectCommandData::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewStructOps, TEXT("ScePadTriggerEffectCommandData"), &Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommandData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectCommandData), 1014010674U) },
		{ FScePadTriggerEffectCommand::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewStructOps, TEXT("ScePadTriggerEffectCommand"), &Z_Registration_Info_UScriptStruct_ScePadTriggerEffectCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectCommand), 2857314288U) },
		{ FInputAnalogActionData::StaticStruct, Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewStructOps, TEXT("InputAnalogActionData"), &Z_Registration_Info_UScriptStruct_InputAnalogActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAnalogActionData), 4183507209U) },
		{ FInputDigitalActionData::StaticStruct, Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewStructOps, TEXT("InputDigitalActionData"), &Z_Registration_Info_UScriptStruct_InputDigitalActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDigitalActionData), 2571568463U) },
		{ FInputMotionData::StaticStruct, Z_Construct_UScriptStruct_FInputMotionData_Statics::NewStructOps, TEXT("InputMotionData"), &Z_Registration_Info_UScriptStruct_InputMotionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputMotionData), 2136145932U) },
		{ FInputHandle::StaticStruct, Z_Construct_UScriptStruct_FInputHandle_Statics::NewStructOps, TEXT("InputHandle"), &Z_Registration_Info_UScriptStruct_InputHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputHandle), 66676253U) },
		{ FInputActionSetHandle::StaticStruct, Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::NewStructOps, TEXT("InputActionSetHandle"), &Z_Registration_Info_UScriptStruct_InputActionSetHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionSetHandle), 2790418488U) },
		{ FInputDigitalActionHandle::StaticStruct, Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::NewStructOps, TEXT("InputDigitalActionHandle"), &Z_Registration_Info_UScriptStruct_InputDigitalActionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDigitalActionHandle), 3302225021U) },
		{ FInputAnalogActionHandle::StaticStruct, Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::NewStructOps, TEXT("InputAnalogActionHandle"), &Z_Registration_Info_UScriptStruct_InputAnalogActionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAnalogActionHandle), 4029593120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCorePro_Public_SteamInput_SteamInputTypes_h_3684650764(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCorePro_Public_SteamInput_SteamInputTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCorePro_Public_SteamInput_SteamInputTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCorePro_Public_SteamInput_SteamInputTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JB_Unreal_Projects_shape_science_jam_Plugins_SteamCorePro_5_4_Source_SteamCorePro_Public_SteamInput_SteamInputTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
