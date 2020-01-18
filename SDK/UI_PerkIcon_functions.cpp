
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

// Function UI_PerkIcon.UI_PerkIcon_C.SetIconColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  ColorSelector                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::SetIconColor(TEnumAsByte<ENUM_MenuColors>* ColorSelector)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.SetIconColor");

	UUI_PerkIcon_C_SetIconColor_Params params;
	params.ColorSelector = ColorSelector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkIcon.UI_PerkIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.PreConstruct");

	UUI_PerkIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             PerkAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::Set_Perk_Asset(class UPerkAsset** PerkAsset, int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset");

	UUI_PerkIcon_C_Set_Perk_Asset_Params params;
	params.PerkAsset = PerkAsset;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset Last Claimed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             PerkAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::Set_Perk_Asset_Last_Claimed(class UPerkAsset** PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset Last Claimed");

	UUI_PerkIcon_C_Set_Perk_Asset_Last_Claimed_Params params;
	params.PerkAsset = PerkAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkIcon.UI_PerkIcon_C.ExecuteUbergraph_UI_PerkIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::ExecuteUbergraph_UI_PerkIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.ExecuteUbergraph_UI_PerkIcon");

	UUI_PerkIcon_C_ExecuteUbergraph_UI_PerkIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkIcon.UI_PerkIcon_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PerkIcon_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.NewEventDispatcher_0__DelegateSignature");

	UUI_PerkIcon_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
