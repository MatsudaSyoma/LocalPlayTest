// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h"
#include "../AgoraBlueprintPlugin/AgoraBPuDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraBPuMediaPlayer() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuMediaPlayer();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuMediaPlayer_NoRegister();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EUABT_AUDIO_DUAL_MONO_MODE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_PLAYER_STATE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_STREAM_TYPE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EUABT_RENDER_MODE_TYPE();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUABT_AgoraMediaSource();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUABT_Opt_bool();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUABT_SpatialAudioParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UABT_AgoraMediaSource;
class UScriptStruct* FUABT_AgoraMediaSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UABT_AgoraMediaSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UABT_AgoraMediaSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUABT_AgoraMediaSource, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("UABT_AgoraMediaSource"));
	}
	return Z_Registration_Info_UScriptStruct_UABT_AgoraMediaSource.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FUABT_AgoraMediaSource>()
{
	return FUABT_AgoraMediaSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uri_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uri;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startPos_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_startPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_autoPlay_MetaData[];
#endif
		static void NewProp_autoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_autoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enableCache_MetaData[];
#endif
		static void NewProp_enableCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enableCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enableMultiAudioTrack_MetaData[];
#endif
		static void NewProp_enableMultiAudioTrack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enableMultiAudioTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAgoraSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_isAgoraSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isLiveSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_isLiveSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUABT_AgoraMediaSource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_url_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_AgoraMediaSource, url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_url_MetaData), Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_url_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_uri_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_uri = { "uri", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_AgoraMediaSource, uri), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_uri_MetaData), Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_uri_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_startPos_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_AgoraMediaSource, startPos), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_startPos_MetaData), Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_startPos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_autoPlay_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_autoPlay_SetBit(void* Obj)
	{
		((FUABT_AgoraMediaSource*)Obj)->autoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_autoPlay = { "autoPlay", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUABT_AgoraMediaSource), &Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_autoPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_autoPlay_MetaData), Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_autoPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableCache_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableCache_SetBit(void* Obj)
	{
		((FUABT_AgoraMediaSource*)Obj)->enableCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableCache = { "enableCache", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUABT_AgoraMediaSource), &Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableCache_MetaData), Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableCache_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableMultiAudioTrack_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableMultiAudioTrack_SetBit(void* Obj)
	{
		((FUABT_AgoraMediaSource*)Obj)->enableMultiAudioTrack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableMultiAudioTrack = { "enableMultiAudioTrack", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUABT_AgoraMediaSource), &Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableMultiAudioTrack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableMultiAudioTrack_MetaData), Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableMultiAudioTrack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_isAgoraSource_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_isAgoraSource = { "isAgoraSource", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_AgoraMediaSource, isAgoraSource), Z_Construct_UScriptStruct_FUABT_Opt_bool, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_isAgoraSource_MetaData), Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_isAgoraSource_MetaData) }; // 3100839770
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_isLiveSource_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_isLiveSource = { "isLiveSource", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_AgoraMediaSource, isLiveSource), Z_Construct_UScriptStruct_FUABT_Opt_bool, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_isLiveSource_MetaData), Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_isLiveSource_MetaData) }; // 3100839770
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_uri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_startPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_autoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_enableMultiAudioTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_isAgoraSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewProp_isLiveSource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"UABT_AgoraMediaSource",
		Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::PropPointers),
		sizeof(FUABT_AgoraMediaSource),
		alignof(FUABT_AgoraMediaSource),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUABT_AgoraMediaSource()
	{
		if (!Z_Registration_Info_UScriptStruct_UABT_AgoraMediaSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UABT_AgoraMediaSource.InnerSingleton, Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UABT_AgoraMediaSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UABT_PlayerStreamInfo;
class UScriptStruct* FUABT_PlayerStreamInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UABT_PlayerStreamInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UABT_PlayerStreamInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("UABT_PlayerStreamInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UABT_PlayerStreamInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FUABT_PlayerStreamInfo>()
{
	return FUABT_PlayerStreamInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_streamIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_streamIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_streamType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_streamType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_streamType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_codecName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_codecName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_language_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_language;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoBitRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoBitRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoRotation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoRotation;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUABT_PlayerStreamInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_streamIndex_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_streamIndex = { "streamIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, streamIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_streamIndex_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_streamIndex_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_streamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_streamType_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_streamType = { "streamType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, streamType), Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_STREAM_TYPE, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_streamType_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_streamType_MetaData) }; // 1772026805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_codecName_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_codecName = { "codecName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, codecName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_codecName_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_codecName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_language_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, language), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_language_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_language_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoFrameRate_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoFrameRate = { "videoFrameRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, videoFrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoFrameRate_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoFrameRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoBitRate_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoBitRate = { "videoBitRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, videoBitRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoBitRate_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoBitRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoWidth_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoWidth = { "videoWidth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, videoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoWidth_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoHeight_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoHeight = { "videoHeight", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, videoHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoHeight_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoRotation_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoRotation = { "videoRotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, videoRotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoRotation_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioSampleRate_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioSampleRate = { "audioSampleRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, audioSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioSampleRate_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioSampleRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioChannels_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioChannels = { "audioChannels", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, audioChannels), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioChannels_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioChannels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioBitsPerSample_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioBitsPerSample = { "audioBitsPerSample", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, audioBitsPerSample), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioBitsPerSample_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioBitsPerSample_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_duration_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUABT_PlayerStreamInfo, duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_duration_MetaData), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_duration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_streamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_streamType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_streamType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_codecName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoBitRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_videoRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_audioBitsPerSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewProp_duration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"UABT_PlayerStreamInfo",
		Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::PropPointers),
		sizeof(FUABT_PlayerStreamInfo),
		alignof(FUABT_PlayerStreamInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_UABT_PlayerStreamInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UABT_PlayerStreamInfo.InnerSingleton, Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UABT_PlayerStreamInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetSoundPositionParams)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_pan);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetSoundPositionParams(Z_Param_pan,Z_Param_gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetSpatialAudioParams)
	{
		P_GET_STRUCT_REF(FUABT_SpatialAudioParams,Z_Param_Out_params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetSpatialAudioParams(Z_Param_Out_params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execUnloadSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnloadSrc(Z_Param_src);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execPlayPreloadedSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PlayPreloadedSrc(Z_Param_src);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execPreloadSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PreloadSrc(Z_Param_src,Z_Param_startPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSwitchSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_UBOOL(Z_Param_syncPts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SwitchSrc(Z_Param_src,Z_Param_syncPts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSwitchAgoraCDNSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_UBOOL(Z_Param_syncPts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SwitchAgoraCDNSrc(Z_Param_src,Z_Param_syncPts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execRenewAgoraCDNSrcToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_PROPERTY(FInt64Property,Z_Param_ts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RenewAgoraCDNSrcToken(Z_Param_token,Z_Param_ts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execEnableAutoSwitchAgoraCDN)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->EnableAutoSwitchAgoraCDN(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetCurrentAgoraCDNIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAgoraCDNIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSwitchAgoraCDNLineByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SwitchAgoraCDNLineByIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetAgoraCDNLineCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAgoraCDNLineCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execOpenWithAgoraCDNSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->OpenWithAgoraCDNSrc(Z_Param_src,Z_Param_startPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetPlaySrc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlaySrc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetPlayerSdkVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlayerSdkVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetAudioDualMonoMode)
	{
		P_GET_ENUM(EUABT_AUDIO_DUAL_MONO_MODE,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetAudioDualMonoMode(EUABT_AUDIO_DUAL_MONO_MODE(Z_Param_mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetRenderMode)
	{
		P_GET_ENUM(EUABT_RENDER_MODE_TYPE,Z_Param_renderMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetRenderMode(EUABT_RENDER_MODE_TYPE(Z_Param_renderMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetView)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_view);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetView(Z_Param_view);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetPublishSignalVolume)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPublishSignalVolume(Z_Param_Out_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execAdjustPublishSignalVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AdjustPublishSignalVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetPlayoutVolume)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayoutVolume(Z_Param_Out_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execAdjustPlayoutVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AdjustPlayoutVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetMute)
	{
		P_GET_UBOOL_REF(Z_Param_Out_muted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMute(Z_Param_Out_muted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execMute)
	{
		P_GET_UBOOL(Z_Param_muted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Mute(Z_Param_muted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUABT_MEDIA_PLAYER_STATE*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetExternalSubtitle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetExternalSubtitle(Z_Param_url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSelectInternalSubtitle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SelectInternalSubtitle(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execTakeScreenshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->TakeScreenshot(Z_Param_filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetPlayerOptionWithString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlayerOptionWithString(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetPlayerOptionWithInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlayerOptionWithInt(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSelectMultiAudioTrack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playoutTrackIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_publishTrackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SelectMultiAudioTrack(Z_Param_playoutTrackIndex,Z_Param_publishTrackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSelectAudioTrack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SelectAudioTrack(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetPlaybackSpeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlaybackSpeed(Z_Param_speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetLoopCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_loopCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetLoopCount(Z_Param_loopCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetStreamInfo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_index);
		P_GET_STRUCT_REF(FUABT_PlayerStreamInfo,Z_Param_Out_info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStreamInfo(Z_Param_index,Z_Param_Out_info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetStreamCount)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStreamCount(Z_Param_Out_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetPlayPosition)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_pos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayPosition(Z_Param_Out_pos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetDuration)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDuration(Z_Param_Out_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetAudioPitch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_pitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetAudioPitch(Z_Param_pitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSeek)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_newPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Seek(Z_Param_newPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execResume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Resume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execOpenWithMediaSource)
	{
		P_GET_STRUCT_REF(FUABT_AgoraMediaSource,Z_Param_Out_source);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->OpenWithMediaSource(Z_Param_Out_source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execOpen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Open(Z_Param_url,Z_Param_startPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetMediaPlayerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMediaPlayerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetMediaPlayerSourceObserver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAgoraBPuIMediaPlayerSourceObserver**)Z_Param__Result=P_THIS->GetMediaPlayerSourceObserver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetAgoraMediaPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAgoraBPuMediaPlayer**)Z_Param__Result=UAgoraBPuMediaPlayer::GetAgoraMediaPlayer();
		P_NATIVE_END;
	}
	void UAgoraBPuMediaPlayer::StaticRegisterNativesUAgoraBPuMediaPlayer()
	{
		UClass* Class = UAgoraBPuMediaPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustPlayoutVolume", &UAgoraBPuMediaPlayer::execAdjustPlayoutVolume },
			{ "AdjustPublishSignalVolume", &UAgoraBPuMediaPlayer::execAdjustPublishSignalVolume },
			{ "EnableAutoSwitchAgoraCDN", &UAgoraBPuMediaPlayer::execEnableAutoSwitchAgoraCDN },
			{ "GetAgoraCDNLineCount", &UAgoraBPuMediaPlayer::execGetAgoraCDNLineCount },
			{ "GetAgoraMediaPlayer", &UAgoraBPuMediaPlayer::execGetAgoraMediaPlayer },
			{ "GetCurrentAgoraCDNIndex", &UAgoraBPuMediaPlayer::execGetCurrentAgoraCDNIndex },
			{ "GetDuration", &UAgoraBPuMediaPlayer::execGetDuration },
			{ "GetMediaPlayerId", &UAgoraBPuMediaPlayer::execGetMediaPlayerId },
			{ "GetMediaPlayerSourceObserver", &UAgoraBPuMediaPlayer::execGetMediaPlayerSourceObserver },
			{ "GetMute", &UAgoraBPuMediaPlayer::execGetMute },
			{ "GetPlayerSdkVersion", &UAgoraBPuMediaPlayer::execGetPlayerSdkVersion },
			{ "GetPlayoutVolume", &UAgoraBPuMediaPlayer::execGetPlayoutVolume },
			{ "GetPlayPosition", &UAgoraBPuMediaPlayer::execGetPlayPosition },
			{ "GetPlaySrc", &UAgoraBPuMediaPlayer::execGetPlaySrc },
			{ "GetPublishSignalVolume", &UAgoraBPuMediaPlayer::execGetPublishSignalVolume },
			{ "GetState", &UAgoraBPuMediaPlayer::execGetState },
			{ "GetStreamCount", &UAgoraBPuMediaPlayer::execGetStreamCount },
			{ "GetStreamInfo", &UAgoraBPuMediaPlayer::execGetStreamInfo },
			{ "Mute", &UAgoraBPuMediaPlayer::execMute },
			{ "Open", &UAgoraBPuMediaPlayer::execOpen },
			{ "OpenWithAgoraCDNSrc", &UAgoraBPuMediaPlayer::execOpenWithAgoraCDNSrc },
			{ "OpenWithMediaSource", &UAgoraBPuMediaPlayer::execOpenWithMediaSource },
			{ "Pause", &UAgoraBPuMediaPlayer::execPause },
			{ "Play", &UAgoraBPuMediaPlayer::execPlay },
			{ "PlayPreloadedSrc", &UAgoraBPuMediaPlayer::execPlayPreloadedSrc },
			{ "PreloadSrc", &UAgoraBPuMediaPlayer::execPreloadSrc },
			{ "Release", &UAgoraBPuMediaPlayer::execRelease },
			{ "RenewAgoraCDNSrcToken", &UAgoraBPuMediaPlayer::execRenewAgoraCDNSrcToken },
			{ "Resume", &UAgoraBPuMediaPlayer::execResume },
			{ "Seek", &UAgoraBPuMediaPlayer::execSeek },
			{ "SelectAudioTrack", &UAgoraBPuMediaPlayer::execSelectAudioTrack },
			{ "SelectInternalSubtitle", &UAgoraBPuMediaPlayer::execSelectInternalSubtitle },
			{ "SelectMultiAudioTrack", &UAgoraBPuMediaPlayer::execSelectMultiAudioTrack },
			{ "SetAudioDualMonoMode", &UAgoraBPuMediaPlayer::execSetAudioDualMonoMode },
			{ "SetAudioPitch", &UAgoraBPuMediaPlayer::execSetAudioPitch },
			{ "SetExternalSubtitle", &UAgoraBPuMediaPlayer::execSetExternalSubtitle },
			{ "SetLoopCount", &UAgoraBPuMediaPlayer::execSetLoopCount },
			{ "SetPlaybackSpeed", &UAgoraBPuMediaPlayer::execSetPlaybackSpeed },
			{ "SetPlayerOptionWithInt", &UAgoraBPuMediaPlayer::execSetPlayerOptionWithInt },
			{ "SetPlayerOptionWithString", &UAgoraBPuMediaPlayer::execSetPlayerOptionWithString },
			{ "SetRenderMode", &UAgoraBPuMediaPlayer::execSetRenderMode },
			{ "SetSoundPositionParams", &UAgoraBPuMediaPlayer::execSetSoundPositionParams },
			{ "SetSpatialAudioParams", &UAgoraBPuMediaPlayer::execSetSpatialAudioParams },
			{ "SetView", &UAgoraBPuMediaPlayer::execSetView },
			{ "Stop", &UAgoraBPuMediaPlayer::execStop },
			{ "SwitchAgoraCDNLineByIndex", &UAgoraBPuMediaPlayer::execSwitchAgoraCDNLineByIndex },
			{ "SwitchAgoraCDNSrc", &UAgoraBPuMediaPlayer::execSwitchAgoraCDNSrc },
			{ "SwitchSrc", &UAgoraBPuMediaPlayer::execSwitchSrc },
			{ "TakeScreenshot", &UAgoraBPuMediaPlayer::execTakeScreenshot },
			{ "UnloadSrc", &UAgoraBPuMediaPlayer::execUnloadSrc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics
	{
		struct AgoraBPuMediaPlayer_eventAdjustPlayoutVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventAdjustPlayoutVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventAdjustPlayoutVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "AdjustPlayoutVolume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::AgoraBPuMediaPlayer_eventAdjustPlayoutVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::AgoraBPuMediaPlayer_eventAdjustPlayoutVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics
	{
		struct AgoraBPuMediaPlayer_eventAdjustPublishSignalVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventAdjustPublishSignalVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventAdjustPublishSignalVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "AdjustPublishSignalVolume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::AgoraBPuMediaPlayer_eventAdjustPublishSignalVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::AgoraBPuMediaPlayer_eventAdjustPublishSignalVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics
	{
		struct AgoraBPuMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms
		{
			bool enable;
			int32 ReturnValue;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((AgoraBPuMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms), &Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "EnableAutoSwitchAgoraCDN", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::AgoraBPuMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::AgoraBPuMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetAgoraCDNLineCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetAgoraCDNLineCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetAgoraCDNLineCount", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::AgoraBPuMediaPlayer_eventGetAgoraCDNLineCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::AgoraBPuMediaPlayer_eventGetAgoraCDNLineCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetAgoraMediaPlayer_Parms
		{
			UAgoraBPuMediaPlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetAgoraMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UAgoraBPuMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAgoraMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetAgoraMediaPlayer", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::AgoraBPuMediaPlayer_eventGetAgoraMediaPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::AgoraBPuMediaPlayer_eventGetAgoraMediaPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetCurrentAgoraCDNIndex", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::AgoraBPuMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::AgoraBPuMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetDuration_Parms
		{
			int64 duration;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_duration;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetDuration_Parms, duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::NewProp_duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetDuration", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::AgoraBPuMediaPlayer_eventGetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::AgoraBPuMediaPlayer_eventGetDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetMediaPlayerId_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetMediaPlayerId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetMediaPlayerId", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::AgoraBPuMediaPlayer_eventGetMediaPlayerId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::AgoraBPuMediaPlayer_eventGetMediaPlayerId_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetMediaPlayerSourceObserver_Parms
		{
			UAgoraBPuIMediaPlayerSourceObserver* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetMediaPlayerSourceObserver_Parms, ReturnValue), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IRtcEngine" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetMediaPlayerSourceObserver", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::AgoraBPuMediaPlayer_eventGetMediaPlayerSourceObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::AgoraBPuMediaPlayer_eventGetMediaPlayerSourceObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetMute_Parms
		{
			bool muted;
			int32 ReturnValue;
		};
		static void NewProp_muted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_muted;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::NewProp_muted_SetBit(void* Obj)
	{
		((AgoraBPuMediaPlayer_eventGetMute_Parms*)Obj)->muted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::NewProp_muted = { "muted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuMediaPlayer_eventGetMute_Parms), &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::NewProp_muted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetMute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::NewProp_muted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetMute", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::AgoraBPuMediaPlayer_eventGetMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::AgoraBPuMediaPlayer_eventGetMute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetPlayerSdkVersion_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPlayerSdkVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetPlayerSdkVersion", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::AgoraBPuMediaPlayer_eventGetPlayerSdkVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::AgoraBPuMediaPlayer_eventGetPlayerSdkVersion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetPlayoutVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPlayoutVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPlayoutVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::NewProp_volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetPlayoutVolume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::AgoraBPuMediaPlayer_eventGetPlayoutVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::AgoraBPuMediaPlayer_eventGetPlayoutVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetPlayPosition_Parms
		{
			int64 pos;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_pos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPlayPosition_Parms, pos), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPlayPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::NewProp_pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetPlayPosition", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::AgoraBPuMediaPlayer_eventGetPlayPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::AgoraBPuMediaPlayer_eventGetPlayPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetPlaySrc_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPlaySrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetPlaySrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::AgoraBPuMediaPlayer_eventGetPlaySrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::AgoraBPuMediaPlayer_eventGetPlaySrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetPublishSignalVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPublishSignalVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPublishSignalVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::NewProp_volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetPublishSignalVolume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::AgoraBPuMediaPlayer_eventGetPublishSignalVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::AgoraBPuMediaPlayer_eventGetPublishSignalVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetState_Parms
		{
			EUABT_MEDIA_PLAYER_STATE ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_AgoraPlugin_EUABT_MEDIA_PLAYER_STATE, METADATA_PARAMS(0, nullptr) }; // 1982326808
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetState", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::AgoraBPuMediaPlayer_eventGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::AgoraBPuMediaPlayer_eventGetState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetStreamCount_Parms
		{
			int64 count;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_count;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetStreamCount_Parms, count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetStreamCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetStreamCount", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::AgoraBPuMediaPlayer_eventGetStreamCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::AgoraBPuMediaPlayer_eventGetStreamCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics
	{
		struct AgoraBPuMediaPlayer_eventGetStreamInfo_Parms
		{
			int64 index;
			FUABT_PlayerStreamInfo info;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_info;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetStreamInfo_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetStreamInfo_Parms, info), Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo, METADATA_PARAMS(0, nullptr) }; // 1600881020
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetStreamInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::NewProp_info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetStreamInfo", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::AgoraBPuMediaPlayer_eventGetStreamInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::AgoraBPuMediaPlayer_eventGetStreamInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics
	{
		struct AgoraBPuMediaPlayer_eventMute_Parms
		{
			bool muted;
			int32 ReturnValue;
		};
		static void NewProp_muted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_muted;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::NewProp_muted_SetBit(void* Obj)
	{
		((AgoraBPuMediaPlayer_eventMute_Parms*)Obj)->muted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::NewProp_muted = { "muted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuMediaPlayer_eventMute_Parms), &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::NewProp_muted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventMute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::NewProp_muted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Mute", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::AgoraBPuMediaPlayer_eventMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::AgoraBPuMediaPlayer_eventMute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics
	{
		struct AgoraBPuMediaPlayer_eventOpen_Parms
		{
			FString url;
			int64 startPos;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_startPos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpen_Parms, url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_url_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_url_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpen_Parms, startPos), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpen_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_startPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Open", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::AgoraBPuMediaPlayer_eventOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::AgoraBPuMediaPlayer_eventOpen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics
	{
		struct AgoraBPuMediaPlayer_eventOpenWithAgoraCDNSrc_Parms
		{
			FString src;
			int64 startPos;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_startPos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpenWithAgoraCDNSrc_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_src_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_src_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpenWithAgoraCDNSrc_Parms, startPos), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpenWithAgoraCDNSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_startPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "OpenWithAgoraCDNSrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::AgoraBPuMediaPlayer_eventOpenWithAgoraCDNSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::AgoraBPuMediaPlayer_eventOpenWithAgoraCDNSrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics
	{
		struct AgoraBPuMediaPlayer_eventOpenWithMediaSource_Parms
		{
			FUABT_AgoraMediaSource source;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_source;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::NewProp_source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpenWithMediaSource_Parms, source), Z_Construct_UScriptStruct_FUABT_AgoraMediaSource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::NewProp_source_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::NewProp_source_MetaData) }; // 3728117936
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpenWithMediaSource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::NewProp_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int OpenWithCustomSource(int64 startPos, UIMediaPlayerCustomDataProvider* provider);\n" },
#endif
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint OpenWithCustomSource(int64 startPos, UIMediaPlayerCustomDataProvider* provider);" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "OpenWithMediaSource", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::AgoraBPuMediaPlayer_eventOpenWithMediaSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::AgoraBPuMediaPlayer_eventOpenWithMediaSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics
	{
		struct AgoraBPuMediaPlayer_eventPause_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPause_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Pause", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::AgoraBPuMediaPlayer_eventPause_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::AgoraBPuMediaPlayer_eventPause_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics
	{
		struct AgoraBPuMediaPlayer_eventPlay_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPlay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::AgoraBPuMediaPlayer_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::AgoraBPuMediaPlayer_eventPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics
	{
		struct AgoraBPuMediaPlayer_eventPlayPreloadedSrc_Parms
		{
			FString src;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPlayPreloadedSrc_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::NewProp_src_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::NewProp_src_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPlayPreloadedSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "PlayPreloadedSrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::AgoraBPuMediaPlayer_eventPlayPreloadedSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::AgoraBPuMediaPlayer_eventPlayPreloadedSrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics
	{
		struct AgoraBPuMediaPlayer_eventPreloadSrc_Parms
		{
			FString src;
			int64 startPos;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_startPos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPreloadSrc_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_src_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_src_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPreloadSrc_Parms, startPos), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPreloadSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_startPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "PreloadSrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::AgoraBPuMediaPlayer_eventPreloadSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::AgoraBPuMediaPlayer_eventPreloadSrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAgoraMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Release", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics
	{
		struct AgoraBPuMediaPlayer_eventRenewAgoraCDNSrcToken_Parms
		{
			FString token;
			int64 ts;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_token;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventRenewAgoraCDNSrcToken_Parms, token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_token_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_token_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ts = { "ts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventRenewAgoraCDNSrcToken_Parms, ts), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventRenewAgoraCDNSrcToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "RenewAgoraCDNSrcToken", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::AgoraBPuMediaPlayer_eventRenewAgoraCDNSrcToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::AgoraBPuMediaPlayer_eventRenewAgoraCDNSrcToken_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics
	{
		struct AgoraBPuMediaPlayer_eventResume_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventResume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Resume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::AgoraBPuMediaPlayer_eventResume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::AgoraBPuMediaPlayer_eventResume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics
	{
		struct AgoraBPuMediaPlayer_eventSeek_Parms
		{
			int64 newPos;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_newPos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::NewProp_newPos = { "newPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSeek_Parms, newPos), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSeek_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::NewProp_newPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Seek", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::AgoraBPuMediaPlayer_eventSeek_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::AgoraBPuMediaPlayer_eventSeek_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics
	{
		struct AgoraBPuMediaPlayer_eventSelectAudioTrack_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectAudioTrack_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectAudioTrack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SelectAudioTrack", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::AgoraBPuMediaPlayer_eventSelectAudioTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::AgoraBPuMediaPlayer_eventSelectAudioTrack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics
	{
		struct AgoraBPuMediaPlayer_eventSelectInternalSubtitle_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectInternalSubtitle_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectInternalSubtitle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SelectInternalSubtitle", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::AgoraBPuMediaPlayer_eventSelectInternalSubtitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::AgoraBPuMediaPlayer_eventSelectInternalSubtitle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics
	{
		struct AgoraBPuMediaPlayer_eventSelectMultiAudioTrack_Parms
		{
			int32 playoutTrackIndex;
			int32 publishTrackIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_playoutTrackIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_publishTrackIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::NewProp_playoutTrackIndex = { "playoutTrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectMultiAudioTrack_Parms, playoutTrackIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::NewProp_publishTrackIndex = { "publishTrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectMultiAudioTrack_Parms, publishTrackIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectMultiAudioTrack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::NewProp_playoutTrackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::NewProp_publishTrackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SelectMultiAudioTrack", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::AgoraBPuMediaPlayer_eventSelectMultiAudioTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::AgoraBPuMediaPlayer_eventSelectMultiAudioTrack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics
	{
		struct AgoraBPuMediaPlayer_eventSetAudioDualMonoMode_Parms
		{
			EUABT_AUDIO_DUAL_MONO_MODE mode;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetAudioDualMonoMode_Parms, mode), Z_Construct_UEnum_AgoraPlugin_EUABT_AUDIO_DUAL_MONO_MODE, METADATA_PARAMS(0, nullptr) }; // 1107966427
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetAudioDualMonoMode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int RegisterPlayerSourceObserver(UIMediaPlayerSourceObserver* observer);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int UnregisterPlayerSourceObserver(UIMediaPlayerSourceObserver* observer);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int RegisterAudioFrameObserver(UIAudioPcmFrameSink* observer, EUABT_RAW_AUDIO_FRAME_OP_MODE_TYPE mode = EUABT_RAW_AUDIO_FRAME_OP_MODE_TYPE::RAW_AUDIO_FRAME_OP_MODE_READ_ONLY);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int UnregisterAudioFrameObserver(UIAudioPcmFrameSink* observer);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int RegisterVideoFrameObserver(UIVideoFrameObserver* observer);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int UnregisterVideoFrameObserver(UIVideoFrameObserver* observer);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int RegisterMediaPlayerAudioSpectrumObserver(UIAudioSpectrumObserver* observer, int intervalInMS);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int UnregisterMediaPlayerAudioSpectrumObserver(UIAudioSpectrumObserver* observer);\n" },
#endif
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint RegisterPlayerSourceObserver(UIMediaPlayerSourceObserver* observer);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint UnregisterPlayerSourceObserver(UIMediaPlayerSourceObserver* observer);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint RegisterAudioFrameObserver(UIAudioPcmFrameSink* observer, EUABT_RAW_AUDIO_FRAME_OP_MODE_TYPE mode = EUABT_RAW_AUDIO_FRAME_OP_MODE_TYPE::RAW_AUDIO_FRAME_OP_MODE_READ_ONLY);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint UnregisterAudioFrameObserver(UIAudioPcmFrameSink* observer);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint RegisterVideoFrameObserver(UIVideoFrameObserver* observer);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint UnregisterVideoFrameObserver(UIVideoFrameObserver* observer);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint RegisterMediaPlayerAudioSpectrumObserver(UIAudioSpectrumObserver* observer, int intervalInMS);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint UnregisterMediaPlayerAudioSpectrumObserver(UIAudioSpectrumObserver* observer);" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetAudioDualMonoMode", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::AgoraBPuMediaPlayer_eventSetAudioDualMonoMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::AgoraBPuMediaPlayer_eventSetAudioDualMonoMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics
	{
		struct AgoraBPuMediaPlayer_eventSetAudioPitch_Parms
		{
			int32 pitch;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_pitch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::NewProp_pitch = { "pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetAudioPitch_Parms, pitch), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetAudioPitch_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::NewProp_pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetAudioPitch", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::AgoraBPuMediaPlayer_eventSetAudioPitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::AgoraBPuMediaPlayer_eventSetAudioPitch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics
	{
		struct AgoraBPuMediaPlayer_eventSetExternalSubtitle_Parms
		{
			FString url;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetExternalSubtitle_Parms, url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::NewProp_url_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::NewProp_url_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetExternalSubtitle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetExternalSubtitle", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::AgoraBPuMediaPlayer_eventSetExternalSubtitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::AgoraBPuMediaPlayer_eventSetExternalSubtitle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics
	{
		struct AgoraBPuMediaPlayer_eventSetLoopCount_Parms
		{
			int32 loopCount;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_loopCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::NewProp_loopCount = { "loopCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetLoopCount_Parms, loopCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetLoopCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::NewProp_loopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetLoopCount", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::AgoraBPuMediaPlayer_eventSetLoopCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::AgoraBPuMediaPlayer_eventSetLoopCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics
	{
		struct AgoraBPuMediaPlayer_eventSetPlaybackSpeed_Parms
		{
			int32 speed;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_speed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlaybackSpeed_Parms, speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlaybackSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetPlaybackSpeed", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::AgoraBPuMediaPlayer_eventSetPlaybackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::AgoraBPuMediaPlayer_eventSetPlaybackSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics
	{
		struct AgoraBPuMediaPlayer_eventSetPlayerOptionWithInt_Parms
		{
			FString key;
			int32 value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlayerOptionWithInt_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_key_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_key_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlayerOptionWithInt_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlayerOptionWithInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetPlayerOptionWithInt", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::AgoraBPuMediaPlayer_eventSetPlayerOptionWithInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::AgoraBPuMediaPlayer_eventSetPlayerOptionWithInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics
	{
		struct AgoraBPuMediaPlayer_eventSetPlayerOptionWithString_Parms
		{
			FString key;
			FString value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlayerOptionWithString_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_key_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlayerOptionWithString_Parms, value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_value_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_value_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlayerOptionWithString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetPlayerOptionWithString", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::AgoraBPuMediaPlayer_eventSetPlayerOptionWithString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::AgoraBPuMediaPlayer_eventSetPlayerOptionWithString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics
	{
		struct AgoraBPuMediaPlayer_eventSetRenderMode_Parms
		{
			EUABT_RENDER_MODE_TYPE renderMode;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_renderMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_renderMode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::NewProp_renderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::NewProp_renderMode = { "renderMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetRenderMode_Parms, renderMode), Z_Construct_UEnum_AgoraPlugin_EUABT_RENDER_MODE_TYPE, METADATA_PARAMS(0, nullptr) }; // 3023719042
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetRenderMode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::NewProp_renderMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::NewProp_renderMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetRenderMode", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::AgoraBPuMediaPlayer_eventSetRenderMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::AgoraBPuMediaPlayer_eventSetRenderMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics
	{
		struct AgoraBPuMediaPlayer_eventSetSoundPositionParams_Parms
		{
			float pan;
			float gain;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pan;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gain;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::NewProp_pan = { "pan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetSoundPositionParams_Parms, pan), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetSoundPositionParams_Parms, gain), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetSoundPositionParams_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::NewProp_pan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::NewProp_gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetSoundPositionParams", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::AgoraBPuMediaPlayer_eventSetSoundPositionParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::AgoraBPuMediaPlayer_eventSetSoundPositionParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics
	{
		struct AgoraBPuMediaPlayer_eventSetSpatialAudioParams_Parms
		{
			FUABT_SpatialAudioParams params;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_params;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetSpatialAudioParams_Parms, params), Z_Construct_UScriptStruct_FUABT_SpatialAudioParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params_MetaData) }; // 128974961
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetSpatialAudioParams_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetSpatialAudioParams", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::AgoraBPuMediaPlayer_eventSetSpatialAudioParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::AgoraBPuMediaPlayer_eventSetSpatialAudioParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics
	{
		struct AgoraBPuMediaPlayer_eventSetView_Parms
		{
			int64 view;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_view;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::NewProp_view = { "view", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetView_Parms, view), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetView_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::NewProp_view,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetView", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::AgoraBPuMediaPlayer_eventSetView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::AgoraBPuMediaPlayer_eventSetView_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics
	{
		struct AgoraBPuMediaPlayer_eventStop_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventStop_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Stop", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::AgoraBPuMediaPlayer_eventStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::AgoraBPuMediaPlayer_eventStop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics
	{
		struct AgoraBPuMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SwitchAgoraCDNLineByIndex", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::AgoraBPuMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::AgoraBPuMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics
	{
		struct AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms
		{
			FString src;
			bool syncPts;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static void NewProp_syncPts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_syncPts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_src_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_src_MetaData) };
	void Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts_SetBit(void* Obj)
	{
		((AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms*)Obj)->syncPts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts = { "syncPts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms), &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "CPP_Default_syncPts", "false" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SwitchAgoraCDNSrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics
	{
		struct AgoraBPuMediaPlayer_eventSwitchSrc_Parms
		{
			FString src;
			bool syncPts;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static void NewProp_syncPts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_syncPts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSwitchSrc_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_src_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_src_MetaData) };
	void Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_syncPts_SetBit(void* Obj)
	{
		((AgoraBPuMediaPlayer_eventSwitchSrc_Parms*)Obj)->syncPts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_syncPts = { "syncPts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuMediaPlayer_eventSwitchSrc_Parms), &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_syncPts_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSwitchSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_syncPts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "CPP_Default_syncPts", "true" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SwitchSrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::AgoraBPuMediaPlayer_eventSwitchSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::AgoraBPuMediaPlayer_eventSwitchSrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics
	{
		struct AgoraBPuMediaPlayer_eventTakeScreenshot_Parms
		{
			FString filename;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_filename;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::NewProp_filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventTakeScreenshot_Parms, filename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::NewProp_filename_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::NewProp_filename_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventTakeScreenshot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::NewProp_filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "TakeScreenshot", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::AgoraBPuMediaPlayer_eventTakeScreenshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::AgoraBPuMediaPlayer_eventTakeScreenshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics
	{
		struct AgoraBPuMediaPlayer_eventUnloadSrc_Parms
		{
			FString src;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventUnloadSrc_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::NewProp_src_MetaData), Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::NewProp_src_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventUnloadSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "UnloadSrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::AgoraBPuMediaPlayer_eventUnloadSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::AgoraBPuMediaPlayer_eventUnloadSrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAgoraBPuMediaPlayer);
	UClass* Z_Construct_UClass_UAgoraBPuMediaPlayer_NoRegister()
	{
		return UAgoraBPuMediaPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume, "AdjustPlayoutVolume" }, // 1944432533
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume, "AdjustPublishSignalVolume" }, // 4227316727
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN, "EnableAutoSwitchAgoraCDN" }, // 1428768559
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount, "GetAgoraCDNLineCount" }, // 3568538699
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer, "GetAgoraMediaPlayer" }, // 761960642
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex, "GetCurrentAgoraCDNIndex" }, // 2623331863
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration, "GetDuration" }, // 1530285922
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId, "GetMediaPlayerId" }, // 1419089723
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver, "GetMediaPlayerSourceObserver" }, // 1569031496
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute, "GetMute" }, // 4062363390
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion, "GetPlayerSdkVersion" }, // 1055430910
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume, "GetPlayoutVolume" }, // 720073667
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition, "GetPlayPosition" }, // 2308989285
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc, "GetPlaySrc" }, // 2759248428
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume, "GetPublishSignalVolume" }, // 1118435323
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState, "GetState" }, // 1025301174
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount, "GetStreamCount" }, // 338061709
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo, "GetStreamInfo" }, // 3689922908
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute, "Mute" }, // 3156717401
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open, "Open" }, // 2668523946
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc, "OpenWithAgoraCDNSrc" }, // 948213514
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource, "OpenWithMediaSource" }, // 3348245720
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause, "Pause" }, // 2302965900
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play, "Play" }, // 1376518670
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc, "PlayPreloadedSrc" }, // 3588748764
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc, "PreloadSrc" }, // 1754821873
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release, "Release" }, // 2057866937
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken, "RenewAgoraCDNSrcToken" }, // 3877640977
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume, "Resume" }, // 2509747555
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek, "Seek" }, // 3903189110
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack, "SelectAudioTrack" }, // 3389563219
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle, "SelectInternalSubtitle" }, // 3855383223
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack, "SelectMultiAudioTrack" }, // 3908888694
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode, "SetAudioDualMonoMode" }, // 1383192042
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch, "SetAudioPitch" }, // 3764796864
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle, "SetExternalSubtitle" }, // 1022208870
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount, "SetLoopCount" }, // 3050687952
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 2940921216
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt, "SetPlayerOptionWithInt" }, // 2434346209
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString, "SetPlayerOptionWithString" }, // 3312479765
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode, "SetRenderMode" }, // 1458468474
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams, "SetSoundPositionParams" }, // 3834563879
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams, "SetSpatialAudioParams" }, // 239838441
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView, "SetView" }, // 1082627673
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop, "Stop" }, // 1574002357
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex, "SwitchAgoraCDNLineByIndex" }, // 1477266824
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc, "SwitchAgoraCDNSrc" }, // 2012173323
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc, "SwitchSrc" }, // 2918292589
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot, "TakeScreenshot" }, // 4155037681
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc, "UnloadSrc" }, // 2754877812
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
		{ "ModuleRelativePath", "Public/AgoraBlueprintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgoraBPuMediaPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::ClassParams = {
		&UAgoraBPuMediaPlayer::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAgoraBPuMediaPlayer()
	{
		if (!Z_Registration_Info_UClass_UAgoraBPuMediaPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAgoraBPuMediaPlayer.OuterSingleton, Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAgoraBPuMediaPlayer.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UAgoraBPuMediaPlayer>()
	{
		return UAgoraBPuMediaPlayer::StaticClass();
	}
	UAgoraBPuMediaPlayer::UAgoraBPuMediaPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAgoraBPuMediaPlayer);
	UAgoraBPuMediaPlayer::~UAgoraBPuMediaPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuMediaPlayer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuMediaPlayer_h_Statics::ScriptStructInfo[] = {
		{ FUABT_AgoraMediaSource::StaticStruct, Z_Construct_UScriptStruct_FUABT_AgoraMediaSource_Statics::NewStructOps, TEXT("UABT_AgoraMediaSource"), &Z_Registration_Info_UScriptStruct_UABT_AgoraMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUABT_AgoraMediaSource), 3728117936U) },
		{ FUABT_PlayerStreamInfo::StaticStruct, Z_Construct_UScriptStruct_FUABT_PlayerStreamInfo_Statics::NewStructOps, TEXT("UABT_PlayerStreamInfo"), &Z_Registration_Info_UScriptStruct_UABT_PlayerStreamInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUABT_PlayerStreamInfo), 1600881020U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuMediaPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAgoraBPuMediaPlayer, UAgoraBPuMediaPlayer::StaticClass, TEXT("UAgoraBPuMediaPlayer"), &Z_Registration_Info_UClass_UAgoraBPuMediaPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAgoraBPuMediaPlayer), 1516370409U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuMediaPlayer_h_2509406211(TEXT("/Script/AgoraPlugin"),
		Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuMediaPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuMediaPlayer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuMediaPlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuMediaPlayer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
