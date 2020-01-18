
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

// Function UI_Perks_View.UI_Perks_View_C.SelectPerkWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C**       PerkWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Perks_View_C::SelectPerkWidget(class UUI_Perks_Item_C** PerkWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.SelectPerkWidget");

	UUI_Perks_View_C_SelectPerkWidget_Params params;
	params.PerkWidget = PerkWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_View.UI_Perks_View_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_View_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.PreConstruct");

	UUI_Perks_View_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_View.UI_Perks_View_C.OnPerkClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C**       PerkWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Perks_View_C::OnPerkClicked_Event(class UUI_Perks_Item_C** PerkWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.OnPerkClicked_Event");

	UUI_Perks_View_C_OnPerkClicked_Event_Params params;
	params.PerkWidget = PerkWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_View.UI_Perks_View_C.BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature
// (BlueprintEvent)

void UUI_Perks_View_C::BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature");

	UUI_Perks_View_C_BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_View.UI_Perks_View_C.ExecuteUbergraph_UI_Perks_View
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_View_C::ExecuteUbergraph_UI_Perks_View(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.ExecuteUbergraph_UI_Perks_View");

	UUI_Perks_View_C_ExecuteUbergraph_UI_Perks_View_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
