// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamTimeline/SteamTimeline.h"
#include "SteamCorePro/Public/SteamTimeline/SteamTimelineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamTimeline() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProTimeline();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProTimeline_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProTimelineGamePhases();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProTimelineGamePhases_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamTimelineEventRecordingExists__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineEventHandle();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProTimeline Function AddInstantaneousTimelineEvent
struct Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics
{
	struct SteamProTimeline_eventAddInstantaneousTimelineEvent_Parms
	{
		FString Title;
		FString Description;
		FString Icon;
		int32 IconPriority;
		float StartOffsetSeconds;
		ESteamTimelineEventClipPriority PossibleClip;
		FTimelineEventHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "Comment", "/**\n\x09* Use this to mark an event on the Timeline. The event can be instantaneous or take some amount of time to complete, depending on the value passed in flDurationSeconds\n\x09* \n\x09* Examples could include:\n    * a boss battle\n    * a cut scene\n    * a large team fight\n    * picking up a new weapon or ammunition\n    * scoring a goal\n    *\n\x09* @param  Icon\x09\x09\x09\x09        Specify the name of the icon uploaded through the Steamworks Partner Site for your title or one of the provided icons that start with steam_\n\x09* @param  Title\x09\x09\x09\x09        Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n\x09* @param  Description\x09\x09        Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n\x09* @param  IconPriority\x09\x09        Specify how important this range is compared to other markers provided by the game. Ranges with larger priority values will be displayed more prominently in the UI. This value may be between 0 and k_unMaxTimelinePriority.\n\x09* @param  StartOffsetSeconds\x09\x09The time that this range started relative to now. Negative times indicate an event that happened in the past.\n\x09* @param  PossibleClip\x09\x09\x09\x09""By setting this parameter to Featured or Standard, the game indicates to Steam that it would be appropriate to offer this range as a clip to the user. For instantaneous events, the suggested clip will be for a short time before and after the event itself.\n\x09* \n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Use this to mark an event on the Timeline. The event can be instantaneous or take some amount of time to complete, depending on the value passed in flDurationSeconds\n\nExamples could include:\na boss battle\na cut scene\na large team fight\npicking up a new weapon or ammunition\nscoring a goal\n\n@param  Icon                                  Specify the name of the icon uploaded through the Steamworks Partner Site for your title or one of the provided icons that start with steam_\n@param  Title                                 Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n@param  Description                   Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n@param  IconPriority                  Specify how important this range is compared to other markers provided by the game. Ranges with larger priority values will be displayed more prominently in the UI. This value may be between 0 and k_unMaxTimelinePriority.\n@param  StartOffsetSeconds            The time that this range started relative to now. Negative times indicate an event that happened in the past.\n@param  PossibleClip                          By setting this parameter to Featured or Standard, the game indicates to Steam that it would be appropriate to offer this range as a clip to the user. For instantaneous events, the suggested clip will be for a short time before and after the event itself." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IconPriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffsetSeconds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PossibleClip_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PossibleClip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddInstantaneousTimelineEvent_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddInstantaneousTimelineEvent_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddInstantaneousTimelineEvent_Parms, Icon), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_IconPriority = { "IconPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddInstantaneousTimelineEvent_Parms, IconPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_StartOffsetSeconds = { "StartOffsetSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddInstantaneousTimelineEvent_Parms, StartOffsetSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_PossibleClip_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_PossibleClip = { "PossibleClip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddInstantaneousTimelineEvent_Parms, PossibleClip), Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority, METADATA_PARAMS(0, nullptr) }; // 1994647307
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddInstantaneousTimelineEvent_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimelineEventHandle, METADATA_PARAMS(0, nullptr) }; // 3262047394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_IconPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_StartOffsetSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_PossibleClip_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_PossibleClip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "AddInstantaneousTimelineEvent", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::SteamProTimeline_eventAddInstantaneousTimelineEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::SteamProTimeline_eventAddInstantaneousTimelineEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execAddInstantaneousTimelineEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FStrProperty,Z_Param_Icon);
	P_GET_PROPERTY(FIntProperty,Z_Param_IconPriority);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartOffsetSeconds);
	P_GET_ENUM(ESteamTimelineEventClipPriority,Z_Param_PossibleClip);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimelineEventHandle*)Z_Param__Result=USteamProTimeline::AddInstantaneousTimelineEvent(Z_Param_Title,Z_Param_Description,Z_Param_Icon,Z_Param_IconPriority,Z_Param_StartOffsetSeconds,ESteamTimelineEventClipPriority(Z_Param_PossibleClip));
	P_NATIVE_END;
}
// End Class USteamProTimeline Function AddInstantaneousTimelineEvent

