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

// Function BP_DeathStats.BP_DeathStats_C.Set Stats Owner
struct ABP_DeathStats_C_Set_Stats_Owner_Params
{
	class AFSDPlayerState**                            Player_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeathStats.BP_DeathStats_C.ExecuteUbergraph_BP_DeathStats
struct ABP_DeathStats_C_ExecuteUbergraph_BP_DeathStats_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
