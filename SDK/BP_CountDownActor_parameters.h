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

// Function BP_CountDownActor.BP_CountDownActor_C.TriggerCountdown
struct ABP_CountDownActor_C_TriggerCountdown_Params
{
};

// Function BP_CountDownActor.BP_CountDownActor_C.ReceiveTick
struct ABP_CountDownActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CountDownActor.BP_CountDownActor_C.ReceiveBeginPlay
struct ABP_CountDownActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_CountDownActor.BP_CountDownActor_C.OnMissionChanged
struct ABP_CountDownActor_C_OnMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CountDownActor.BP_CountDownActor_C.ExecuteUbergraph_BP_CountDownActor
struct ABP_CountDownActor_C_ExecuteUbergraph_BP_CountDownActor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