// Begin Class USteamProTimeline Function AddRangeTimelineEvent
struct Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics
{
	struct SteamProTimeline_eventAddRangeTimelineEvent_Parms
	{
		FString Title;
		FString Description;
		FString Icon;
		int32 IconPriority;
		float StartOffsetSeconds;
		float Duration;
		ESteamTimelineEventClipPriority PossibleClip;
		FTimelineEventHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "Comment", "/**\n\x09* Use this to mark an event on the Timeline. The event can be instantaneous or take some amount of time to complete, depending on the value passed in flDurationSeconds\n\x09* \n\x09* Examples could include:\n\x09* a boss battle\n\x09* a cut scene\n\x09* a large team fight\n\x09* picking up a new weapon or ammunition\n\x09* scoring a goal\n\x09*\n\x09* @param  Icon\x09\x09\x09\x09        Specify the name of the icon uploaded through the Steamworks Partner Site for your title or one of the provided icons that start with steam_\n\x09* @param  Title\x09\x09\x09\x09        Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n\x09* @param  Description\x09\x09        Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n\x09* @param  IconPriority\x09\x09        Specify how important this range is compared to other markers provided by the game. Ranges with larger priority values will be displayed more prominently in the UI. This value may be between 0 and k_unMaxTimelinePriority.\n\x09* @param  StartOffsetSeconds\x09\x09The time that this range started relative to now. Negative times indicate an event that happened in the past.\n\x09* @param  Duration\x09\x09\x09\x09\x09How long the time range should be in seconds. For instantaneous events, this should be 0\n\x09* @param  PossibleClip\x09\x09\x09\x09""By setting this parameter to Featured or Standard, the game indicates to Steam that it would be appropriate to offer this range as a clip to the user. For instantaneous events, the suggested clip will be for a short time before and after the event itself.\n\x09* \n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Use this to mark an event on the Timeline. The event can be instantaneous or take some amount of time to complete, depending on the value passed in flDurationSeconds\n\nExamples could include:\na boss battle\na cut scene\na large team fight\npicking up a new weapon or ammunition\nscoring a goal\n\n@param  Icon                                  Specify the name of the icon uploaded through the Steamworks Partner Site for your title or one of the provided icons that start with steam_\n@param  Title                                 Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n@param  Description                   Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n@param  IconPriority                  Specify how important this range is compared to other markers provided by the game. Ranges with larger priority values will be displayed more prominently in the UI. This value may be between 0 and k_unMaxTimelinePriority.\n@param  StartOffsetSeconds            The time that this range started relative to now. Negative times indicate an event that happened in the past.\n@param  Duration                                      How long the time range should be in seconds. For instantaneous events, this should be 0\n@param  PossibleClip                          By setting this parameter to Featured or Standard, the game indicates to Steam that it would be appropriate to offer this range as a clip to the user. For instantaneous events, the suggested clip will be for a short time before and after the event itself." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IconPriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffsetSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PossibleClip_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PossibleClip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddRangeTimelineEvent_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddRangeTimelineEvent_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddRangeTimelineEvent_Parms, Icon), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_IconPriority = { "IconPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddRangeTimelineEvent_Parms, IconPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_StartOffsetSeconds = { "StartOffsetSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddRangeTimelineEvent_Parms, StartOffsetSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddRangeTimelineEvent_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_PossibleClip_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_PossibleClip = { "PossibleClip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddRangeTimelineEvent_Parms, PossibleClip), Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority, METADATA_PARAMS(0, nullptr) }; // 1994647307
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddRangeTimelineEvent_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimelineEventHandle, METADATA_PARAMS(0, nullptr) }; // 3262047394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_IconPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_StartOffsetSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_PossibleClip_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_PossibleClip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "AddRangeTimelineEvent", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::SteamProTimeline_eventAddRangeTimelineEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::SteamProTimeline_eventAddRangeTimelineEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execAddRangeTimelineEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FStrProperty,Z_Param_Icon);
	P_GET_PROPERTY(FIntProperty,Z_Param_IconPriority);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartOffsetSeconds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_ENUM(ESteamTimelineEventClipPriority,Z_Param_PossibleClip);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimelineEventHandle*)Z_Param__Result=USteamProTimeline::AddRangeTimelineEvent(Z_Param_Title,Z_Param_Description,Z_Param_Icon,Z_Param_IconPriority,Z_Param_StartOffsetSeconds,Z_Param_Duration,ESteamTimelineEventClipPriority(Z_Param_PossibleClip));
	P_NATIVE_END;
}
// End Class USteamProTimeline Function AddRangeTimelineEvent

// Begin Class USteamProTimeline Function ClearTimelineTooltip
struct Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics
{
	struct SteamProTimeline_eventClearTimelineTooltip_Parms
	{
		float Delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventClearTimelineTooltip_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "ClearTimelineTooltip", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics::SteamProTimeline_eventClearTimelineTooltip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics::SteamProTimeline_eventClearTimelineTooltip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execClearTimelineTooltip)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimeline::ClearTimelineTooltip(Z_Param_Delta);
	P_NATIVE_END;
}
// End Class USteamProTimeline Function ClearTimelineTooltip

