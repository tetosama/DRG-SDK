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

// Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.SetData
struct UTOOLTIP_ServerEntry_Team_C_SetData_Params
{
	class UITM_ServerList_Entry_PlayerIcons_C**        TeamWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              Players;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              IsClassLocked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.PreConstruct
struct UTOOLTIP_ServerEntry_Team_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Team
struct UTOOLTIP_ServerEntry_Team_C_ExecuteUbergraph_TOOLTIP_ServerEntry_Team_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
