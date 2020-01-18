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

// Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.SetUnlocks
struct UTOOLTIP_MasteryIcon_C_SetUnlocks_Params
{
	TArray<class UUnlockReward*>                       Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.PreConstruct
struct UTOOLTIP_MasteryIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.ExecuteUbergraph_TOOLTIP_MasteryIcon
struct UTOOLTIP_MasteryIcon_C_ExecuteUbergraph_TOOLTIP_MasteryIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
