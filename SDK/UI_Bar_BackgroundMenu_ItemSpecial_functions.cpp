
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.Set Drinkable shown price
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_BackgroundMenu_ItemSpecial_C::Set_Drinkable_shown_price()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.Set Drinkable shown price");

	UUI_Bar_BackgroundMenu_ItemSpecial_C_Set_Drinkable_shown_price_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_ItemSpecial_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.PreConstruct");

	UUI_Bar_BackgroundMenu_ItemSpecial_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.SetDrinkable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    InDrinkable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_ItemSpecial_C::SetDrinkable(class UDrinkableDataAsset** InDrinkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.SetDrinkable");

	UUI_Bar_BackgroundMenu_ItemSpecial_C_SetDrinkable_Params params;
	params.InDrinkable = InDrinkable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecial
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_ItemSpecial_C::ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecial(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecial");

	UUI_Bar_BackgroundMenu_ItemSpecial_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
