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

// Function WeaponDisplay_Overheat.WeaponDisplay_Overheat_C.SetHeatValue
struct UWeaponDisplay_Overheat_C_SetHeatValue_Params
{
	float*                                             HeatPercentage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Overheated;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_Overheat.WeaponDisplay_Overheat_C.Construct
struct UWeaponDisplay_Overheat_C_Construct_Params
{
};

// Function WeaponDisplay_Overheat.WeaponDisplay_Overheat_C.ExecuteUbergraph_WeaponDisplay_Overheat
struct UWeaponDisplay_Overheat_C_ExecuteUbergraph_WeaponDisplay_Overheat_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
