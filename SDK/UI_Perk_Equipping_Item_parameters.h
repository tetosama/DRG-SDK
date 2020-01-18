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

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.CreateToolTip
struct UUI_Perk_Equipping_Item_C_CreateToolTip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.IsItemLocked
struct UUI_Perk_Equipping_Item_C_IsItemLocked_Params
{
	bool                                               ItemLocked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.GetPerkAsset
struct UUI_Perk_Equipping_Item_C_GetPerkAsset_Params
{
	class UPerkAsset*                                  PerkAsset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseButtonUp
struct UUI_Perk_Equipping_Item_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.PreConstruct
struct UUI_Perk_Equipping_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Construct
struct UUI_Perk_Equipping_Item_C_Construct_Params
{
};

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Refresh
struct UUI_Perk_Equipping_Item_C_Refresh_Params
{
};

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Set Perk
struct UUI_Perk_Equipping_Item_C_Set_Perk_Params
{
	class UPerkAsset**                                 PerkAsset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseEnter
struct UUI_Perk_Equipping_Item_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseLeave
struct UUI_Perk_Equipping_Item_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Set Selected
struct UUI_Perk_Equipping_Item_C_Set_Selected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.ExecuteUbergraph_UI_Perk_Equipping_Item
struct UUI_Perk_Equipping_Item_C_ExecuteUbergraph_UI_Perk_Equipping_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnClicked__DelegateSignature
struct UUI_Perk_Equipping_Item_C_OnClicked__DelegateSignature_Params
{
	class UUI_Perk_Equipping_Item_C**                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