// Begin Class USteamProTimeline Function EndRangeTimelineEvent
struct Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics
{
	struct SteamProTimeline_eventEndRangeTimelineEvent_Parms
	{
		FTimelineEventHandle Event;
		float EndOffsetSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOffsetSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventEndRangeTimelineEvent_Parms, Event), Z_Construct_UScriptStruct_FTimelineEventHandle, METADATA_PARAMS(0, nullptr) }; // 3262047394
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::NewProp_EndOffsetSeconds = { "EndOffsetSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventEndRangeTimelineEvent_Parms, EndOffsetSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::NewProp_EndOffsetSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "EndRangeTimelineEvent", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::SteamProTimeline_eventEndRangeTimelineEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::SteamProTimeline_eventEndRangeTimelineEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execEndRangeTimelineEvent)
{
	P_GET_STRUCT(FTimelineEventHandle,Z_Param_Event);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EndOffsetSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimeline::EndRangeTimelineEvent(Z_Param_Event,Z_Param_EndOffsetSeconds);
	P_NATIVE_END;
}
// End Class USteamProTimeline Function EndRangeTimelineEvent

// Begin Class USteamProTimeline Function GetSteamTimeline
struct Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics
{
	struct SteamProTimeline_eventGetSteamTimeline_Parms
	{
		USteamProTimeline* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventGetSteamTimeline_Parms, ReturnValue), Z_Construct_UClass_USteamProTimeline_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "GetSteamTimeline", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::SteamProTimeline_eventGetSteamTimeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::SteamProTimeline_eventGetSteamTimeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execGetSteamTimeline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProTimeline**)Z_Param__Result=USteamProTimeline::GetSteamTimeline();
	P_NATIVE_END;
}
// End Class USteamProTimeline Function GetSteamTimeline

// Begin Class USteamProTimeline Function RemoveTimelineEvent
struct Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics
{
	struct SteamProTimeline_eventRemoveTimelineEvent_Parms
	{
		FTimelineEventHandle Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "Comment", "/**\n\x09 * Delete the event from the timeline.\n\x09 * This can be called on a timeline event from AddInstantaneousTimelineEvent,\n\x09 * AddRangeTimelineEvent, or StartRangeTimelineEvent/EndRangeTimelineEvent. The timeline event handle must be from the\n\x09 * current game process.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Delete the event from the timeline.\nThis can be called on a timeline event from AddInstantaneousTimelineEvent,\nAddRangeTimelineEvent, or StartRangeTimelineEvent/EndRangeTimelineEvent. The timeline event handle must be from the\ncurrent game process." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventRemoveTimelineEvent_Parms, Event), Z_Construct_UScriptStruct_FTimelineEventHandle, METADATA_PARAMS(0, nullptr) }; // 3262047394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "RemoveTimelineEvent", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics::SteamProTimeline_eventRemoveTimelineEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics::SteamProTimeline_eventRemoveTimelineEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execRemoveTimelineEvent)
{
	P_GET_STRUCT(FTimelineEventHandle,Z_Param_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimeline::RemoveTimelineEvent(Z_Param_Event);
	P_NATIVE_END;
}
// End Class USteamProTimeline Function RemoveTimelineEvent

// Begin Class USteamProTimeline Function SetTimelineGameMode
struct Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics
{
	struct SteamProTimeline_eventSetTimelineGameMode_Parms
	{
		ESteamTimelineGameMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "Comment", "/*\n\x09 * Changes the color of the timeline bar. See ETimelineGameMode comments for how to use each value\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "* Changes the color of the timeline bar. See ETimelineGameMode comments for how to use each value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventSetTimelineGameMode_Parms, Mode), Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode, METADATA_PARAMS(0, nullptr) }; // 3202774101
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "SetTimelineGameMode", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::SteamProTimeline_eventSetTimelineGameMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::SteamProTimeline_eventSetTimelineGameMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execSetTimelineGameMode)
{
	P_GET_ENUM(ESteamTimelineGameMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimeline::SetTimelineGameMode(ESteamTimelineGameMode(Z_Param_Mode));
	P_NATIVE_END;
}
// End Class USteamProTimeline Function SetTimelineGameMode

// Begin Class USteamProTimeline Function SetTimelineTooltip
struct Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics
{
	struct SteamProTimeline_eventSetTimelineTooltip_Parms
	{
		FString Description;
		float Delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "Comment", "/**\n\x09* Sets a description for the current game state in the timeline. These help the user to find specific moments in the timeline when saving clips. Setting a new state description replaces any previous description.\n\x09* \n\x09* Examples could include:\n    * Where the user is in the world in a single player game\n    * Which round is happening in a multiplayer game\n    * The current score for a sports game\n    * \n\x09* @param\x09""Description\x09\x09Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n\x09* @param\x09""Delta\x09\x09\x09The time offset in seconds to apply to this event. Negative times indicate an event that happened in the past.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Sets a description for the current game state in the timeline. These help the user to find specific moments in the timeline when saving clips. Setting a new state description replaces any previous description.\n\nExamples could include:\nWhere the user is in the world in a single player game\nWhich round is happening in a multiplayer game\nThe current score for a sports game\n\n@param        Description             Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n@param        Delta                   The time offset in seconds to apply to this event. Negative times indicate an event that happened in the past." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventSetTimelineTooltip_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventSetTimelineTooltip_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "SetTimelineTooltip", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::SteamProTimeline_eventSetTimelineTooltip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::SteamProTimeline_eventSetTimelineTooltip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execSetTimelineTooltip)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimeline::SetTimelineTooltip(Z_Param_Description,Z_Param_Delta);
	P_NATIVE_END;
}
// End Class USteamProTimeline Function SetTimelineTooltip

// Begin Class USteamProTimeline Function StartRangeTimelineEvent
struct Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics
{
	struct SteamProTimeline_eventStartRangeTimelineEvent_Parms
	{
		FString Title;
		FString Description;
		FString Icon;
		int32 IconPriority;
		float StartOffsetSeconds;
		ESteamTimelineEventClipPriority PossibleClip;
		FTimelineEventHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "Comment", "/**\n\x09 * Starts a timeline event at a the current time, plus an offset in seconds. This event must be ended with EndRangeTimelineEvent.\n\x09 * Any timeline events that have not been ended when the game exits will be discarded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Starts a timeline event at a the current time, plus an offset in seconds. This event must be ended with EndRangeTimelineEvent.\nAny timeline events that have not been ended when the game exits will be discarded." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IconPriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffsetSeconds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PossibleClip_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PossibleClip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventStartRangeTimelineEvent_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventStartRangeTimelineEvent_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventStartRangeTimelineEvent_Parms, Icon), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_IconPriority = { "IconPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventStartRangeTimelineEvent_Parms, IconPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_StartOffsetSeconds = { "StartOffsetSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventStartRangeTimelineEvent_Parms, StartOffsetSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_PossibleClip_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_PossibleClip = { "PossibleClip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventStartRangeTimelineEvent_Parms, PossibleClip), Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority, METADATA_PARAMS(0, nullptr) }; // 1994647307
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventStartRangeTimelineEvent_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimelineEventHandle, METADATA_PARAMS(0, nullptr) }; // 3262047394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_IconPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_StartOffsetSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_PossibleClip_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_PossibleClip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "StartRangeTimelineEvent", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::SteamProTimeline_eventStartRangeTimelineEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::SteamProTimeline_eventStartRangeTimelineEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execStartRangeTimelineEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FStrProperty,Z_Param_Icon);
	P_GET_PROPERTY(FIntProperty,Z_Param_IconPriority);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartOffsetSeconds);
	P_GET_ENUM(ESteamTimelineEventClipPriority,Z_Param_PossibleClip);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimelineEventHandle*)Z_Param__Result=USteamProTimeline::StartRangeTimelineEvent(Z_Param_Title,Z_Param_Description,Z_Param_Icon,Z_Param_IconPriority,Z_Param_StartOffsetSeconds,ESteamTimelineEventClipPriority(Z_Param_PossibleClip));
	P_NATIVE_END;
}
// End Class USteamProTimeline Function StartRangeTimelineEvent

