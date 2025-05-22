// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../AgoraBlueprintPlugin/UtilityAgoraBPuLogger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilityAgoraBPuLogger() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuLogger();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuLogger_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	void UAgoraBPuLogger::StaticRegisterNativesUAgoraBPuLogger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAgoraBPuLogger);
	UClass* Z_Construct_UClass_UAgoraBPuLogger_NoRegister()
	{
		return UAgoraBPuLogger::StaticClass();
	}
	struct Z_Construct_UClass_UAgoraBPuLogger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAgoraBPuLogger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuLogger_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuLogger_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AgoraBlueprintPlugin/UtilityAgoraBPuLogger.h" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/UtilityAgoraBPuLogger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAgoraBPuLogger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgoraBPuLogger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAgoraBPuLogger_Statics::ClassParams = {
		&UAgoraBPuLogger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuLogger_Statics::Class_MetaDataParams), Z_Construct_UClass_UAgoraBPuLogger_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAgoraBPuLogger()
	{
		if (!Z_Registration_Info_UClass_UAgoraBPuLogger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAgoraBPuLogger.OuterSingleton, Z_Construct_UClass_UAgoraBPuLogger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAgoraBPuLogger.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UAgoraBPuLogger>()
	{
		return UAgoraBPuLogger::StaticClass();
	}
	UAgoraBPuLogger::UAgoraBPuLogger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAgoraBPuLogger);
	UAgoraBPuLogger::~UAgoraBPuLogger() {}
	struct Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_UtilityAgoraBPuLogger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_UtilityAgoraBPuLogger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAgoraBPuLogger, UAgoraBPuLogger::StaticClass, TEXT("UAgoraBPuLogger"), &Z_Registration_Info_UClass_UAgoraBPuLogger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAgoraBPuLogger), 1828081371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_UtilityAgoraBPuLogger_h_1047257851(TEXT("/Script/AgoraPlugin"),
		Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_UtilityAgoraBPuLogger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_UtilityAgoraBPuLogger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
