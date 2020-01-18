
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

// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_ItemBar_ExtraButtons_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.Construct");

	UHUD_ItemBar_ExtraButtons_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.OnInputSourceChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputSource*                  InputSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ItemBar_ExtraButtons_C::OnInputSourceChanged_Event(EInputSource* InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.OnInputSourceChanged_Event");

	UHUD_ItemBar_ExtraButtons_C_OnInputSourceChanged_Event_Params params;
	params.InputSource = InputSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ItemBar_ExtraButtons_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.PreConstruct");

	UHUD_ItemBar_ExtraButtons_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.ExecuteUbergraph_HUD_ItemBar_ExtraButtons
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ItemBar_ExtraButtons_C::ExecuteUbergraph_HUD_ItemBar_ExtraButtons(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.ExecuteUbergraph_HUD_ItemBar_ExtraButtons");

	UHUD_ItemBar_ExtraButtons_C_ExecuteUbergraph_HUD_ItemBar_ExtraButtons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
