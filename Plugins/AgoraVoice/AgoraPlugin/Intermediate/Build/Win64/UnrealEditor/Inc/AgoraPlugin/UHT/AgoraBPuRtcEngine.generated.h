// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBlueprintPlugin/AgoraBPuRtcEngine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAgoraBPuIRtcEngineEventHandler;
class UAgoraBPuIRtcEngineEventHandlerEx;
class UAgoraBPuRtcEngine;
class UIScreenCaptureSourceList;
enum class EAgoraBPuEventHandlerType : uint8;
enum class EUABT_AUDIO_AINS_MODE : uint8;
enum class EUABT_AUDIO_EFFECT_PRESET : uint8;
enum class EUABT_AUDIO_EQUALIZATION_BAND_FREQUENCY : uint8;
enum class EUABT_AUDIO_MIXING_DUAL_MONO_MODE : uint8;
enum class EUABT_AUDIO_PROFILE_TYPE : uint8;
enum class EUABT_AUDIO_REVERB_TYPE : uint8;
enum class EUABT_AUDIO_SCENARIO_TYPE : uint8;
enum class EUABT_AUDIO_SESSION_OPERATION_RESTRICTION : uint8;
enum class EUABT_CAMERA_STABILIZATION_MODE : uint8;
enum class EUABT_CHANNEL_PROFILE_TYPE : uint8;
enum class EUABT_CLIENT_ROLE_TYPE : uint8;
enum class EUABT_CLOUD_PROXY_TYPE : uint8;
enum class EUABT_CONNECTION_STATE_TYPE : uint8;
enum class EUABT_FACE_SHAPE_AREA : uint8;
enum class EUABT_FeatureType : uint8;
enum class EUABT_HDR_CAPABILITY : uint8;
enum class EUABT_HEADPHONE_EQUALIZER_PRESET : uint8;
enum class EUABT_LOG_LEVEL : uint8;
enum class EUABT_MEDIA_SOURCE_TYPE : uint8;
enum class EUABT_PRIORITY_TYPE : uint8;
enum class EUABT_RAW_AUDIO_FRAME_OP_MODE_TYPE : uint8;
enum class EUABT_RENDER_MODE_TYPE : uint8;
enum class EUABT_SCREEN_SCENARIO_TYPE : uint8;
enum class EUABT_SIMULCAST_STREAM_MODE : uint8;
enum class EUABT_STREAM_FALLBACK_OPTIONS : uint8;
enum class EUABT_VIDEO_APPLICATION_SCENARIO_TYPE : uint8;
enum class EUABT_VIDEO_CONTENT_HINT : uint8;
enum class EUABT_VIDEO_MIRROR_MODE_TYPE : uint8;
enum class EUABT_VIDEO_MODULE_TYPE : uint8;
enum class EUABT_VIDEO_ORIENTATION : uint8;
enum class EUABT_VIDEO_QOE_PREFERENCE_TYPE : uint8;
enum class EUABT_VIDEO_SOURCE_TYPE : uint8;
enum class EUABT_VIDEO_STREAM_TYPE : uint8;
enum class EUABT_VOICE_AI_TUNER_TYPE : uint8;
enum class EUABT_VOICE_BEAUTIFIER_PRESET : uint8;
enum class EUABT_VOICE_CONVERSION_PRESET : uint8;
struct FUABT_AdvancedAudioOptions;
struct FUABT_AgoraRhythmPlayerConfig;
struct FUABT_AudioRecordingConfiguration;
struct FUABT_BeautyOptions;
struct FUABT_CameraCapturerConfiguration;
struct FUABT_ChannelMediaOptions;
struct FUABT_ChannelMediaRelayConfiguration;
struct FUABT_ClientRoleOptions;
struct FUABT_CodecCapInfo;
struct FUABT_ColorEnhanceOptions;
struct FUABT_ContentInspectConfig;
struct FUABT_DataStreamConfig;
struct FUABT_DeviceInfo;
struct FUABT_EchoTestConfiguration;
struct FUABT_EncryptionConfig;
struct FUABT_FaceShapeAreaOptions;
struct FUABT_FaceShapeBeautyOptions;
struct FUABT_FilterEffectOptions;
struct FUABT_FocalLengthInfo;
struct FUABT_ImageTrackOptions;
struct FUABT_LastmileProbeConfig;
struct FUABT_LeaveChannelOptions;
struct FUABT_LiveTranscoding;
struct FUABT_LocalAccessPointConfiguration;
struct FUABT_LocalAudioMixerConfiguration;
struct FUABT_LocalTranscoderConfiguration;
struct FUABT_LowlightEnhanceOptions;
struct FUABT_Rectangle;
struct FUABT_RtcConnection;
struct FUABT_RtcEngineContext;
struct FUABT_ScreenCaptureConfiguration;
struct FUABT_ScreenCaptureParameters2;
struct FUABT_ScreenCaptureParameters;
struct FUABT_ScreenCaptureSourceInfo;
struct FUABT_SegmentationProperty;
struct FUABT_SenderOptions;
struct FUABT_SimulcastConfig;
struct FUABT_SimulcastStreamConfig;
struct FUABT_SIZE;
struct FUABT_SnapshotConfig;
struct FUABT_SpatialAudioParams;
struct FUABT_UserInfo;
struct FUABT_VideoCanvas;
struct FUABT_VideoDenoiserOptions;
struct FUABT_VideoEncoderConfiguration;
struct FUABT_VideoSubscriptionOptions;
struct FUABT_VirtualBackgroundSource;
struct FUABT_WatermarkOptions;
#ifdef AGORAPLUGIN_AgoraBPuRtcEngine_generated_h
#error "AgoraBPuRtcEngine.generated.h already included, missing '#pragma once' in AgoraBPuRtcEngine.h"
#endif
#define AGORAPLUGIN_AgoraBPuRtcEngine_generated_h