// Begin Class USteamProTimeline Function UpdateRangeTimelineEvent
struct Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics
{
	struct SteamProTimeline_eventUpdateRangeTimelineEvent_Parms
	{
		FTimelineEventHandle Event;
		FString Title;
		FString Description;
		FString Icon;
		int32 Priority;
		ESteamTimelineEventClipPriority PossibleClip;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "Comment", "/**\n\x09 *  Updates fields on a range timeline event that was started with StartRangeTimelineEvent, and which has not been ended.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Updates fields on a range timeline event that was started with StartRangeTimelineEvent, and which has not been ended." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PossibleClip_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PossibleClip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventUpdateRangeTimelineEvent_Parms, Event), Z_Construct_UScriptStruct_FTimelineEventHandle, METADATA_PARAMS(0, nullptr) }; // 3262047394
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventUpdateRangeTimelineEvent_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventUpdateRangeTimelineEvent_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventUpdateRangeTimelineEvent_Parms, Icon), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventUpdateRangeTimelineEvent_Parms, Priority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_PossibleClip_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_PossibleClip = { "PossibleClip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventUpdateRangeTimelineEvent_Parms, PossibleClip), Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority, METADATA_PARAMS(0, nullptr) }; // 1994647307
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_PossibleClip_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::NewProp_PossibleClip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "UpdateRangeTimelineEvent", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::SteamProTimeline_eventUpdateRangeTimelineEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::SteamProTimeline_eventUpdateRangeTimelineEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execUpdateRangeTimelineEvent)
{
	P_GET_STRUCT(FTimelineEventHandle,Z_Param_Event);
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FStrProperty,Z_Param_Icon);
	P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
	P_GET_ENUM(ESteamTimelineEventClipPriority,Z_Param_PossibleClip);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimeline::UpdateRangeTimelineEvent(Z_Param_Event,Z_Param_Title,Z_Param_Description,Z_Param_Icon,Z_Param_Priority,ESteamTimelineEventClipPriority(Z_Param_PossibleClip));
	P_NATIVE_END;
}
// End Class USteamProTimeline Function UpdateRangeTimelineEvent

