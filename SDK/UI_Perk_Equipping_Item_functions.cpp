
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

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.CreateToolTip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UUI_Perk_Equipping_Item_C::CreateToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.CreateToolTip");

	UUI_Perk_Equipping_Item_C_CreateToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.IsItemLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ItemLocked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Perk_Equipping_Item_C::IsItemLocked(bool* ItemLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.IsItemLocked");

	UUI_Perk_Equipping_Item_C_IsItemLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLocked != nullptr)
		*ItemLocked = params.ItemLocked;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.GetPerkAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPerkAsset*              PerkAsset                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Perk_Equipping_Item_C::GetPerkAsset(class UPerkAsset** PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.GetPerkAsset");

	UUI_Perk_Equipping_Item_C_GetPerkAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerkAsset != nullptr)
		*PerkAsset = params.PerkAsset;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Perk_Equipping_Item_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseButtonUp");

	UUI_Perk_Equipping_Item_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perk_Equipping_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.PreConstruct");

	UUI_Perk_Equipping_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Perk_Equipping_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Construct");

	UUI_Perk_Equipping_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UUI_Perk_Equipping_Item_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Refresh");

	UUI_Perk_Equipping_Item_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Set Perk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             PerkAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perk_Equipping_Item_C::Set_Perk(class UPerkAsset** PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Set Perk");

	UUI_Perk_Equipping_Item_C_Set_Perk_Params params;
	params.PerkAsset = PerkAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Perk_Equipping_Item_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseEnter");

	UUI_Perk_Equipping_Item_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Perk_Equipping_Item_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseLeave");

	UUI_Perk_Equipping_Item_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Set Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perk_Equipping_Item_C::Set_Selected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Set Selected");

	UUI_Perk_Equipping_Item_C_Set_Selected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.ExecuteUbergraph_UI_Perk_Equipping_Item
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perk_Equipping_Item_C::ExecuteUbergraph_UI_Perk_Equipping_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.ExecuteUbergraph_UI_Perk_Equipping_Item");

	UUI_Perk_Equipping_Item_C_ExecuteUbergraph_UI_Perk_Equipping_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Perk_Equipping_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Perk_Equipping_Item_C::OnClicked__DelegateSignature(class UUI_Perk_Equipping_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnClicked__DelegateSignature");

	UUI_Perk_Equipping_Item_C_OnClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