#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_SPARSE_DATA
#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGetSourceInfo); \
	DECLARE_FUNCTION(execGetCount);


#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_ACCESSORS
#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIScreenCaptureSourceList(); \
	friend struct Z_Construct_UClass_UIScreenCaptureSourceList_Statics; \
public: \
	DECLARE_CLASS(UIScreenCaptureSourceList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIScreenCaptureSourceList)


#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIScreenCaptureSourceList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIScreenCaptureSourceList(UIScreenCaptureSourceList&&); \
	NO_API UIScreenCaptureSourceList(const UIScreenCaptureSourceList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIScreenCaptureSourceList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIScreenCaptureSourceList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIScreenCaptureSourceList) \
	NO_API virtual ~UIScreenCaptureSourceList();


#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_28_PROLOG
#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_SPARSE_DATA \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_ACCESSORS \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIScreenCaptureSourceList>();

#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_SPARSE_DATA
#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendAudioMetadataEx); \
	DECLARE_FUNCTION(execGetCallIdEx); \
	DECLARE_FUNCTION(execSetParametersEx); \
	DECLARE_FUNCTION(execStartMediaRenderingTracingEx); \
	DECLARE_FUNCTION(execEnableContentInspectEx); \
	DECLARE_FUNCTION(execTakeSnapshotWithConfigEx); \
	DECLARE_FUNCTION(execTakeSnapshotEx); \
	DECLARE_FUNCTION(execSetHighPriorityUserListEx); \
	DECLARE_FUNCTION(execSetSimulcastConfigEx); \
	DECLARE_FUNCTION(execSetDualStreamModeEx); \
	DECLARE_FUNCTION(execEnableDualStreamModeEx); \
	DECLARE_FUNCTION(execGetUserInfoByUidEx); \
	DECLARE_FUNCTION(execGetUserInfoByUserAccountEx); \
	DECLARE_FUNCTION(execResumeAllChannelMediaRelayEx); \
	DECLARE_FUNCTION(execPauseAllChannelMediaRelayEx); \
	DECLARE_FUNCTION(execStopChannelMediaRelayEx); \
	DECLARE_FUNCTION(execStartOrUpdateChannelMediaRelayEx); \
	DECLARE_FUNCTION(execStopRtmpStreamEx); \
	DECLARE_FUNCTION(execUpdateRtmpTranscodingEx); \
	DECLARE_FUNCTION(execStartRtmpStreamWithTranscodingEx); \
	DECLARE_FUNCTION(execStartRtmpStreamWithoutTranscodingEx); \
	DECLARE_FUNCTION(execEnableAudioVolumeIndicationEx); \
	DECLARE_FUNCTION(execSendCustomReportMessageEx); \
	DECLARE_FUNCTION(execClearVideoWatermarkEx); \
	DECLARE_FUNCTION(execAddVideoWatermarkEx); \
	DECLARE_FUNCTION(execSendStreamMessageEx); \
	DECLARE_FUNCTION(execCreateDataStreamEx); \
	DECLARE_FUNCTION(execEnableEncryptionEx); \
	DECLARE_FUNCTION(execGetConnectionStateEx); \
	DECLARE_FUNCTION(execAdjustUserPlaybackSignalVolumeEx); \
	DECLARE_FUNCTION(execMuteRecordingSignalEx); \
	DECLARE_FUNCTION(execAdjustRecordingSignalVolumeEx); \
	DECLARE_FUNCTION(execEnableLoopbackRecordingEx); \
	DECLARE_FUNCTION(execSetRemoteRenderModeEx); \
	DECLARE_FUNCTION(execSetRemoteUserSpatialAudioParamsEx); \
	DECLARE_FUNCTION(execSetRemoteVoicePositionEx); \
	DECLARE_FUNCTION(execSetRemoteVideoSubscriptionOptionsEx); \
	DECLARE_FUNCTION(execSetSubscribeVideoAllowlistEx); \
	DECLARE_FUNCTION(execSetSubscribeVideoBlocklistEx); \
	DECLARE_FUNCTION(execSetSubscribeAudioAllowlistEx); \
	DECLARE_FUNCTION(execSetSubscribeAudioBlocklistEx); \
	DECLARE_FUNCTION(execMuteAllRemoteVideoStreamsEx); \
	DECLARE_FUNCTION(execMuteAllRemoteAudioStreamsEx); \
	DECLARE_FUNCTION(execMuteLocalVideoStreamEx); \
	DECLARE_FUNCTION(execMuteLocalAudioStreamEx); \
	DECLARE_FUNCTION(execSetRemoteVideoStreamTypeEx); \
	DECLARE_FUNCTION(execMuteRemoteVideoStreamEx); \
	DECLARE_FUNCTION(execMuteRemoteAudioStreamEx); \
	DECLARE_FUNCTION(execSetVideoEncoderConfigurationEx); \
	DECLARE_FUNCTION(execUpdateChannelMediaOptionsEx); \
	DECLARE_FUNCTION(execLeaveChannelWithUserAccountEx); \
	DECLARE_FUNCTION(execLeaveChannelEx); \
	DECLARE_FUNCTION(execJoinChannelEx); \
	DECLARE_FUNCTION(execQueryHDRCapability); \
	DECLARE_FUNCTION(execSendAudioMetadata); \
	DECLARE_FUNCTION(execIsFeatureAvailableOnDevice); \
	DECLARE_FUNCTION(execGetNtpWallTimeInMs); \
	DECLARE_FUNCTION(execEnableInstantMediaRendering); \
	DECLARE_FUNCTION(execStartMediaRenderingTracing); \
	DECLARE_FUNCTION(execSetParameters); \
	DECLARE_FUNCTION(execGetNetworkType); \
	DECLARE_FUNCTION(execEnableWirelessAccelerate); \
	DECLARE_FUNCTION(execGetCurrentMonotonicTimeInMs); \
	DECLARE_FUNCTION(execEnableVideoImageSource); \
	DECLARE_FUNCTION(execSetAVSyncSource); \
	DECLARE_FUNCTION(execSetAdvancedAudioOptions); \
	DECLARE_FUNCTION(execSetLocalAccessPoint); \
	DECLARE_FUNCTION(execSetCloudProxy); \
	DECLARE_FUNCTION(execAdjustCustomAudioPlayoutVolume); \
	DECLARE_FUNCTION(execAdjustCustomAudioPublishVolume); \
	DECLARE_FUNCTION(execEnableContentInspect); \
	DECLARE_FUNCTION(execTakeSnapshotWithConfig); \
	DECLARE_FUNCTION(execTakeSnapshot); \
	DECLARE_FUNCTION(execConfigRhythmPlayer); \
	DECLARE_FUNCTION(execStopRhythmPlayer); \
	DECLARE_FUNCTION(execStartRhythmPlayer); \
	DECLARE_FUNCTION(execResumeAllChannelMediaRelay); \
	DECLARE_FUNCTION(execPauseAllChannelMediaRelay); \
	DECLARE_FUNCTION(execStopChannelMediaRelay); \
	DECLARE_FUNCTION(execStartOrUpdateChannelMediaRelay); \
	DECLARE_FUNCTION(execGetUserInfoByUid); \
	DECLARE_FUNCTION(execGetUserInfoByUserAccount); \
	DECLARE_FUNCTION(execJoinChannelWithUserAccountEx); \
	DECLARE_FUNCTION(execJoinChannelWithUserAccount); \
	DECLARE_FUNCTION(execRegisterLocalUserAccount); \
	DECLARE_FUNCTION(execSetAINSMode); \
	DECLARE_FUNCTION(execStopAudioFrameDump); \
	DECLARE_FUNCTION(execStartAudioFrameDump); \
	DECLARE_FUNCTION(execSendCustomReportMessage); \
	DECLARE_FUNCTION(execEnableWebSdkInteroperability); \
	DECLARE_FUNCTION(execResumeAudio); \
	DECLARE_FUNCTION(execPauseAudio); \
	DECLARE_FUNCTION(execClearVideoWatermarks); \
	DECLARE_FUNCTION(execAddVideoWatermark); \
	DECLARE_FUNCTION(execSendStreamMessage); \
	DECLARE_FUNCTION(execCreateDataStream); \
	DECLARE_FUNCTION(execEnableEncryption); \
	DECLARE_FUNCTION(execSetRemoteUserPriority); \
	DECLARE_FUNCTION(execGetConnectionState); \
	DECLARE_FUNCTION(execStopScreenCaptureBySourceType); \
	DECLARE_FUNCTION(execStartScreenCaptureBySourceType); \
	DECLARE_FUNCTION(execSetScreenCaptureOrientation); \
	DECLARE_FUNCTION(execSetCameraDeviceOrientation); \
	DECLARE_FUNCTION(execStopCameraCapture); \
	DECLARE_FUNCTION(execStartCameraCapture); \
	DECLARE_FUNCTION(execStopLocalAudioMixer); \
	DECLARE_FUNCTION(execUpdateLocalAudioMixerConfiguration); \
	DECLARE_FUNCTION(execStartLocalAudioMixer); \
	DECLARE_FUNCTION(execStopLocalVideoTranscoder); \
	DECLARE_FUNCTION(execStopRtmpStream); \
	DECLARE_FUNCTION(execUpdateLocalTranscoderConfiguration); \
	DECLARE_FUNCTION(execStartLocalVideoTranscoder); \
	DECLARE_FUNCTION(execUpdateRtmpTranscoding); \
	DECLARE_FUNCTION(execStartRtmpStreamWithTranscoding); \
	DECLARE_FUNCTION(execStartRtmpStreamWithoutTranscoding); \
	DECLARE_FUNCTION(execComplain); \
	DECLARE_FUNCTION(execRate); \
	DECLARE_FUNCTION(execGetCallId); \
	DECLARE_FUNCTION(execStopScreenCapture); \
	DECLARE_FUNCTION(execSetScreenCaptureScenario); \
	DECLARE_FUNCTION(execQueryCameraFocalLengthCapability); \
	DECLARE_FUNCTION(execQueryScreenCaptureCapability); \
	DECLARE_FUNCTION(execUpdateScreenCapture); \
	DECLARE_FUNCTION(execStartScreenCapture); \
	DECLARE_FUNCTION(execUpdateScreenCaptureParameters); \
	DECLARE_FUNCTION(execUpdateScreenCaptureRegion); \
	DECLARE_FUNCTION(execSetScreenCaptureContentHint); \
	DECLARE_FUNCTION(execStartScreenCaptureByWindowId); \
	DECLARE_FUNCTION(execGetAudioDeviceInfo); \
	DECLARE_FUNCTION(execStartScreenCaptureByScreenRect); \
	DECLARE_FUNCTION(execStartScreenCaptureByDisplayId); \
	DECLARE_FUNCTION(execSetAudioSessionOperationRestriction); \
	DECLARE_FUNCTION(execGetScreenCaptureSources); \
	DECLARE_FUNCTION(execEnableCameraCenterStage); \
	DECLARE_FUNCTION(execIsCameraCenterStageSupported); \
	DECLARE_FUNCTION(execSetRouteInCommunicationMode); \
	DECLARE_FUNCTION(execIsSpeakerphoneEnabled); \
	DECLARE_FUNCTION(execSetEnableSpeakerphone); \
	DECLARE_FUNCTION(execSetDefaultAudioRouteToSpeakerphone); \
	DECLARE_FUNCTION(execSetCameraStabilizationMode); \
	DECLARE_FUNCTION(execSetCameraAutoExposureFaceModeEnabled); \
	DECLARE_FUNCTION(execIsCameraAutoExposureFaceModeSupported); \
	DECLARE_FUNCTION(execSetCameraExposureFactor); \
	DECLARE_FUNCTION(execIsCameraExposureSupported); \
	DECLARE_FUNCTION(execSetCameraExposurePosition); \
	DECLARE_FUNCTION(execIsCameraExposurePositionSupported); \
	DECLARE_FUNCTION(execSetCameraAutoFocusFaceModeEnabled); \
	DECLARE_FUNCTION(execSetCameraTorchOn); \
	DECLARE_FUNCTION(execSetCameraFocusPositionInPreview); \
	DECLARE_FUNCTION(execGetCameraMaxZoomFactor); \
	DECLARE_FUNCTION(execEnableFaceDetection); \
	DECLARE_FUNCTION(execSetCameraZoomFactor); \
	DECLARE_FUNCTION(execIsCameraAutoFocusFaceModeSupported); \
	DECLARE_FUNCTION(execIsCameraFocusSupported); \
	DECLARE_FUNCTION(execIsCameraTorchSupported); \
	DECLARE_FUNCTION(execIsCameraFaceDetectSupported); \
	DECLARE_FUNCTION(execIsCameraZoomSupported); \
	DECLARE_FUNCTION(execSwitchCamera); \
	DECLARE_FUNCTION(execDestroyCustomEncodedVideoTrack); \
	DECLARE_FUNCTION(execDestroyCustomVideoTrack); \
	DECLARE_FUNCTION(execCreateCustomEncodedVideoTrack); \
	DECLARE_FUNCTION(execCreateCustomVideoTrack); \
	DECLARE_FUNCTION(execSetCameraCapturerConfiguration); \
	DECLARE_FUNCTION(execGetExtensionProperty); \
	DECLARE_FUNCTION(execSetExtensionProperty); \
	DECLARE_FUNCTION(execEnableExtension); \
	DECLARE_FUNCTION(execRegisterExtension); \
	DECLARE_FUNCTION(execSetExtensionProviderProperty); \
	DECLARE_FUNCTION(execLoadExtensionProvider); \
	DECLARE_FUNCTION(execSetInEarMonitoringVolume); \
	DECLARE_FUNCTION(execEnableInEarMonitoring); \
	DECLARE_FUNCTION(execGetLoopbackRecordingVolume); \
	DECLARE_FUNCTION(execAdjustLoopbackSignalVolume); \
	DECLARE_FUNCTION(execEnableLoopbackRecording); \
	DECLARE_FUNCTION(execSetHighPriorityUserList); \
	DECLARE_FUNCTION(execSetRemoteSubscribeFallbackOption); \
	DECLARE_FUNCTION(execSetLocalPublishFallbackOption); \
	DECLARE_FUNCTION(execAdjustUserPlaybackSignalVolume); \
	DECLARE_FUNCTION(execAdjustPlaybackSignalVolume); \
	DECLARE_FUNCTION(execMuteRecordingSignal); \
	DECLARE_FUNCTION(execAdjustRecordingSignalVolume); \
	DECLARE_FUNCTION(execDisableAudioSpectrumMonitor); \
	DECLARE_FUNCTION(execEnableAudioSpectrumMonitor); \
	DECLARE_FUNCTION(execSetPlaybackAudioFrameBeforeMixingParameters); \
	DECLARE_FUNCTION(execSetEarMonitoringAudioFrameParameters); \
	DECLARE_FUNCTION(execSetMixedAudioFrameParameters); \
	DECLARE_FUNCTION(execSetPlaybackAudioFrameParameters); \
	DECLARE_FUNCTION(execSetRecordingAudioFrameParameters); \
	DECLARE_FUNCTION(execEnableCustomAudioLocalPlayback); \
	DECLARE_FUNCTION(execSetDualStreamMode); \
	DECLARE_FUNCTION(execSetSimulcastConfig); \
	DECLARE_FUNCTION(execEnableDualStreamMode); \
	DECLARE_FUNCTION(execSetLocalVideoMirrorMode); \
	DECLARE_FUNCTION(execSetRemoteRenderTargetFps); \
	DECLARE_FUNCTION(execSetLocalRenderTargetFps); \
	DECLARE_FUNCTION(execSetRemoteRenderMode); \
	DECLARE_FUNCTION(execSetLocalRenderMode); \
	DECLARE_FUNCTION(execWriteLog); \
	DECLARE_FUNCTION(execUploadLogFile); \
	DECLARE_FUNCTION(execSetLogFileSize); \
	DECLARE_FUNCTION(execSetLogLevel); \
	DECLARE_FUNCTION(execSetLogFilter); \
	DECLARE_FUNCTION(execSetLogFile); \
	DECLARE_FUNCTION(execEnableVoiceAITuner); \
	DECLARE_FUNCTION(execSetHeadphoneEQParameters); \
	DECLARE_FUNCTION(execSetHeadphoneEQPreset); \
	DECLARE_FUNCTION(execSetLocalVoiceReverb); \
	DECLARE_FUNCTION(execSetLocalVoiceEqualization); \
	DECLARE_FUNCTION(execSetLocalVoiceFormant); \
	DECLARE_FUNCTION(execSetLocalVoicePitch); \
	DECLARE_FUNCTION(execSetVoiceConversionParameters); \
	DECLARE_FUNCTION(execSetVoiceBeautifierParameters); \
	DECLARE_FUNCTION(execSetAudioEffectParameters); \
	DECLARE_FUNCTION(execSetVoiceConversionPreset); \
	DECLARE_FUNCTION(execSetAudioEffectPreset); \
	DECLARE_FUNCTION(execSetVoiceBeautifierPreset); \
	DECLARE_FUNCTION(execSetRemoteUserSpatialAudioParams); \
	DECLARE_FUNCTION(execEnableSpatialAudio); \
	DECLARE_FUNCTION(execSetRemoteVoicePosition); \
	DECLARE_FUNCTION(execEnableSoundPositionIndication); \
	DECLARE_FUNCTION(execGetEffectCurrentPosition); \
	DECLARE_FUNCTION(execSetEffectPosition); \
	DECLARE_FUNCTION(execGetEffectDuration); \
	DECLARE_FUNCTION(execUnloadAllEffects); \
	DECLARE_FUNCTION(execUnloadEffect); \
	DECLARE_FUNCTION(execStopAllEffects); \
	DECLARE_FUNCTION(execStopEffect); \
	DECLARE_FUNCTION(execResumeAllEffects); \
	DECLARE_FUNCTION(execResumeEffect); \
	DECLARE_FUNCTION(execPauseAllEffects); \
	DECLARE_FUNCTION(execPauseEffect); \
	DECLARE_FUNCTION(execSetVolumeOfEffect); \
	DECLARE_FUNCTION(execGetVolumeOfEffect); \
	DECLARE_FUNCTION(execPlayAllEffects); \
	DECLARE_FUNCTION(execPlayEffect); \
	DECLARE_FUNCTION(execPreloadEffect); \
	DECLARE_FUNCTION(execSetEffectsVolume); \
	DECLARE_FUNCTION(execGetEffectsVolume); \
	DECLARE_FUNCTION(execSetAudioMixingPlaybackSpeed); \
	DECLARE_FUNCTION(execSetAudioMixingPitch); \
	DECLARE_FUNCTION(execSetAudioMixingDualMonoMode); \
	DECLARE_FUNCTION(execSetAudioMixingPosition); \
	DECLARE_FUNCTION(execGetAudioMixingCurrentPosition); \
	DECLARE_FUNCTION(execGetAudioMixingDuration); \
	DECLARE_FUNCTION(execGetAudioMixingPlayoutVolume); \
	DECLARE_FUNCTION(execAdjustAudioMixingPlayoutVolume); \
	DECLARE_FUNCTION(execGetAudioMixingPublishVolume); \
	DECLARE_FUNCTION(execAdjustAudioMixingPublishVolume); \
	DECLARE_FUNCTION(execAdjustAudioMixingVolume); \
	DECLARE_FUNCTION(execGetAudioTrackCount); \
	DECLARE_FUNCTION(execSelectAudioTrack); \
	DECLARE_FUNCTION(execResumeAudioMixing); \
	DECLARE_FUNCTION(execPauseAudioMixing); \
	DECLARE_FUNCTION(execStopAudioMixing); \
	DECLARE_FUNCTION(execStartAudioMixing); \
	DECLARE_FUNCTION(execStopAudioRecording); \
	DECLARE_FUNCTION(execStartAudioRecording); \
	DECLARE_FUNCTION(execEnableAudioVolumeIndication); \
	DECLARE_FUNCTION(execSetSubscribeVideoAllowlist); \
	DECLARE_FUNCTION(execSetSubscribeVideoBlocklist); \
	DECLARE_FUNCTION(execSetSubscribeAudioAllowlist); \
	DECLARE_FUNCTION(execSetSubscribeAudioBlocklist); \
	DECLARE_FUNCTION(execSetRemoteVideoSubscriptionOptions); \
	DECLARE_FUNCTION(execSetRemoteVideoStreamType); \
	DECLARE_FUNCTION(execMuteRemoteVideoStream); \
	DECLARE_FUNCTION(execSetRemoteDefaultVideoStreamType); \
	DECLARE_FUNCTION(execMuteAllRemoteVideoStreams); \
	DECLARE_FUNCTION(execEnableLocalVideo); \
	DECLARE_FUNCTION(execMuteLocalVideoStream); \
	DECLARE_FUNCTION(execMuteRemoteAudioStream); \
	DECLARE_FUNCTION(execMuteAllRemoteAudioStreams); \
	DECLARE_FUNCTION(execMuteLocalAudioStream); \
	DECLARE_FUNCTION(execEnableLocalAudio); \
	DECLARE_FUNCTION(execSetAudioScenario); \
	DECLARE_FUNCTION(execSetAudioProfile); \
	DECLARE_FUNCTION(execSetAudioProfileAndScenario); \
	DECLARE_FUNCTION(execDisableAudio); \
	DECLARE_FUNCTION(execEnableAudio); \
	DECLARE_FUNCTION(execSetVideoQoEPreference); \
	DECLARE_FUNCTION(execSetVideoScenario); \
	DECLARE_FUNCTION(execEnableVirtualBackground); \
	DECLARE_FUNCTION(execSetColorEnhanceOptions); \
	DECLARE_FUNCTION(execSetVideoDenoiserOptions); \
	DECLARE_FUNCTION(execSetLowlightEnhanceOptions); \
	DECLARE_FUNCTION(execSetFilterEffectOptions); \
	DECLARE_FUNCTION(execGetFaceShapeAreaOptions); \
	DECLARE_FUNCTION(execGetFaceShapeBeautyOptions); \
	DECLARE_FUNCTION(execSetFaceShapeAreaOptions); \
	DECLARE_FUNCTION(execSetFaceShapeBeautyOptions); \
	DECLARE_FUNCTION(execSetBeautyEffectOptions); \
	DECLARE_FUNCTION(execSetVideoEncoderConfiguration); \
	DECLARE_FUNCTION(execStopLastmileProbeTest); \
	DECLARE_FUNCTION(execStartLastmileProbeTest); \
	DECLARE_FUNCTION(execStopPreviewWithOptions); \
	DECLARE_FUNCTION(execStopPreview); \
	DECLARE_FUNCTION(execStartPreviewWithOptions); \
	DECLARE_FUNCTION(execStartPreview); \
	DECLARE_FUNCTION(execDisableVideo); \
	DECLARE_FUNCTION(execEnableVideo); \
	DECLARE_FUNCTION(execEnableMultiCamera); \
	DECLARE_FUNCTION(execStopEchoTest); \
	DECLARE_FUNCTION(execStartEchoTest); \
	DECLARE_FUNCTION(execSetClientRoleWithOptions); \
	DECLARE_FUNCTION(execSetClientRole); \
	DECLARE_FUNCTION(execSetChannelProfile); \
	DECLARE_FUNCTION(execRenewToken); \
	DECLARE_FUNCTION(execLeaveChannelWithOptions); \
	DECLARE_FUNCTION(execLeaveChannel); \
	DECLARE_FUNCTION(execUpdateChannelMediaOptions); \
	DECLARE_FUNCTION(execJoinChannelWithOptions); \
	DECLARE_FUNCTION(execJoinChannel); \
	DECLARE_FUNCTION(execUpdatePreloadChannelToken); \
	DECLARE_FUNCTION(execPreloadChannelWithUserAccount); \
	DECLARE_FUNCTION(execPreloadChannel); \
	DECLARE_FUNCTION(execQueryDeviceScore); \
	DECLARE_FUNCTION(execQueryCodecCapability); \
	DECLARE_FUNCTION(execGetErrorDescription); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGetVersion); \
	DECLARE_FUNCTION(execSetupRemoteVideoEx); \
	DECLARE_FUNCTION(execSetupRemoteVideo); \
	DECLARE_FUNCTION(execSetupLocalVideo); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execClearAllEventHandlerCBExecutors); \
	DECLARE_FUNCTION(execGetEventHandler); \
	DECLARE_FUNCTION(execGetAgoraRtcEngine);


#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_ACCESSORS
#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAgoraBPuRtcEngine(); \
	friend struct Z_Construct_UClass_UAgoraBPuRtcEngine_Statics; \
public: \
	DECLARE_CLASS(UAgoraBPuRtcEngine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAgoraBPuRtcEngine)


#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAgoraBPuRtcEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAgoraBPuRtcEngine(UAgoraBPuRtcEngine&&); \
	NO_API UAgoraBPuRtcEngine(const UAgoraBPuRtcEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgoraBPuRtcEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgoraBPuRtcEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAgoraBPuRtcEngine) \
	NO_API virtual ~UAgoraBPuRtcEngine();


#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_56_PROLOG
#define FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_SPARSE_DATA \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_ACCESSORS \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_INCLASS_NO_PURE_DECLS \
	FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UAgoraBPuRtcEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_AgoraBPuRtcEngine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
