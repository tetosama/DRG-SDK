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

// Function Elevator2.Elevator2_C.OnRep_GoingUp
struct AElevator2_C_OnRep_GoingUp_Params
{
};

// Function Elevator2.Elevator2_C.UserConstructionScript
struct AElevator2_C_UserConstructionScript_Params
{
};

// Function Elevator2.Elevator2_C.ReceiveTick
struct AElevator2_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Elevator2.Elevator2_C.ExecuteUbergraph_Elevator2
struct AElevator2_C_ExecuteUbergraph_Elevator2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
