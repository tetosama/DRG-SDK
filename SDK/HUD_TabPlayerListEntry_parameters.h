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

// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.UpdateStats
struct UHUD_TabPlayerListEntry_C_UpdateStats_Params
{
};

// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.Update
struct UHUD_TabPlayerListEntry_C_Update_Params
{
	class AFSDPlayerState**                            State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.Tick
struct UHUD_TabPlayerListEntry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.PreConstruct
struct UHUD_TabPlayerListEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.ExecuteUbergraph_HUD_TabPlayerListEntry
struct UHUD_TabPlayerListEntry_C_ExecuteUbergraph_HUD_TabPlayerListEntry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
