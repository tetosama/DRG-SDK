#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function FSDMixer.FSDMixerBlueprintEventSource.OnButtonNativeEvent
struct UFSDMixerBlueprintEventSource_OnButtonNativeEvent_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FSDMixer.MixerWrapper.TriggerButtonCooldown
struct UMixerWrapper_TriggerButtonCooldown_Params
{
	struct FString*                                    ControlID;                                                // (Parm, ZeroConstructor)
	int*                                               Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FSDMixer.MixerWrapper.StopMixer
struct UMixerWrapper_StopMixer_Params
{
};

// Function FSDMixer.MixerWrapper.StartMixer
struct UMixerWrapper_StartMixer_Params
{
};

// Function FSDMixer.MixerWrapper.SetStartScene
struct UMixerWrapper_SetStartScene_Params
{
	struct FString*                                    Scene;                                                    // (Parm, ZeroConstructor)
};

// Function FSDMixer.MixerWrapper.SetMixerReady
struct UMixerWrapper_SetMixerReady_Params
{
	bool*                                              ready;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FSDMixer.MixerWrapper.ChangeScene
struct UMixerWrapper_ChangeScene_Params
{
	struct FString*                                    Scene;                                                    // (Parm, ZeroConstructor)
};

// Function FSDMixer.MixerWrapper.CaptureTransaction
struct UMixerWrapper_CaptureTransaction_Params
{
	struct FMixerButtonInput*                          Input;                                                    // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
