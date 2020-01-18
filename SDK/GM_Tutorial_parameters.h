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

// Function GM_Tutorial.GM_Tutorial_C.SpawnBosco
struct AGM_Tutorial_C_SpawnBosco_Params
{
	struct FTransform*                                 Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function GM_Tutorial.GM_Tutorial_C.ReceiveBeginPlay
struct AGM_Tutorial_C_ReceiveBeginPlay_Params
{
};

// Function GM_Tutorial.GM_Tutorial_C.ExecuteUbergraph_GM_Tutorial
struct AGM_Tutorial_C_ExecuteUbergraph_GM_Tutorial_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
