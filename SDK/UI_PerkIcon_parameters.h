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

// Function UI_PerkIcon.UI_PerkIcon_C.SetIconColor
struct UUI_PerkIcon_C_SetIconColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      ColorSelector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkIcon.UI_PerkIcon_C.PreConstruct
struct UUI_PerkIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset
struct UUI_PerkIcon_C_Set_Perk_Asset_Params
{
	class UPerkAsset**                                 PerkAsset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset Last Claimed
struct UUI_PerkIcon_C_Set_Perk_Asset_Last_Claimed_Params
{
	class UPerkAsset**                                 PerkAsset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkIcon.UI_PerkIcon_C.ExecuteUbergraph_UI_PerkIcon
struct UUI_PerkIcon_C_ExecuteUbergraph_UI_PerkIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkIcon.UI_PerkIcon_C.NewEventDispatcher_0__DelegateSignature
struct UUI_PerkIcon_C_NewEventDispatcher_0__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
