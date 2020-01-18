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

// Function UI_Perks_View.UI_Perks_View_C.SelectPerkWidget
struct UUI_Perks_View_C_SelectPerkWidget_Params
{
	class UUI_Perks_Item_C**                           PerkWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Perks_View.UI_Perks_View_C.PreConstruct
struct UUI_Perks_View_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_View.UI_Perks_View_C.OnPerkClicked_Event
struct UUI_Perks_View_C_OnPerkClicked_Event_Params
{
	class UUI_Perks_Item_C**                           PerkWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Perks_View.UI_Perks_View_C.BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature
struct UUI_Perks_View_C_BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature_Params
{
};

// Function UI_Perks_View.UI_Perks_View_C.ExecuteUbergraph_UI_Perks_View
struct UUI_Perks_View_C_ExecuteUbergraph_UI_Perks_View_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
