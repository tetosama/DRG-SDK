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

// Function HUD_CoolDownBar.HUD_CoolDownBar_C.Initialize
struct UHUD_CoolDownBar_C_Initialize_Params
{
	class UCoolDownItemAggregator**                    Cooldown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_CoolDownBar.HUD_CoolDownBar_C.Construct
struct UHUD_CoolDownBar_C_Construct_Params
{
};

// Function HUD_CoolDownBar.HUD_CoolDownBar_C.Tick
struct UHUD_CoolDownBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CoolDownBar.HUD_CoolDownBar_C.ProgressSound
struct UHUD_CoolDownBar_C_ProgressSound_Params
{
};

// Function HUD_CoolDownBar.HUD_CoolDownBar_C.ExecuteUbergraph_HUD_CoolDownBar
struct UHUD_CoolDownBar_C_ExecuteUbergraph_HUD_CoolDownBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
