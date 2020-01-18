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

// Function ITM_BaseFlare.ITM_BaseFlare_C.GetGearStatEntry
struct AITM_BaseFlare_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ITM_BaseFlare.ITM_BaseFlare_C.UpdateShadowRadius
struct AITM_BaseFlare_C_UpdateShadowRadius_Params
{
};

// Function ITM_BaseFlare.ITM_BaseFlare_C.StartFadeOut
struct AITM_BaseFlare_C_StartFadeOut_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_BaseFlare.ITM_BaseFlare_C.UserConstructionScript
struct AITM_BaseFlare_C_UserConstructionScript_Params
{
};

// Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__FinishedFunc
struct AITM_BaseFlare_C_Timeline_0__FinishedFunc_Params
{
};

// Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__UpdateFunc
struct AITM_BaseFlare_C_Timeline_0__UpdateFunc_Params
{
};

// Function ITM_BaseFlare.ITM_BaseFlare_C.ReceiveBeginPlay
struct AITM_BaseFlare_C_ReceiveBeginPlay_Params
{
};

// Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareExtinguish
struct AITM_BaseFlare_C_OnFlareExtinguish_Params
{
};

// Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareIgnite
struct AITM_BaseFlare_C_OnFlareIgnite_Params
{
};

// Function ITM_BaseFlare.ITM_BaseFlare_C.OnUpdateShadowRadius
struct AITM_BaseFlare_C_OnUpdateShadowRadius_Params
{
};

// Function ITM_BaseFlare.ITM_BaseFlare_C.ActivateFlare
struct AITM_BaseFlare_C_ActivateFlare_Params
{
};

// Function ITM_BaseFlare.ITM_BaseFlare_C.ExecuteUbergraph_ITM_BaseFlare
struct AITM_BaseFlare_C_ExecuteUbergraph_ITM_BaseFlare_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
