
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

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.ToggleCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrosshairManager_C::ToggleCrosshair(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.ToggleCrosshair");

	UHUD_CrosshairManager_C_ToggleCrosshair_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.ChangeCrosshair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            NewCrosshair                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_CrosshairManager_C::ChangeCrosshair(class UUserWidget** NewCrosshair)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.ChangeCrosshair");

	UHUD_CrosshairManager_C_ChangeCrosshair_Params params;
	params.NewCrosshair = NewCrosshair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Play Intro
// (BlueprintCallable, BlueprintEvent)

void UHUD_CrosshairManager_C::Play_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.Play Intro");

	UHUD_CrosshairManager_C_Play_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCharacterStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrosshairManager_C::OnCharacterStateChanged(ECharacterState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCharacterStateChanged");

	UHUD_CrosshairManager_C_OnCharacterStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCameraModeChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterCameraMode*          NewCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharacterCameraMode*          OldCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrosshairManager_C::OnCameraModeChanged_Event(ECharacterCameraMode* NewCameraMode, ECharacterCameraMode* OldCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCameraModeChanged_Event");

	UHUD_CrosshairManager_C_OnCameraModeChanged_Event_Params params;
	params.NewCameraMode = NewCameraMode;
	params.OldCameraMode = OldCameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Update Crosshair
// (BlueprintCallable, BlueprintEvent)

void UHUD_CrosshairManager_C::Update_Crosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.Update Crosshair");

	UHUD_CrosshairManager_C_Update_Crosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnItemEquipped_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrosshairManager_C::OnItemEquipped_Event(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnItemEquipped_Event");

	UHUD_CrosshairManager_C_OnItemEquipped_Event_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingEnd_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceBank**          ResourceBank                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_CrosshairManager_C::OnDepositingEnd_Event(class UResourceBank** ResourceBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingEnd_Event");

	UHUD_CrosshairManager_C_OnDepositingEnd_Event_Params params;
	params.ResourceBank = ResourceBank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingBegin_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceBank**          ResourceBank                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_CrosshairManager_C::OnDepositingBegin_Event(class UResourceBank** ResourceBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingBegin_Event");

	UHUD_CrosshairManager_C_OnDepositingBegin_Event_Params params;
	params.ResourceBank = ResourceBank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnToggleMapTool
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrosshairManager_C::OnToggleMapTool(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnToggleMapTool");

	UHUD_CrosshairManager_C_OnToggleMapTool_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_CrosshairManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.Construct");

	UHUD_CrosshairManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.ExecuteUbergraph_HUD_CrosshairManager
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrosshairManager_C::ExecuteUbergraph_HUD_CrosshairManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.ExecuteUbergraph_HUD_CrosshairManager");

	UHUD_CrosshairManager_C_ExecuteUbergraph_HUD_CrosshairManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
