
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

// Function HUD_Flashlight.HUD_Flashlight_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Flashlight_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flashlight.HUD_Flashlight_C.Construct");

	UHUD_Flashlight_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flashlight.HUD_Flashlight_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Flashlight_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flashlight.HUD_Flashlight_C.PreConstruct");

	UHUD_Flashlight_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flashlight.HUD_Flashlight_C.OnHeadlightOnChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsOn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Flashlight_C::OnHeadlightOnChanged(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flashlight.HUD_Flashlight_C.OnHeadlightOnChanged");

	UHUD_Flashlight_C_OnHeadlightOnChanged_Params params;
	params.IsOn = IsOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flashlight.HUD_Flashlight_C.ExecuteUbergraph_HUD_Flashlight
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Flashlight_C::ExecuteUbergraph_HUD_Flashlight(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flashlight.HUD_Flashlight_C.ExecuteUbergraph_HUD_Flashlight");

	UHUD_Flashlight_C_ExecuteUbergraph_HUD_Flashlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
