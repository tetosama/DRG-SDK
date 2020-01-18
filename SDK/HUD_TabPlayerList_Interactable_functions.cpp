
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

// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.FindPlayerList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AFSDPlayerState*> OutPlayers                     (Parm, OutParm, ZeroConstructor)

void UHUD_TabPlayerList_Interactable_C::FindPlayerList(TArray<class AFSDPlayerState*>* OutPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.FindPlayerList");

	UHUD_TabPlayerList_Interactable_C_FindPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayers != nullptr)
		*OutPlayers = params.OutPlayers;
}


// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_TabPlayerList_Interactable_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.Construct");

	UHUD_TabPlayerList_Interactable_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.AddPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerList_Interactable_C::AddPlayer(class AFSDPlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.AddPlayer");

	UHUD_TabPlayerList_Interactable_C_AddPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.Update
// (BlueprintCallable, BlueprintEvent)

void UHUD_TabPlayerList_Interactable_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.Update");

	UHUD_TabPlayerList_Interactable_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.OnPlayerJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerList_Interactable_C::OnPlayerJoined_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.OnPlayerJoined_Event");

	UHUD_TabPlayerList_Interactable_C_OnPlayerJoined_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.OnPlayerLeave_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerList_Interactable_C::OnPlayerLeave_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.OnPlayerLeave_Event");

	UHUD_TabPlayerList_Interactable_C_OnPlayerLeave_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.ExecuteUbergraph_HUD_TabPlayerList_Interactable
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerList_Interactable_C::ExecuteUbergraph_HUD_TabPlayerList_Interactable(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.ExecuteUbergraph_HUD_TabPlayerList_Interactable");

	UHUD_TabPlayerList_Interactable_C_ExecuteUbergraph_HUD_TabPlayerList_Interactable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
