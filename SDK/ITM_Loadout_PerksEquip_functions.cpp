
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

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Get_PerkStar_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_Loadout_PerksEquip_C::Get_PerkStar_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Get_PerkStar_ToolTipWidget_1");

	UITM_Loadout_PerksEquip_C_Get_PerkStar_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerkAt
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPerkAsset*              Perk                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::GetEquippedPerkAt(int* Index, class UPerkAsset** Perk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerkAt");

	UITM_Loadout_PerksEquip_C_GetEquippedPerkAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Perk != nullptr)
		*Perk = params.Perk;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateEquippedPerks
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Loadout_PerksEquip_C::UpdateEquippedPerks()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateEquippedPerks");

	UITM_Loadout_PerksEquip_C_UpdateEquippedPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Selected Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Perk_Equipping_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::Set_Selected_Item(class UUI_Perk_Equipping_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Selected Item");

	UITM_Loadout_PerksEquip_C_Set_Selected_Item_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.PreConstruct");

	UITM_Loadout_PerksEquip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.OnClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Perk_Equipping_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::OnClicked_Event(class UUI_Perk_Equipping_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.OnClicked_Event");

	UITM_Loadout_PerksEquip_C_OnClicked_Event_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UITM_Loadout_PerksEquip_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Refresh");

	UITM_Loadout_PerksEquip_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Loadout_PerksEquip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Construct");

	UITM_Loadout_PerksEquip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Character Class
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::Set_Character_Class(class UClass** CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Character Class");

	UITM_Loadout_PerksEquip_C_Set_Character_Class_Params params;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__RetirementBonusSlot_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Perk_Equipping_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::BndEvt__RetirementBonusSlot_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature(class UUI_Perk_Equipping_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__RetirementBonusSlot_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature");

	UITM_Loadout_PerksEquip_C_BndEvt__RetirementBonusSlot_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPerkAsset**             PerkAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature(class UPerkAsset** PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature");

	UITM_Loadout_PerksEquip_C_BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature_Params params;
	params.PerkAsset = PerkAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.ExecuteUbergraph_ITM_Loadout_PerksEquip
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::ExecuteUbergraph_ITM_Loadout_PerksEquip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.ExecuteUbergraph_ITM_Loadout_PerksEquip");

	UITM_Loadout_PerksEquip_C_ExecuteUbergraph_ITM_Loadout_PerksEquip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
