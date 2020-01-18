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

// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.Construct
struct UHUD_ItemBar_ExtraButtons_C_Construct_Params
{
};

// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.OnInputSourceChanged_Event
struct UHUD_ItemBar_ExtraButtons_C_OnInputSourceChanged_Event_Params
{
	EInputSource*                                      InputSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.PreConstruct
struct UHUD_ItemBar_ExtraButtons_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.ExecuteUbergraph_HUD_ItemBar_ExtraButtons
struct UHUD_ItemBar_ExtraButtons_C_ExecuteUbergraph_HUD_ItemBar_ExtraButtons_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
