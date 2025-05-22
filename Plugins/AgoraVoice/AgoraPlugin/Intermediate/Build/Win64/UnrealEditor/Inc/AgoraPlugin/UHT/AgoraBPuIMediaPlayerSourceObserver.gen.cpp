// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraBPuIMediaPlayerSourceObserver() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_NoRegister();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_PLAYER_EVENT();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_PLAYER_REASON();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_PLAYER_STATE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EUABT_PLAYER_PRELOAD_EVENT();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUABT_CacheStatistics();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUABT_SrcInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UABT_SrcInfo;
class UScriptStruct* FUABT_SrcInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UABT_SrcInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UABT_SrcInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUABT_SrcInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("UABT_SrcInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UABT_SrcInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FUABT_SrcInfo>()
{
	return FUABT_SrcInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bitrateInKbps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_bitrateInKbps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUABT_SrcInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::NewProp_bitrateInKbps_MetaData[] = {
		{ "Category", "Agora|SrcInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::NewProp_bitrateInKbps = { "bitrateInKbps", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_SrcInfo, bitrateInKbps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::NewProp_bitrateInKbps_MetaData), Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::NewProp_bitrateInKbps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Agora|SrcInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_SrcInfo, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::NewProp_bitrateInKbps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::NewProp_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"UABT_SrcInfo",
		Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::PropPointers),
		sizeof(FUABT_SrcInfo),
		alignof(FUABT_SrcInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUABT_SrcInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_UABT_SrcInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UABT_SrcInfo.InnerSingleton, Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UABT_SrcInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UABT_CacheStatistics;
class UScriptStruct* FUABT_CacheStatistics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UABT_CacheStatistics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UABT_CacheStatistics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUABT_CacheStatistics, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("UABT_CacheStatistics"));
	}
	return Z_Registration_Info_UScriptStruct_UABT_CacheStatistics.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FUABT_CacheStatistics>()
{
	return FUABT_CacheStatistics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileSize_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cacheSize_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_cacheSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_downloadSize_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_downloadSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUABT_CacheStatistics>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_fileSize_MetaData[] = {
		{ "Category", "Agora|CacheStatistics" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_fileSize = { "fileSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_CacheStatistics, fileSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_fileSize_MetaData), Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_fileSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_cacheSize_MetaData[] = {
		{ "Category", "Agora|CacheStatistics" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_cacheSize = { "cacheSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_CacheStatistics, cacheSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_cacheSize_MetaData), Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_cacheSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_downloadSize_MetaData[] = {
		{ "Category", "Agora|CacheStatistics" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_downloadSize = { "downloadSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_CacheStatistics, downloadSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_downloadSize_MetaData), Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_downloadSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_fileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_cacheSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewProp_downloadSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"UABT_CacheStatistics",
		Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::PropPointers),
		sizeof(FUABT_CacheStatistics),
		alignof(FUABT_CacheStatistics),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUABT_CacheStatistics()
	{
		if (!Z_Registration_Info_UScriptStruct_UABT_CacheStatistics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UABT_CacheStatistics.InnerSingleton, Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UABT_CacheStatistics.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UABT_PlayerPlaybackStats;
class UScriptStruct* FUABT_PlayerPlaybackStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UABT_PlayerPlaybackStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UABT_PlayerPlaybackStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("UABT_PlayerPlaybackStats"));
	}
	return Z_Registration_Info_UScriptStruct_UABT_PlayerPlaybackStats.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FUABT_PlayerPlaybackStats>()
{
	return FUABT_PlayerPlaybackStats::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoFps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoFps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoBitrateInKbps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoBitrateInKbps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioBitrateInKbps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_audioBitrateInKbps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_totalBitrateInKbps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_totalBitrateInKbps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUABT_PlayerPlaybackStats>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_videoFps_MetaData[] = {
		{ "Category", "Agora|FUABT_PlayerPlaybackStats" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_videoFps = { "videoFps", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerPlaybackStats, videoFps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_videoFps_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_videoFps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_videoBitrateInKbps_MetaData[] = {
		{ "Category", "Agora|FUABT_PlayerPlaybackStats" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_videoBitrateInKbps = { "videoBitrateInKbps", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerPlaybackStats, videoBitrateInKbps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_videoBitrateInKbps_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_videoBitrateInKbps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_audioBitrateInKbps_MetaData[] = {
		{ "Category", "Agora|FUABT_PlayerPlaybackStats" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_audioBitrateInKbps = { "audioBitrateInKbps", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerPlaybackStats, audioBitrateInKbps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_audioBitrateInKbps_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_audioBitrateInKbps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_totalBitrateInKbps_MetaData[] = {
		{ "Category", "Agora|FUABT_PlayerPlaybackStats" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_totalBitrateInKbps = { "totalBitrateInKbps", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerPlaybackStats, totalBitrateInKbps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_totalBitrateInKbps_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_totalBitrateInKbps_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_videoFps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_videoBitrateInKbps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_audioBitrateInKbps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewProp_totalBitrateInKbps,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"UABT_PlayerPlaybackStats",
		Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::PropPointers),
		sizeof(FUABT_PlayerPlaybackStats),
		alignof(FUABT_PlayerPlaybackStats),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats()
	{
		if (!Z_Registration_Info_UScriptStruct_UABT_PlayerPlaybackStats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UABT_PlayerPlaybackStats.InnerSingleton, Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UABT_PlayerPlaybackStats.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UABT_PlayerUpdatedInfo;
class UScriptStruct* FUABT_PlayerUpdatedInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UABT_PlayerUpdatedInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UABT_PlayerUpdatedInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("UABT_PlayerUpdatedInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UABT_PlayerUpdatedInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FUABT_PlayerUpdatedInfo>()
{
	return FUABT_PlayerUpdatedInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_internalPlayerUuid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_internalPlayerUuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_audioSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_audioChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioBitsPerSample_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_audioBitsPerSample;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUABT_PlayerUpdatedInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_internalPlayerUuid_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_internalPlayerUuid = { "internalPlayerUuid", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerUpdatedInfo, internalPlayerUuid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_internalPlayerUuid_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_internalPlayerUuid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_deviceId_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerUpdatedInfo, deviceId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_deviceId_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_deviceId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_videoHeight_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_videoHeight = { "videoHeight", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerUpdatedInfo, videoHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_videoHeight_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_videoHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_videoWidth_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_videoWidth = { "videoWidth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerUpdatedInfo, videoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_videoWidth_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_videoWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioSampleRate_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioSampleRate = { "audioSampleRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerUpdatedInfo, audioSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioSampleRate_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioSampleRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioChannels_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioChannels = { "audioChannels", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerUpdatedInfo, audioChannels), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioChannels_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioChannels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioBitsPerSample_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioBitsPerSample = { "audioBitsPerSample", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerUpdatedInfo, audioBitsPerSample), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioBitsPerSample_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioBitsPerSample_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_internalPlayerUuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_videoHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_videoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewProp_audioBitsPerSample,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"UABT_PlayerUpdatedInfo",
		Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::PropPointers),
		sizeof(FUABT_PlayerUpdatedInfo),
		alignof(FUABT_PlayerUpdatedInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_UABT_PlayerUpdatedInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UABT_PlayerUpdatedInfo.InnerSingleton, Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UABT_PlayerUpdatedInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms
		{
			EUABT_MEDIA_PLAYER_STATE state;
			EUABT_MEDIA_PLAYER_REASON ec;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ec_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms, state), Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_PLAYER_STATE, METADATA_PARAMS(0, nullptr) }; // 1982326808
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_ec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_ec = { "ec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms, ec), Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_PLAYER_REASON, METADATA_PARAMS(0, nullptr) }; // 246967344
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_ec_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_ec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerSourceStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerSourceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSourceStateChanged, EUABT_MEDIA_PLAYER_STATE state, EUABT_MEDIA_PLAYER_REASON ec)
{
	struct _Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms
	{
		EUABT_MEDIA_PLAYER_STATE state;
		EUABT_MEDIA_PLAYER_REASON ec;
	};
	_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms Parms;
	Parms.state=state;
	Parms.ec=ec;
	OnPlayerSourceStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPositionChanged_Parms
		{
			int64 position_ms;
			int64 timestampMs;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_position_ms;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_timestampMs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::NewProp_position_ms = { "position_ms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPositionChanged_Parms, position_ms), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::NewProp_timestampMs = { "timestampMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPositionChanged_Parms, timestampMs), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::NewProp_position_ms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::NewProp_timestampMs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPositionChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPositionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPositionChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPositionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPositionChanged, int64 position_ms, int64 timestampMs)
{
	struct _Script_AgoraPlugin_eventOnPositionChanged_Parms
	{
		int64 position_ms;
		int64 timestampMs;
	};
	_Script_AgoraPlugin_eventOnPositionChanged_Parms Parms;
	Parms.position_ms=position_ms;
	Parms.timestampMs=timestampMs;
	OnPositionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerEvent_Parms
		{
			EUABT_MEDIA_PLAYER_EVENT eventCode;
			int64 elapsedTime;
			FString message;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventCode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventCode;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_elapsedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_eventCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_eventCode = { "eventCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerEvent_Parms, eventCode), Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_PLAYER_EVENT, METADATA_PARAMS(0, nullptr) }; // 3782630673
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_elapsedTime = { "elapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerEvent_Parms, elapsedTime), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerEvent_Parms, message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_eventCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_eventCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_elapsedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerEvent, EUABT_MEDIA_PLAYER_EVENT eventCode, int64 elapsedTime, const FString& message)
{
	struct _Script_AgoraPlugin_eventOnPlayerEvent_Parms
	{
		EUABT_MEDIA_PLAYER_EVENT eventCode;
		int64 elapsedTime;
		FString message;
	};
	_Script_AgoraPlugin_eventOnPlayerEvent_Parms Parms;
	Parms.eventCode=eventCode;
	Parms.elapsedTime=elapsedTime;
	Parms.message=message;
	OnPlayerEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnMetaDataSource_Parms
		{
			FString Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMetaDataSource_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_Data_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnMetaDataSource__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMetaDataSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMetaDataSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMetaDataSource_DelegateWrapper(const FMulticastScriptDelegate& OnMetaDataSource, const FString& Data)
{
	struct _Script_AgoraPlugin_eventOnMetaDataSource_Parms
	{
		FString Data;
	};
	_Script_AgoraPlugin_eventOnMetaDataSource_Parms Parms;
	Parms.Data=Data;
	OnMetaDataSource.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms
		{
			int64 playCachedBuffer;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_playCachedBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::NewProp_playCachedBuffer = { "playCachedBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms, playCachedBuffer), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::NewProp_playCachedBuffer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayBufferUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayBufferUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayBufferUpdated, int64 playCachedBuffer)
{
	struct _Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms
	{
		int64 playCachedBuffer;
	};
	_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms Parms;
	Parms.playCachedBuffer=playCachedBuffer;
	OnPlayBufferUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPreloadEvent_Parms
		{
			FString src;
			EUABT_PLAYER_PRELOAD_EVENT event;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static const UECodeGen_Private::FBytePropertyParams NewProp_event_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_event;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPreloadEvent_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event = { "event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPreloadEvent_Parms, event), Z_Construct_UEnum_AgoraPlugin_EUABT_PLAYER_PRELOAD_EVENT, METADATA_PARAMS(0, nullptr) }; // 296056465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPreloadEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPreloadEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPreloadEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPreloadEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPreloadEvent, const FString& src, EUABT_PLAYER_PRELOAD_EVENT event)
{
	struct _Script_AgoraPlugin_eventOnPreloadEvent_Parms
	{
		FString src;
		EUABT_PLAYER_PRELOAD_EVENT event;
	};
	_Script_AgoraPlugin_eventOnPreloadEvent_Parms Parms;
	Parms.src=src;
	Parms.event=event;
	OnPreloadEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnCompleted)
{
	OnCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnAgoraCDNTokenWillExpire__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAgoraCDNTokenWillExpire_DelegateWrapper(const FMulticastScriptDelegate& OnAgoraCDNTokenWillExpire)
{
	OnAgoraCDNTokenWillExpire.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms
		{
			FUABT_SrcInfo from;
			FUABT_SrcInfo to;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_from_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_from;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_to_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_to;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from = { "from", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms, from), Z_Construct_UScriptStruct_FUABT_SrcInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from_MetaData) }; // 3701462104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms, to), Z_Construct_UScriptStruct_FUABT_SrcInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to_MetaData) }; // 3701462104
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerSrcInfoChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerSrcInfoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSrcInfoChanged, FUABT_SrcInfo const& from, FUABT_SrcInfo const& to)
{
	struct _Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms
	{
		FUABT_SrcInfo from;
		FUABT_SrcInfo to;
	};
	_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms Parms;
	Parms.from=from;
	Parms.to=to;
	OnPlayerSrcInfoChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms
		{
			FUABT_PlayerUpdatedInfo info;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms, info), Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData) }; // 1135266717
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerInfoUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerInfoUpdated, FUABT_PlayerUpdatedInfo const& info)
{
	struct _Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms
	{
		FUABT_PlayerUpdatedInfo info;
	};
	_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms Parms;
	Parms.info=info;
	OnPlayerInfoUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms
		{
			int32 volume;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms, volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnAudioVolumeIndicationSource__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioVolumeIndicationSource_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeIndicationSource, int32 volume)
{
	struct _Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms
	{
		int32 volume;
	};
	_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms Parms;
	Parms.volume=volume;
	OnAudioVolumeIndicationSource.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerCacheStats_Parms
		{
			FUABT_CacheStatistics stats;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_stats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::NewProp_stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerCacheStats_Parms, stats), Z_Construct_UScriptStruct_FUABT_CacheStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::NewProp_stats_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::NewProp_stats_MetaData) }; // 2267925708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::NewProp_stats,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerCacheStats__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerCacheStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerCacheStats_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerCacheStats_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerCacheStats, FUABT_CacheStatistics const& stats)
{
	struct _Script_AgoraPlugin_eventOnPlayerCacheStats_Parms
	{
		FUABT_CacheStatistics stats;
	};
	_Script_AgoraPlugin_eventOnPlayerCacheStats_Parms Parms;
	Parms.stats=stats;
	OnPlayerCacheStats.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerPlaybackStats_Parms
		{
			FUABT_PlayerPlaybackStats stats;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_stats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::NewProp_stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerPlaybackStats_Parms, stats), Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::NewProp_stats_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::NewProp_stats_MetaData) }; // 471962108
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::NewProp_stats,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerPlaybackStats__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerPlaybackStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerPlaybackStats_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerPlaybackStats_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerPlaybackStats, FUABT_PlayerPlaybackStats const& stats)
{
	struct _Script_AgoraPlugin_eventOnPlayerPlaybackStats_Parms
	{
		FUABT_PlayerPlaybackStats stats;
	};
	_Script_AgoraPlugin_eventOnPlayerPlaybackStats_Parms Parms;
	Parms.stats=stats;
	OnPlayerPlaybackStats.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserver::execRemoveAllBlueprintCallbackExecutors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllBlueprintCallbackExecutors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserver::execAddBlueprintCallbackExecutor)
	{
		P_GET_OBJECT(UAgoraBPuIMediaPlayerSourceObserverCBExecutor,Z_Param_Executor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBlueprintCallbackExecutor(Z_Param_Executor);
		P_NATIVE_END;
	}
	void UAgoraBPuIMediaPlayerSourceObserver::StaticRegisterNativesUAgoraBPuIMediaPlayerSourceObserver()
	{
		UClass* Class = UAgoraBPuIMediaPlayerSourceObserver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBlueprintCallbackExecutor", &UAgoraBPuIMediaPlayerSourceObserver::execAddBlueprintCallbackExecutor },
			{ "RemoveAllBlueprintCallbackExecutors", &UAgoraBPuIMediaPlayerSourceObserver::execRemoveAllBlueprintCallbackExecutors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics
	{
		struct AgoraBPuIMediaPlayerSourceObserver_eventAddBlueprintCallbackExecutor_Parms
		{
			UAgoraBPuIMediaPlayerSourceObserverCBExecutor* Executor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Executor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::NewProp_Executor = { "Executor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserver_eventAddBlueprintCallbackExecutor_Parms, Executor), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::NewProp_Executor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// You could add multiple executors to the target handler\n" },
#endif
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You could add multiple executors to the target handler" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver, nullptr, "AddBlueprintCallbackExecutor", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::AgoraBPuIMediaPlayerSourceObserver_eventAddBlueprintCallbackExecutor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::AgoraBPuIMediaPlayerSourceObserver_eventAddBlueprintCallbackExecutor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver, nullptr, "RemoveAllBlueprintCallbackExecutors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAgoraBPuIMediaPlayerSourceObserver);
	UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_NoRegister()
	{
		return UAgoraBPuIMediaPlayerSourceObserver::StaticClass();
	}
	struct Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerSourceStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerSourceStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPositionChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPositionChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayBufferUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayBufferUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreloadEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreloadEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAgoraCDNTokenWillExpire_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAgoraCDNTokenWillExpire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerSrcInfoChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerSrcInfoChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerInfoUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerInfoUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerCacheStats_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerCacheStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerPlaybackStats_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerPlaybackStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioVolumeIndication_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioVolumeIndication;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor, "AddBlueprintCallbackExecutor" }, // 2474048239
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors, "RemoveAllBlueprintCallbackExecutors" }, // 4124811173
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged = { "OnPlayerSourceStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayerSourceStateChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged_MetaData) }; // 2255672007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged = { "OnPositionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPositionChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged_MetaData) }; // 220964126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent = { "OnPlayerEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayerEvent), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent_MetaData) }; // 1740694254
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData = { "OnMetaData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnMetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData_MetaData) }; // 403737780
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated = { "OnPlayBufferUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayBufferUpdated), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated_MetaData) }; // 3277995410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent = { "OnPreloadEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPreloadEvent), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent_MetaData) }; // 3755549162
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnCompleted), Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted_MetaData) }; // 3678925250
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire = { "OnAgoraCDNTokenWillExpire", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnAgoraCDNTokenWillExpire), Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire_MetaData) }; // 1130107449
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged = { "OnPlayerSrcInfoChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayerSrcInfoChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged_MetaData) }; // 3790140747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated = { "OnPlayerInfoUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayerInfoUpdated), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated_MetaData) }; // 3158873167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerCacheStats_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerCacheStats = { "OnPlayerCacheStats", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayerCacheStats), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerCacheStats_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerCacheStats_MetaData) }; // 862487575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerPlaybackStats_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerPlaybackStats = { "OnPlayerPlaybackStats", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayerPlaybackStats), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerPlaybackStats_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerPlaybackStats_MetaData) }; // 3342793995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication = { "OnAudioVolumeIndication", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnAudioVolumeIndication), Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication_MetaData), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication_MetaData) }; // 1381491133
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerCacheStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerPlaybackStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgoraBPuIMediaPlayerSourceObserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::ClassParams = {
		&UAgoraBPuIMediaPlayerSourceObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver()
	{
		if (!Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserver.OuterSingleton, Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserver.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UAgoraBPuIMediaPlayerSourceObserver>()
	{
		return UAgoraBPuIMediaPlayerSourceObserver::StaticClass();
	}
	UAgoraBPuIMediaPlayerSourceObserver::UAgoraBPuIMediaPlayerSourceObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAgoraBPuIMediaPlayerSourceObserver);
	UAgoraBPuIMediaPlayerSourceObserver::~UAgoraBPuIMediaPlayerSourceObserver() {}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnAudioVolumeIndication)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAudioVolumeIndication_Implementation(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerPlaybackStats)
	{
		P_GET_STRUCT_REF(FUABT_PlayerPlaybackStats,Z_Param_Out_stats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerPlaybackStats_Implementation(Z_Param_Out_stats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerCacheStats)
	{
		P_GET_STRUCT_REF(FUABT_CacheStatistics,Z_Param_Out_stats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerCacheStats_Implementation(Z_Param_Out_stats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerInfoUpdated)
	{
		P_GET_STRUCT_REF(FUABT_PlayerUpdatedInfo,Z_Param_Out_info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerInfoUpdated_Implementation(Z_Param_Out_info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerSrcInfoChanged)
	{
		P_GET_STRUCT_REF(FUABT_SrcInfo,Z_Param_Out_from);
		P_GET_STRUCT_REF(FUABT_SrcInfo,Z_Param_Out_to);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerSrcInfoChanged_Implementation(Z_Param_Out_from,Z_Param_Out_to);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnAgoraCDNTokenWillExpire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAgoraCDNTokenWillExpire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPreloadEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_ENUM(EUABT_PLAYER_PRELOAD_EVENT,Z_Param_event);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreloadEvent_Implementation(Z_Param_src,EUABT_PLAYER_PRELOAD_EVENT(Z_Param_event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayBufferUpdated)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_playCachedBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayBufferUpdated_Implementation(Z_Param_playCachedBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnMetaData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMetaData_Implementation(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerEvent)
	{
		P_GET_ENUM(EUABT_MEDIA_PLAYER_EVENT,Z_Param_eventCode);
		P_GET_PROPERTY(FInt64Property,Z_Param_elapsedTime);
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerEvent_Implementation(EUABT_MEDIA_PLAYER_EVENT(Z_Param_eventCode),Z_Param_elapsedTime,Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPositionChanged)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_position_ms);
		P_GET_PROPERTY(FInt64Property,Z_Param_timestampMs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPositionChanged_Implementation(Z_Param_position_ms,Z_Param_timestampMs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerSourceStateChanged)
	{
		P_GET_ENUM(EUABT_MEDIA_PLAYER_STATE,Z_Param_state);
		P_GET_ENUM(EUABT_MEDIA_PLAYER_REASON,Z_Param_ec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerSourceStateChanged_Implementation(EUABT_MEDIA_PLAYER_STATE(Z_Param_state),EUABT_MEDIA_PLAYER_REASON(Z_Param_ec));
		P_NATIVE_END;
	}
	struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnAudioVolumeIndication_Parms
	{
		int32 volume;
	};
	struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnMetaData_Parms
	{
		FString Data;
	};
	struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayBufferUpdated_Parms
	{
		int64 playCachedBuffer;
	};
	struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerCacheStats_Parms
	{
		FUABT_CacheStatistics stats;
	};
	struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms
	{
		EUABT_MEDIA_PLAYER_EVENT eventCode;
		int64 elapsedTime;
		FString message;
	};
	struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerInfoUpdated_Parms
	{
		FUABT_PlayerUpdatedInfo info;
	};
	struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerPlaybackStats_Parms
	{
		FUABT_PlayerPlaybackStats stats;
	};
	struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSourceStateChanged_Parms
	{
		EUABT_MEDIA_PLAYER_STATE state;
		EUABT_MEDIA_PLAYER_REASON ec;
	};
	struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSrcInfoChanged_Parms
	{
		FUABT_SrcInfo from;
		FUABT_SrcInfo to;
	};
	struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPositionChanged_Parms
	{
		int64 position_ms;
		int64 timestampMs;
	};
	struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPreloadEvent_Parms
	{
		FString src;
		EUABT_PLAYER_PRELOAD_EVENT event;
	};
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire = FName(TEXT("OnAgoraCDNTokenWillExpire"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnAgoraCDNTokenWillExpire()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire),NULL);
	}
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication = FName(TEXT("OnAudioVolumeIndication"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnAudioVolumeIndication(int32 volume)
	{
		AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnAudioVolumeIndication_Parms Parms;
		Parms.volume=volume;
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication),&Parms);
	}
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted = FName(TEXT("OnCompleted"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted),NULL);
	}
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData = FName(TEXT("OnMetaData"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnMetaData(const FString& Data)
	{
		AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnMetaData_Parms Parms;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData),&Parms);
	}
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated = FName(TEXT("OnPlayBufferUpdated"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayBufferUpdated(int64 playCachedBuffer)
	{
		AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayBufferUpdated_Parms Parms;
		Parms.playCachedBuffer=playCachedBuffer;
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated),&Parms);
	}
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats = FName(TEXT("OnPlayerCacheStats"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayerCacheStats(FUABT_CacheStatistics const& stats)
	{
		AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerCacheStats_Parms Parms;
		Parms.stats=stats;
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats),&Parms);
	}
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent = FName(TEXT("OnPlayerEvent"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayerEvent(EUABT_MEDIA_PLAYER_EVENT eventCode, int64 elapsedTime, const FString& message)
	{
		AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms Parms;
		Parms.eventCode=eventCode;
		Parms.elapsedTime=elapsedTime;
		Parms.message=message;
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent),&Parms);
	}
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated = FName(TEXT("OnPlayerInfoUpdated"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayerInfoUpdated(FUABT_PlayerUpdatedInfo const& info)
	{
		AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerInfoUpdated_Parms Parms;
		Parms.info=info;
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated),&Parms);
	}
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats = FName(TEXT("OnPlayerPlaybackStats"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayerPlaybackStats(FUABT_PlayerPlaybackStats const& stats)
	{
		AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerPlaybackStats_Parms Parms;
		Parms.stats=stats;
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats),&Parms);
	}
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged = FName(TEXT("OnPlayerSourceStateChanged"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayerSourceStateChanged(EUABT_MEDIA_PLAYER_STATE state, EUABT_MEDIA_PLAYER_REASON ec)
	{
		AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSourceStateChanged_Parms Parms;
		Parms.state=state;
		Parms.ec=ec;
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged),&Parms);
	}
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged = FName(TEXT("OnPlayerSrcInfoChanged"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayerSrcInfoChanged(FUABT_SrcInfo const& from, FUABT_SrcInfo const& to)
	{
		AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSrcInfoChanged_Parms Parms;
		Parms.from=from;
		Parms.to=to;
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged),&Parms);
	}
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged = FName(TEXT("OnPositionChanged"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPositionChanged(int64 position_ms, int64 timestampMs)
	{
		AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPositionChanged_Parms Parms;
		Parms.position_ms=position_ms;
		Parms.timestampMs=timestampMs;
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged),&Parms);
	}
	static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent = FName(TEXT("OnPreloadEvent"));
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPreloadEvent(const FString& src, EUABT_PLAYER_PRELOAD_EVENT event)
	{
		AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPreloadEvent_Parms Parms;
		Parms.src=src;
		Parms.event=event;
		ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent),&Parms);
	}
	void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::StaticRegisterNativesUAgoraBPuIMediaPlayerSourceObserverCBExecutor()
	{
		UClass* Class = UAgoraBPuIMediaPlayerSourceObserverCBExecutor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAgoraCDNTokenWillExpire", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnAgoraCDNTokenWillExpire },
			{ "OnAudioVolumeIndication", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnAudioVolumeIndication },
			{ "OnCompleted", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnCompleted },
			{ "OnMetaData", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnMetaData },
			{ "OnPlayBufferUpdated", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayBufferUpdated },
			{ "OnPlayerCacheStats", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerCacheStats },
			{ "OnPlayerEvent", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerEvent },
			{ "OnPlayerInfoUpdated", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerInfoUpdated },
			{ "OnPlayerPlaybackStats", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerPlaybackStats },
			{ "OnPlayerSourceStateChanged", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerSourceStateChanged },
			{ "OnPlayerSrcInfoChanged", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerSrcInfoChanged },
			{ "OnPositionChanged", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPositionChanged },
			{ "OnPreloadEvent", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPreloadEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnAgoraCDNTokenWillExpire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnAudioVolumeIndication_Parms, volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnAudioVolumeIndication", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnAudioVolumeIndication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::PropPointers) < 2048);
	static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnAudioVolumeIndication_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnMetaData_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnMetaData", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::PropPointers) < 2048);
	static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnMetaData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics
	{
		static const UECodeGen_Private::FInt64PropertyParams NewProp_playCachedBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::NewProp_playCachedBuffer = { "playCachedBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayBufferUpdated_Parms, playCachedBuffer), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::NewProp_playCachedBuffer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayBufferUpdated", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayBufferUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayBufferUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_stats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::NewProp_stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerCacheStats_Parms, stats), Z_Construct_UScriptStruct_FUABT_CacheStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::NewProp_stats_MetaData), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::NewProp_stats_MetaData) }; // 2267925708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::NewProp_stats,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayerCacheStats", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerCacheStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::PropPointers) < 2048);
	static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerCacheStats_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventCode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventCode;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_elapsedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_eventCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_eventCode = { "eventCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms, eventCode), Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_PLAYER_EVENT, METADATA_PARAMS(0, nullptr) }; // 3782630673
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_elapsedTime = { "elapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms, elapsedTime), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms, message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_message_MetaData), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_eventCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_eventCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_elapsedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayerEvent", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::NewProp_info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerInfoUpdated_Parms, info), Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::NewProp_info_MetaData), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::NewProp_info_MetaData) }; // 1135266717
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::NewProp_info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayerInfoUpdated", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerInfoUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerInfoUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_stats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::NewProp_stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerPlaybackStats_Parms, stats), Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::NewProp_stats_MetaData), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::NewProp_stats_MetaData) }; // 471962108
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::NewProp_stats,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayerPlaybackStats", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerPlaybackStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::PropPointers) < 2048);
	static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerPlaybackStats_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ec_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSourceStateChanged_Parms, state), Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_PLAYER_STATE, METADATA_PARAMS(0, nullptr) }; // 1982326808
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_ec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_ec = { "ec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSourceStateChanged_Parms, ec), Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_PLAYER_REASON, METADATA_PARAMS(0, nullptr) }; // 246967344
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_state_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_state,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_ec_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_ec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayerSourceStateChanged", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSourceStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSourceStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_from_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_from;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_to_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_to;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_from_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_from = { "from", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSrcInfoChanged_Parms, from), Z_Construct_UScriptStruct_FUABT_SrcInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_from_MetaData), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_from_MetaData) }; // 3701462104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_to_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSrcInfoChanged_Parms, to), Z_Construct_UScriptStruct_FUABT_SrcInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_to_MetaData), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_to_MetaData) }; // 3701462104
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_from,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_to,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayerSrcInfoChanged", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSrcInfoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSrcInfoChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics
	{
		static const UECodeGen_Private::FInt64PropertyParams NewProp_position_ms;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_timestampMs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::NewProp_position_ms = { "position_ms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPositionChanged_Parms, position_ms), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::NewProp_timestampMs = { "timestampMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPositionChanged_Parms, timestampMs), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::NewProp_position_ms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::NewProp_timestampMs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPositionChanged", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPositionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPositionChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static const UECodeGen_Private::FBytePropertyParams NewProp_event_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_event;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPreloadEvent_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_src_MetaData), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_src_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_event = { "event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPreloadEvent_Parms, event), Z_Construct_UEnum_AgoraPlugin_EUABT_PLAYER_PRELOAD_EVENT, METADATA_PARAMS(0, nullptr) }; // 296056465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_event_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_event,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPreloadEvent", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPreloadEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPreloadEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor);
	UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_NoRegister()
	{
		return UAgoraBPuIMediaPlayerSourceObserverCBExecutor::StaticClass();
	}
	struct Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire, "OnAgoraCDNTokenWillExpire" }, // 1881320480
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication, "OnAudioVolumeIndication" }, // 902900129
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted, "OnCompleted" }, // 1214583685
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData, "OnMetaData" }, // 2511417560
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated, "OnPlayBufferUpdated" }, // 3997683749
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats, "OnPlayerCacheStats" }, // 3061082528
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent, "OnPlayerEvent" }, // 935352056
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated, "OnPlayerInfoUpdated" }, // 1392445006
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats, "OnPlayerPlaybackStats" }, // 1963664158
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged, "OnPlayerSourceStateChanged" }, // 2876838564
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged, "OnPlayerSrcInfoChanged" }, // 694043007
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged, "OnPositionChanged" }, // 457394888
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent, "OnPreloadEvent" }, // 2229164571
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// this is a blueprint callback executor which you could add to the target handler\n" },
#endif
		{ "IncludePath", "AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
		{ "ShowWorldContextPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this is a blueprint callback executor which you could add to the target handler" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgoraBPuIMediaPlayerSourceObserverCBExecutor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::ClassParams = {
		&UAgoraBPuIMediaPlayerSourceObserverCBExecutor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::Class_MetaDataParams), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor()
	{
		if (!Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor.OuterSingleton, Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UAgoraBPuIMediaPlayerSourceObserverCBExecutor>()
	{
		return UAgoraBPuIMediaPlayerSourceObserverCBExecutor::StaticClass();
	}
	UAgoraBPuIMediaPlayerSourceObserverCBExecutor::UAgoraBPuIMediaPlayerSourceObserverCBExecutor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAgoraBPuIMediaPlayerSourceObserverCBExecutor);
	UAgoraBPuIMediaPlayerSourceObserverCBExecutor::~UAgoraBPuIMediaPlayerSourceObserverCBExecutor() {}
	struct Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics::ScriptStructInfo[] = {
		{ FUABT_SrcInfo::StaticStruct, Z_Construct_UScriptStruct_FUABT_SrcInfo_Statics::NewStructOps, TEXT("UABT_SrcInfo"), &Z_Registration_Info_UScriptStruct_UABT_SrcInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUABT_SrcInfo), 3701462104U) },
		{ FUABT_CacheStatistics::StaticStruct, Z_Construct_UScriptStruct_FUABT_CacheStatistics_Statics::NewStructOps, TEXT("UABT_CacheStatistics"), &Z_Registration_Info_UScriptStruct_UABT_CacheStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUABT_CacheStatistics), 2267925708U) },
		{ FUABT_PlayerPlaybackStats::StaticStruct, Z_Construct_UScriptStruct_FUABT_PlayerPlaybackStats_Statics::NewStructOps, TEXT("UABT_PlayerPlaybackStats"), &Z_Registration_Info_UScriptStruct_UABT_PlayerPlaybackStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUABT_PlayerPlaybackStats), 471962108U) },
		{ FUABT_PlayerUpdatedInfo::StaticStruct, Z_Construct_UScriptStruct_FUABT_PlayerUpdatedInfo_Statics::NewStructOps, TEXT("UABT_PlayerUpdatedInfo"), &Z_Registration_Info_UScriptStruct_UABT_PlayerUpdatedInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUABT_PlayerUpdatedInfo), 1135266717U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver, UAgoraBPuIMediaPlayerSourceObserver::StaticClass, TEXT("UAgoraBPuIMediaPlayerSourceObserver"), &Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAgoraBPuIMediaPlayerSourceObserver), 3220379695U) },
		{ Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, UAgoraBPuIMediaPlayerSourceObserverCBExecutor::StaticClass, TEXT("UAgoraBPuIMediaPlayerSourceObserverCBExecutor"), &Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAgoraBPuIMediaPlayerSourceObserverCBExecutor), 1246782076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_810959755(TEXT("/Script/AgoraPlugin"),
		Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
