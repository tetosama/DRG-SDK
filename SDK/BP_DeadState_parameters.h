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

// Function BP_DeadState.BP_DeadState_C.ReceiveBeginPlay
struct UBP_DeadState_C_ReceiveBeginPlay_Params
{
};

// Function BP_DeadState.BP_DeadState_C.ReceiveStateExit
struct UBP_DeadState_C_ReceiveStateExit_Params
{
};

// Function BP_DeadState.BP_DeadState_C.ReceiveStateEnter
struct UBP_DeadState_C_ReceiveStateEnter_Params
{
};

// Function BP_DeadState.BP_DeadState_C.Set Death parameters
struct UBP_DeadState_C_Set_Death_parameters_Params
{
	float*                                             Respawn_delay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Effect_Delay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               Death_montage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem**                            Death_Effect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Use_animtime_as_respawn_time;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeadState.BP_DeadState_C.ExecuteUbergraph_BP_DeadState
struct UBP_DeadState_C_ExecuteUbergraph_BP_DeadState_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
