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

// Function ABP_FuelCell.ABP_FuelCell_C.SetBuildProgress
struct UABP_FuelCell_C_SetBuildProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_FuelCell.ABP_FuelCell_C.SetDefendProgress
struct UABP_FuelCell_C_SetDefendProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_FuelCell.ABP_FuelCell_C.ExecuteUbergraph_ABP_FuelCell
struct UABP_FuelCell_C_ExecuteUbergraph_ABP_FuelCell_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