// Begin Class USteamProTimeline
void USteamProTimeline::StaticRegisterNativesUSteamProTimeline()
{
	UClass* Class = USteamProTimeline::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddInstantaneousTimelineEvent", &USteamProTimeline::execAddInstantaneousTimelineEvent },
		{ "AddRangeTimelineEvent", &USteamProTimeline::execAddRangeTimelineEvent },
		{ "ClearTimelineTooltip", &USteamProTimeline::execClearTimelineTooltip },
		{ "EndRangeTimelineEvent", &USteamProTimeline::execEndRangeTimelineEvent },
		{ "GetSteamTimeline", &USteamProTimeline::execGetSteamTimeline },
		{ "RemoveTimelineEvent", &USteamProTimeline::execRemoveTimelineEvent },
		{ "SetTimelineGameMode", &USteamProTimeline::execSetTimelineGameMode },
		{ "SetTimelineTooltip", &USteamProTimeline::execSetTimelineTooltip },
		{ "StartRangeTimelineEvent", &USteamProTimeline::execStartRangeTimelineEvent },
		{ "UpdateRangeTimelineEvent", &USteamProTimeline::execUpdateRangeTimelineEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProTimeline);
UClass* Z_Construct_UClass_USteamProTimeline_NoRegister()
{
	return USteamProTimeline::StaticClass();
}
struct Z_Construct_UClass_USteamProTimeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamTimeline/SteamTimeline.h" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamTimelineEventRecordingExists_MetaData[] = {
		{ "Category", "SteamCore|Timeline|Delegates" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamTimelineEventRecordingExists;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProTimeline_AddInstantaneousTimelineEvent, "AddInstantaneousTimelineEvent" }, // 2659105043
		{ &Z_Construct_UFunction_USteamProTimeline_AddRangeTimelineEvent, "AddRangeTimelineEvent" }, // 2857168902
		{ &Z_Construct_UFunction_USteamProTimeline_ClearTimelineTooltip, "ClearTimelineTooltip" }, // 2309957428
		{ &Z_Construct_UFunction_USteamProTimeline_EndRangeTimelineEvent, "EndRangeTimelineEvent" }, // 764502182
		{ &Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline, "GetSteamTimeline" }, // 344544505
		{ &Z_Construct_UFunction_USteamProTimeline_RemoveTimelineEvent, "RemoveTimelineEvent" }, // 857644376
		{ &Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode, "SetTimelineGameMode" }, // 356825210
		{ &Z_Construct_UFunction_USteamProTimeline_SetTimelineTooltip, "SetTimelineTooltip" }, // 1704169743
		{ &Z_Construct_UFunction_USteamProTimeline_StartRangeTimelineEvent, "StartRangeTimelineEvent" }, // 2408727661
		{ &Z_Construct_UFunction_USteamProTimeline_UpdateRangeTimelineEvent, "UpdateRangeTimelineEvent" }, // 2222752211
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProTimeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProTimeline_Statics::NewProp_SteamTimelineEventRecordingExists = { "SteamTimelineEventRecordingExists", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProTimeline, SteamTimelineEventRecordingExists), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamTimelineEventRecordingExists__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamTimelineEventRecordingExists_MetaData), NewProp_SteamTimelineEventRecordingExists_MetaData) }; // 3967429106
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProTimeline_Statics::NewProp_SteamTimelineEventRecordingExists,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProTimeline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProTimeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProTimeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProTimeline_Statics::ClassParams = {
	&USteamProTimeline::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProTimeline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProTimeline_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProTimeline_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProTimeline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProTimeline()
{
	if (!Z_Registration_Info_UClass_USteamProTimeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProTimeline.OuterSingleton, Z_Construct_UClass_USteamProTimeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProTimeline.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProTimeline>()
{
	return USteamProTimeline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProTimeline);
// End Class USteamProTimeline

// Begin Class USteamProTimelineGamePhases Function AddGamePhaseTag
struct Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics
{
	struct SteamProTimelineGamePhases_eventAddGamePhaseTag_Parms
	{
		FString TagName;
		FString TagIcon;
		FString TagGroup;
		int32 Priority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline|GamePhases" },
		{ "Comment", "/**\n\x09 * Add a tag that applies to the entire phase\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Add a tag that applies to the entire phase" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagIcon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagGroup;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimelineGamePhases_eventAddGamePhaseTag_Parms, TagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::NewProp_TagIcon = { "TagIcon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimelineGamePhases_eventAddGamePhaseTag_Parms, TagIcon), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::NewProp_TagGroup = { "TagGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimelineGamePhases_eventAddGamePhaseTag_Parms, TagGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimelineGamePhases_eventAddGamePhaseTag_Parms, Priority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::NewProp_TagIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::NewProp_TagGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimelineGamePhases, nullptr, "AddGamePhaseTag", nullptr, nullptr, Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::SteamProTimelineGamePhases_eventAddGamePhaseTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::SteamProTimelineGamePhases_eventAddGamePhaseTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimelineGamePhases::execAddGamePhaseTag)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
	P_GET_PROPERTY(FStrProperty,Z_Param_TagIcon);
	P_GET_PROPERTY(FStrProperty,Z_Param_TagGroup);
	P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimelineGamePhases::AddGamePhaseTag(Z_Param_TagName,Z_Param_TagIcon,Z_Param_TagGroup,Z_Param_Priority);
	P_NATIVE_END;
}
// End Class USteamProTimelineGamePhases Function AddGamePhaseTag

// Begin Class USteamProTimelineGamePhases Function EndGamePhase
struct Z_Construct_UFunction_USteamProTimelineGamePhases_EndGamePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline|GamePhases" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimelineGamePhases_EndGamePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimelineGamePhases, nullptr, "EndGamePhase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_EndGamePhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimelineGamePhases_EndGamePhase_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProTimelineGamePhases_EndGamePhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimelineGamePhases_EndGamePhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimelineGamePhases::execEndGamePhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimelineGamePhases::EndGamePhase();
	P_NATIVE_END;
}
// End Class USteamProTimelineGamePhases Function EndGamePhase

// Begin Class USteamProTimelineGamePhases Function GetSteamTimelineGamePhase
struct Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics
{
	struct SteamProTimelineGamePhases_eventGetSteamTimelineGamePhase_Parms
	{
		USteamProTimelineGamePhases* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimelineGamePhases_eventGetSteamTimelineGamePhase_Parms, ReturnValue), Z_Construct_UClass_USteamProTimelineGamePhases_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimelineGamePhases, nullptr, "GetSteamTimelineGamePhase", nullptr, nullptr, Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics::SteamProTimelineGamePhases_eventGetSteamTimelineGamePhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics::SteamProTimelineGamePhases_eventGetSteamTimelineGamePhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimelineGamePhases::execGetSteamTimelineGamePhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProTimelineGamePhases**)Z_Param__Result=USteamProTimelineGamePhases::GetSteamTimelineGamePhase();
	P_NATIVE_END;
}
// End Class USteamProTimelineGamePhases Function GetSteamTimelineGamePhase

// Begin Class USteamProTimelineGamePhases Function OpenOverlayToGamePhase
struct Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics
{
	struct SteamProTimelineGamePhases_eventOpenOverlayToGamePhase_Parms
	{
		FString PhaseId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline|GamePhases" },
		{ "Comment", "/**\n\x09 * Opens the Steam overlay to a game phase.\n\x09 * @param PhaseId The ID of a phase that was previously provided by the game in SetGamePhaseID.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Opens the Steam overlay to a game phase.\n@param PhaseId The ID of a phase that was previously provided by the game in SetGamePhaseID." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PhaseId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics::NewProp_PhaseId = { "PhaseId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimelineGamePhases_eventOpenOverlayToGamePhase_Parms, PhaseId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics::NewProp_PhaseId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimelineGamePhases, nullptr, "OpenOverlayToGamePhase", nullptr, nullptr, Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics::SteamProTimelineGamePhases_eventOpenOverlayToGamePhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics::SteamProTimelineGamePhases_eventOpenOverlayToGamePhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimelineGamePhases::execOpenOverlayToGamePhase)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PhaseId);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimelineGamePhases::OpenOverlayToGamePhase(Z_Param_PhaseId);
	P_NATIVE_END;
}
// End Class USteamProTimelineGamePhases Function OpenOverlayToGamePhase

// Begin Class USteamProTimelineGamePhases Function OpenOverlayToTimelineEvent
struct Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics
{
	struct SteamProTimelineGamePhases_eventOpenOverlayToTimelineEvent_Parms
	{
		FTimelineEventHandle Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline|GamePhases" },
		{ "Comment", "/**\n\x09 * Opens the Steam overlay to a timeline event.\n\x09 * @param Event\x09The ID of a timeline event returned by StartEvent or AddSimpleTimelineEvent\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Opens the Steam overlay to a timeline event.\n@param Event The ID of a timeline event returned by StartEvent or AddSimpleTimelineEvent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimelineGamePhases_eventOpenOverlayToTimelineEvent_Parms, Event), Z_Construct_UScriptStruct_FTimelineEventHandle, METADATA_PARAMS(0, nullptr) }; // 3262047394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimelineGamePhases, nullptr, "OpenOverlayToTimelineEvent", nullptr, nullptr, Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics::SteamProTimelineGamePhases_eventOpenOverlayToTimelineEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics::SteamProTimelineGamePhases_eventOpenOverlayToTimelineEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimelineGamePhases::execOpenOverlayToTimelineEvent)
{
	P_GET_STRUCT(FTimelineEventHandle,Z_Param_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimelineGamePhases::OpenOverlayToTimelineEvent(Z_Param_Event);
	P_NATIVE_END;
}
// End Class USteamProTimelineGamePhases Function OpenOverlayToTimelineEvent

// Begin Class USteamProTimelineGamePhases Function SetGamePhaseAttribute
struct Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics
{
	struct SteamProTimelineGamePhases_eventSetGamePhaseAttribute_Parms
	{
		FString AttributeGroup;
		FString AttributeValue;
		int32 Priority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline|GamePhases" },
		{ "Comment", "/**\n\x09 * Add a text attribute that applies to the entire phase\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Add a text attribute that applies to the entire phase" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeGroup;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::NewProp_AttributeGroup = { "AttributeGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimelineGamePhases_eventSetGamePhaseAttribute_Parms, AttributeGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimelineGamePhases_eventSetGamePhaseAttribute_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimelineGamePhases_eventSetGamePhaseAttribute_Parms, Priority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::NewProp_AttributeGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimelineGamePhases, nullptr, "SetGamePhaseAttribute", nullptr, nullptr, Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::SteamProTimelineGamePhases_eventSetGamePhaseAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::SteamProTimelineGamePhases_eventSetGamePhaseAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimelineGamePhases::execSetGamePhaseAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeGroup);
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimelineGamePhases::SetGamePhaseAttribute(Z_Param_AttributeGroup,Z_Param_AttributeValue,Z_Param_Priority);
	P_NATIVE_END;
}
// End Class USteamProTimelineGamePhases Function SetGamePhaseAttribute

// Begin Class USteamProTimelineGamePhases Function SetGamePhaseID
struct Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics
{
	struct SteamProTimelineGamePhases_eventSetGamePhaseID_Parms
	{
		FString PhaseID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline|GamePhases" },
		{ "Comment", "/**\n\x09 * Games can set a phase ID so they can refer back to a phase in OpenOverlayToPhase\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Games can set a phase ID so they can refer back to a phase in OpenOverlayToPhase" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PhaseID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics::NewProp_PhaseID = { "PhaseID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimelineGamePhases_eventSetGamePhaseID_Parms, PhaseID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics::NewProp_PhaseID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimelineGamePhases, nullptr, "SetGamePhaseID", nullptr, nullptr, Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics::SteamProTimelineGamePhases_eventSetGamePhaseID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics::SteamProTimelineGamePhases_eventSetGamePhaseID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimelineGamePhases::execSetGamePhaseID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PhaseID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimelineGamePhases::SetGamePhaseID(Z_Param_PhaseID);
	P_NATIVE_END;
}
// End Class USteamProTimelineGamePhases Function SetGamePhaseID

// Begin Class USteamProTimelineGamePhases Function StartGamePhase
struct Z_Construct_UFunction_USteamProTimelineGamePhases_StartGamePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline|GamePhases" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimelineGamePhases_StartGamePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimelineGamePhases, nullptr, "StartGamePhase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimelineGamePhases_StartGamePhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimelineGamePhases_StartGamePhase_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProTimelineGamePhases_StartGamePhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimelineGamePhases_StartGamePhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimelineGamePhases::execStartGamePhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimelineGamePhases::StartGamePhase();
	P_NATIVE_END;
}
// End Class USteamProTimelineGamePhases Function StartGamePhase

// Begin Class USteamProTimelineGamePhases
void USteamProTimelineGamePhases::StaticRegisterNativesUSteamProTimelineGamePhases()
{
	UClass* Class = USteamProTimelineGamePhases::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGamePhaseTag", &USteamProTimelineGamePhases::execAddGamePhaseTag },
		{ "EndGamePhase", &USteamProTimelineGamePhases::execEndGamePhase },
		{ "GetSteamTimelineGamePhase", &USteamProTimelineGamePhases::execGetSteamTimelineGamePhase },
		{ "OpenOverlayToGamePhase", &USteamProTimelineGamePhases::execOpenOverlayToGamePhase },
		{ "OpenOverlayToTimelineEvent", &USteamProTimelineGamePhases::execOpenOverlayToTimelineEvent },
		{ "SetGamePhaseAttribute", &USteamProTimelineGamePhases::execSetGamePhaseAttribute },
		{ "SetGamePhaseID", &USteamProTimelineGamePhases::execSetGamePhaseID },
		{ "StartGamePhase", &USteamProTimelineGamePhases::execStartGamePhase },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProTimelineGamePhases);
UClass* Z_Construct_UClass_USteamProTimelineGamePhases_NoRegister()
{
	return USteamProTimelineGamePhases::StaticClass();
}
struct Z_Construct_UClass_USteamProTimelineGamePhases_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Game phases allow the user to navigate their background recordings and clips. Exactly what a game phase means will vary game to game, but\n// the game phase should be a section of gameplay that is usually between 10 minutes and a few hours in length, and should be the\n// main way a user would think to divide up the game. These are presented to the user in a UI that shows the date the game was played,\n// with one row per game slice. Game phases should be used to mark sections of gameplay that the user might be interested in watching.\n//\n//\x09""Examples could include:\n//\x09\x09* A single match in a multiplayer PvP game\n//\x09\x09* A chapter of a story-based singleplayer game\n//\x09\x09* A single run in a roguelike\n//\n// Game phases are started with StartGamePhase, and while a phase is still happening, they can have tags and attributes added to them.\n//\n// Phase attributes represent generic text fields that can be updated throughout the duration of the phase. They are meant\n// to be used for phase metadata that is not part of a well defined set of options. For example, a KDA attribute that starts\n// with the value \"0/0/0\" and updates as the phase progresses, or something like a played-entered character name. Attributes\n// can be set as many times as the game likes with SetGamePhaseAttribute, and only the last value will be shown to the user.\n//\n// Phase tags represent data with a well defined set of options, which could be data such as match resolution, hero played,\n// game mode, etc. Tags can have an icon in addition to a text name. Multiple tags within the same group may be added per phase\n// and all will be remembered. For example, AddGamePhaseTag may be called multiple times for a \"Bosses Defeated\" group, with\n// different names and icons for each boss defeated during the phase, all of which will be shown to the user.\n//\n// The phase will continue until the game exits, until the game calls EndGamePhase, or until the game calls\n// StartGamePhase to start a new phase.\n" },
		{ "IncludePath", "SteamTimeline/SteamTimeline.h" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Game phases allow the user to navigate their background recordings and clips. Exactly what a game phase means will vary game to game, but\nthe game phase should be a section of gameplay that is usually between 10 minutes and a few hours in length, and should be the\nmain way a user would think to divide up the game. These are presented to the user in a UI that shows the date the game was played,\nwith one row per game slice. Game phases should be used to mark sections of gameplay that the user might be interested in watching.\n\n      Examples could include:\n              * A single match in a multiplayer PvP game\n              * A chapter of a story-based singleplayer game\n              * A single run in a roguelike\n\nGame phases are started with StartGamePhase, and while a phase is still happening, they can have tags and attributes added to them.\n\nPhase attributes represent generic text fields that can be updated throughout the duration of the phase. They are meant\nto be used for phase metadata that is not part of a well defined set of options. For example, a KDA attribute that starts\nwith the value \"0/0/0\" and updates as the phase progresses, or something like a played-entered character name. Attributes\ncan be set as many times as the game likes with SetGamePhaseAttribute, and only the last value will be shown to the user.\n\nPhase tags represent data with a well defined set of options, which could be data such as match resolution, hero played,\ngame mode, etc. Tags can have an icon in addition to a text name. Multiple tags within the same group may be added per phase\nand all will be remembered. For example, AddGamePhaseTag may be called multiple times for a \"Bosses Defeated\" group, with\ndifferent names and icons for each boss defeated during the phase, all of which will be shown to the user.\n\nThe phase will continue until the game exits, until the game calls EndGamePhase, or until the game calls\nStartGamePhase to start a new phase." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamTimelineGamePhaseRecordingExists_MetaData[] = {
		{ "Category", "SteamCore|Timeline|Delegates" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamTimelineGamePhaseRecordingExists;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProTimelineGamePhases_AddGamePhaseTag, "AddGamePhaseTag" }, // 920217762
		{ &Z_Construct_UFunction_USteamProTimelineGamePhases_EndGamePhase, "EndGamePhase" }, // 3744242739
		{ &Z_Construct_UFunction_USteamProTimelineGamePhases_GetSteamTimelineGamePhase, "GetSteamTimelineGamePhase" }, // 1497133364
		{ &Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToGamePhase, "OpenOverlayToGamePhase" }, // 1128410121
		{ &Z_Construct_UFunction_USteamProTimelineGamePhases_OpenOverlayToTimelineEvent, "OpenOverlayToTimelineEvent" }, // 2602633744
		{ &Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseAttribute, "SetGamePhaseAttribute" }, // 1370618693
		{ &Z_Construct_UFunction_USteamProTimelineGamePhases_SetGamePhaseID, "SetGamePhaseID" }, // 1725919269
		{ &Z_Construct_UFunction_USteamProTimelineGamePhases_StartGamePhase, "StartGamePhase" }, // 1911719198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProTimelineGamePhases>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProTimelineGamePhases_Statics::NewProp_SteamTimelineGamePhaseRecordingExists = { "SteamTimelineGamePhaseRecordingExists", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProTimelineGamePhases, SteamTimelineGamePhaseRecordingExists), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamTimelineGamePhaseRecordingExists_MetaData), NewProp_SteamTimelineGamePhaseRecordingExists_MetaData) }; // 4066711064
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProTimelineGamePhases_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProTimelineGamePhases_Statics::NewProp_SteamTimelineGamePhaseRecordingExists,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProTimelineGamePhases_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProTimelineGamePhases_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProTimelineGamePhases_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProTimelineGamePhases_Statics::ClassParams = {
	&USteamProTimelineGamePhases::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProTimelineGamePhases_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProTimelineGamePhases_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProTimelineGamePhases_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProTimelineGamePhases_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProTimelineGamePhases()
{
	if (!Z_Registration_Info_UClass_USteamProTimelineGamePhases.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProTimelineGamePhases.OuterSingleton, Z_Construct_UClass_USteamProTimelineGamePhases_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProTimelineGamePhases.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProTimelineGamePhases>()
{
	return USteamProTimelineGamePhases::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProTimelineGamePhases);
// End Class USteamProTimelineGamePhases

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProTimeline, USteamProTimeline::StaticClass, TEXT("USteamProTimeline"), &Z_Registration_Info_UClass_USteamProTimeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProTimeline), 2223511284U) },
		{ Z_Construct_UClass_USteamProTimelineGamePhases, USteamProTimelineGamePhases::StaticClass, TEXT("USteamProTimelineGamePhases"), &Z_Registration_Info_UClass_USteamProTimelineGamePhases, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProTimelineGamePhases), 2201757347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_2920934448(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
