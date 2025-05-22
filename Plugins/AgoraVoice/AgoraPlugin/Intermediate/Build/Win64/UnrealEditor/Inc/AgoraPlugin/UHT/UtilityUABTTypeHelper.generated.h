// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBlueprintPlugin/UtilityUABTTypeHelper.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGORAPLUGIN_UtilityUABTTypeHelper_generated_h
#error "UtilityUABTTypeHelper.generated.h already included, missing '#pragma once' in UtilityUABTTypeHelper.h"
#endif
#define AGORAPLUGIN_UtilityUABTTypeHelper_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_RCI_2_Documents_GitHub_LocalPlayTest_Plugins_AgoraVoice_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBlueprintPlugin_UtilityUABTTypeHelper_h


#define FOREACH_ENUM_EAGORAOPTIONAL(op) \
	op(EAgoraOptional::AGORA_NULL_VALUE) \
	op(EAgoraOptional::AGORA_TRUE_VALUE) \
	op(EAgoraOptional::AGORA_FALSE_VALUE) 

enum class EAgoraOptional : uint8;
template<> struct TIsUEnumClass<EAgoraOptional> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EAgoraOptional>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
