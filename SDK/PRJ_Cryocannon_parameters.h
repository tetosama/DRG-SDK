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

// Function PRJ_Cryocannon.PRJ_Cryocannon_C.UserConstructionScript
struct APRJ_Cryocannon_C_UserConstructionScript_Params
{
};

// Function PRJ_Cryocannon.PRJ_Cryocannon_C.OnImpacted
struct APRJ_Cryocannon_C_OnImpacted_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_Cryocannon.PRJ_Cryocannon_C.ExecuteUbergraph_PRJ_Cryocannon
struct APRJ_Cryocannon_C_ExecuteUbergraph_PRJ_Cryocannon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
