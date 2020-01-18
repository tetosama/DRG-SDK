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

// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.GetPlayerState
struct UITM_Craft_ItemIcon_C_GetPlayerState_Params
{
	class AFSDPlayerState*                             AsFSDPlayer_State;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.PreConstruct
struct UITM_Craft_ItemIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetData
struct UITM_Craft_ItemIcon_C_SetData_Params
{
	TScriptInterface<class UCraftable>*                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.Construct
struct UITM_Craft_ItemIcon_C_Construct_Params
{
};

// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.ExecuteUbergraph_ITM_Craft_ItemIcon
struct UITM_Craft_ItemIcon_C_ExecuteUbergraph_ITM_Craft_ItemIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
