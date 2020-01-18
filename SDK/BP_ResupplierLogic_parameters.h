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

// Function BP_ResupplierLogic.BP_ResupplierLogic_C.GetAdditionalText
struct UBP_ResupplierLogic_C_GetAdditionalText_Params
{
	int*                                               Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ResupplierLogic.BP_ResupplierLogic_C.StartLogic
struct UBP_ResupplierLogic_C_StartLogic_Params
{
	int*                                               Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ResupplierLogic.BP_ResupplierLogic_C.OnResupplied
struct UBP_ResupplierLogic_C_OnResupplied_Params
{
	float*                                             percentage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ResupplierLogic.BP_ResupplierLogic_C.Client_InstantlyReload
struct UBP_ResupplierLogic_C_Client_InstantlyReload_Params
{
};

// Function BP_ResupplierLogic.BP_ResupplierLogic_C.ExecuteUbergraph_BP_ResupplierLogic
struct UBP_ResupplierLogic_C_ExecuteUbergraph_BP_ResupplierLogic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
