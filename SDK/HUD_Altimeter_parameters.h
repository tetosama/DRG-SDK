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

// Function HUD_Altimeter.HUD_Altimeter_C.SetDepth
struct UHUD_Altimeter_C_SetDepth_Params
{
	int*                                               NewDepth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Altimeter.HUD_Altimeter_C.Construct
struct UHUD_Altimeter_C_Construct_Params
{
};

// Function HUD_Altimeter.HUD_Altimeter_C.DepthChanged
struct UHUD_Altimeter_C_DepthChanged_Params
{
	int*                                               Depth;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Altimeter.HUD_Altimeter_C.PreConstruct
struct UHUD_Altimeter_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Altimeter.HUD_Altimeter_C.ExecuteUbergraph_HUD_Altimeter
struct UHUD_Altimeter_C_ExecuteUbergraph_HUD_Altimeter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
