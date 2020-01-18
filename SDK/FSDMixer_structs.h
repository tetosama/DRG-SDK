#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum FSDMixer.EFSDMixerLoginState
enum class EFSDMixerLoginState : uint8_t
{
	EFSDMixerLoginState__Not_Logged_In = 0,
	EFSDMixerLoginState__Logging_In = 1,
	EFSDMixerLoginState__Logged_In = 2,
	EFSDMixerLoginState__Logging_Out = 3,
	EFSDMixerLoginState__EFSDMixerLoginState_MAX = 4
};


// Enum FSDMixer.EFSDMixerModuleState
enum class EFSDMixerModuleState : uint8_t
{
	EFSDMixerModuleState__Uninitialized = 0,
	EFSDMixerModuleState__Initializing = 1,
	EFSDMixerModuleState__Initialized = 2,
	EFSDMixerModuleState__EFSDMixerModuleState_MAX = 3
};


// Enum FSDMixer.EFSDMixerRefreshState
enum class EFSDMixerRefreshState : uint8_t
{
	EFSDMixerRefreshState__ReadyToRefresh = 0,
	EFSDMixerRefreshState__Refreshing = 1,
	EFSDMixerRefreshState__ReadyToJoin = 2,
	EFSDMixerRefreshState__EFSDMixerRefreshState_MAX = 3
};


// Enum FSDMixer.EFSDMixerInteractivityState
enum class EFSDMixerInteractivityState : uint8_t
{
	EFSDMixerInteractivityState__Not_Interactive = 0,
	EFSDMixerInteractivityState__Interactivity_Starting = 1,
	EFSDMixerInteractivityState__Interactive = 2,
	EFSDMixerInteractivityState__Interactivity_Stopping = 3,
	EFSDMixerInteractivityState__EFSDMixerInteractivityState_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FSDMixer.MixerParticipant
// 0x0020
struct FMixerParticipant
{
	struct FString                                     ParticipantID;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ParticipantName;                                          // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSDMixer.MixerButtonInput
// 0x0048
struct FMixerButtonInput
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     TransactionID;                                            // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ControlID;                                                // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FMixerParticipant                           Participant;                                              // 0x0028(0x0020) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSDMixer.FSDMixerButtonEventBinding
// 0x0018
struct FFSDMixerButtonEventBinding
{
	struct FName                                       TargetFunctionName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ButtonId;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MixerButtonEventID;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
