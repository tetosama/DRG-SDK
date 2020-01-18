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

// Function GatlingGun_Overheat.GatlingGun_Overheat_C.SetHeatValue
struct UGatlingGun_Overheat_C_SetHeatValue_Params
{
	float*                                             HeatPercentage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Overheated;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatlingGun_Overheat.GatlingGun_Overheat_C.Construct
struct UGatlingGun_Overheat_C_Construct_Params
{
};

// Function GatlingGun_Overheat.GatlingGun_Overheat_C.SetProgress
struct UGatlingGun_Overheat_C_SetProgress_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatlingGun_Overheat.GatlingGun_Overheat_C.ExecuteUbergraph_GatlingGun_Overheat
struct UGatlingGun_Overheat_C_ExecuteUbergraph_GatlingGun_Overheat_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
