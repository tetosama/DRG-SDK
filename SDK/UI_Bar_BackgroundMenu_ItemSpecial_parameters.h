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

// Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.Set Drinkable shown price
struct UUI_Bar_BackgroundMenu_ItemSpecial_C_Set_Drinkable_shown_price_Params
{
};

// Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.PreConstruct
struct UUI_Bar_BackgroundMenu_ItemSpecial_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.SetDrinkable
struct UUI_Bar_BackgroundMenu_ItemSpecial_C_SetDrinkable_Params
{
	class UDrinkableDataAsset**                        InDrinkable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecial
struct UUI_Bar_BackgroundMenu_ItemSpecial_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecial_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
