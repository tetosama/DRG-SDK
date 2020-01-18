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

// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.FindPlayerList
struct UHUD_TabPlayerList_Interactable_C_FindPlayerList_Params
{
	TArray<class AFSDPlayerState*>                     OutPlayers;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.Construct
struct UHUD_TabPlayerList_Interactable_C_Construct_Params
{
};

// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.AddPlayer
struct UHUD_TabPlayerList_Interactable_C_AddPlayer_Params
{
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.Update
struct UHUD_TabPlayerList_Interactable_C_Update_Params
{
};

// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.OnPlayerJoined_Event
struct UHUD_TabPlayerList_Interactable_C_OnPlayerJoined_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.OnPlayerLeave_Event
struct UHUD_TabPlayerList_Interactable_C_OnPlayerLeave_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.ExecuteUbergraph_HUD_TabPlayerList_Interactable
struct UHUD_TabPlayerList_Interactable_C_ExecuteUbergraph_HUD_TabPlayerList_Interactable_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
