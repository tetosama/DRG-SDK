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

// Function HUD_PlayerPerks.HUD_PlayerPerks_C.SetCharacter
struct UHUD_PlayerPerks_C_SetCharacter_Params
{
	class APlayerCharacter**                           InPlayerCharacter;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerPerks.HUD_PlayerPerks_C.Construct
struct UHUD_PlayerPerks_C_Construct_Params
{
};

// Function HUD_PlayerPerks.HUD_PlayerPerks_C.ExecuteUbergraph_HUD_PlayerPerks
struct UHUD_PlayerPerks_C_ExecuteUbergraph_HUD_PlayerPerks_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
