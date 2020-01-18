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

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Get_PerkStar_ToolTipWidget_1
struct UITM_Loadout_PerksEquip_C_Get_PerkStar_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerkAt
struct UITM_Loadout_PerksEquip_C_GetEquippedPerkAt_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPerkAsset*                                  Perk;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateEquippedPerks
struct UITM_Loadout_PerksEquip_C_UpdateEquippedPerks_Params
{
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Selected Item
struct UITM_Loadout_PerksEquip_C_Set_Selected_Item_Params
{
	class UUI_Perk_Equipping_Item_C**                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.PreConstruct
struct UITM_Loadout_PerksEquip_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.OnClicked_Event
struct UITM_Loadout_PerksEquip_C_OnClicked_Event_Params
{
	class UUI_Perk_Equipping_Item_C**                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Refresh
struct UITM_Loadout_PerksEquip_C_Refresh_Params
{
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Construct
struct UITM_Loadout_PerksEquip_C_Construct_Params
{
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Character Class
struct UITM_Loadout_PerksEquip_C_Set_Character_Class_Params
{
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__RetirementBonusSlot_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature
struct UITM_Loadout_PerksEquip_C_BndEvt__RetirementBonusSlot_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature_Params
{
	class UUI_Perk_Equipping_Item_C**                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature
struct UITM_Loadout_PerksEquip_C_BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature_Params
{
	class UPerkAsset**                                 PerkAsset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.ExecuteUbergraph_ITM_Loadout_PerksEquip
struct UITM_Loadout_PerksEquip_C_ExecuteUbergraph_ITM_Loadout_PerksEquip_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
