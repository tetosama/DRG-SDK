
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

// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.SetPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntry_Interactable_C::SetPlayer(class AFSDPlayerState** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.SetPlayer");

	UHUD_TabPlayerListEntry_Interactable_C_SetPlayer_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.OnPlayerSet
// (BlueprintCallable, BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::OnPlayerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.OnPlayerSet");

	UHUD_TabPlayerListEntry_Interactable_C_OnPlayerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.OnPlayerCharacterSpawned_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntry_Interactable_C::OnPlayerCharacterSpawned_Event(class APlayerCharacter** PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.OnPlayerCharacterSpawned_Event");

	UHUD_TabPlayerListEntry_Interactable_C_OnPlayerCharacterSpawned_Event_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.Update Mute Button
// (BlueprintCallable, BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::Update_Mute_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.Update Mute Button");

	UHUD_TabPlayerListEntry_Interactable_C_Update_Mute_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntry_Interactable_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.PreConstruct");

	UHUD_TabPlayerListEntry_Interactable_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_kick_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::BndEvt__BTN_kick_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_kick_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UHUD_TabPlayerListEntry_Interactable_C_BndEvt__BTN_kick_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_mute_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::BndEvt__BTN_mute_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_mute_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UHUD_TabPlayerListEntry_Interactable_C_BndEvt__BTN_mute_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UHUD_TabPlayerListEntry_Interactable_C_BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UHUD_TabPlayerListEntry_Interactable_C_BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_Respawn_Spacerig_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::BndEvt__BTN_Respawn_Spacerig_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_Respawn_Spacerig_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UHUD_TabPlayerListEntry_Interactable_C_BndEvt__BTN_Respawn_Spacerig_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.ExecuteUbergraph_HUD_TabPlayerListEntry_Interactable
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntry_Interactable_C::ExecuteUbergraph_HUD_TabPlayerListEntry_Interactable(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.ExecuteUbergraph_HUD_TabPlayerListEntry_Interactable");

	UHUD_TabPlayerListEntry_Interactable_C_ExecuteUbergraph_HUD_TabPlayerListEntry_Interactable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
