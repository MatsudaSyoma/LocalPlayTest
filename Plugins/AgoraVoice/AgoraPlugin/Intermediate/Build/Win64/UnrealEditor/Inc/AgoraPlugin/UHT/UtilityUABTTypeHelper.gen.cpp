// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../AgoraBlueprintPlugin/UtilityUABTTypeHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilityUABTTypeHelper() {}
// Cross Module References
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EAgoraOptional();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAgoraOptional;
	static UEnum* EAgoraOptional_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAgoraOptional.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAgoraOptional.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EAgoraOptional, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EAgoraOptional"));
		}
		return Z_Registration_Info_UEnum_EAgoraOptional.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EAgoraOptional>()
	{
		return EAgoraOptional_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::Enumerators[] = {
		{ "EAgoraOptional::AGORA_NULL_VALUE", (int64)EAgoraOptional::AGORA_NULL_VALUE },
		{ "EAgoraOptional::AGORA_TRUE_VALUE", (int64)EAgoraOptional::AGORA_TRUE_VALUE },
		{ "EAgoraOptional::AGORA_FALSE_VALUE", (int64)EAgoraOptional::AGORA_FALSE_VALUE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::Enum_MetaDataParams[] = {
		{ "AGORA_FALSE_VALUE.Name", "EAgoraOptional::AGORA_FALSE_VALUE" },
		{ "AGORA_NULL_VALUE.Name", "EAgoraOptional::AGORA_NULL_VALUE" },
		{ "AGORA_TRUE_VALUE.Name", "EAgoraOptional::AGORA_TRUE_VALUE" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/UtilityUABTTypeHelper.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EAgoraOptional",
		"EAgoraOptional",
		Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EAgoraOptional()
	{
		if (!Z_Registration_Info_UEnum_EAgoraOptional.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAgoraOptional.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAgoraOptional.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_UtilityUABTTypeHelper_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_UtilityUABTTypeHelper_h_Statics::EnumInfo[] = {
		{ EAgoraOptional_StaticEnum, TEXT("EAgoraOptional"), &Z_Registration_Info_UEnum_EAgoraOptional, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1775763776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_UtilityUABTTypeHelper_h_2424365759(TEXT("/Script/AgoraPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_UtilityUABTTypeHelper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_UtilityUABTTypeHelper_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
