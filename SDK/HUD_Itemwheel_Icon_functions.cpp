
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

// Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnUnselect
// (Event, Protected, BlueprintEvent)

void UHUD_Itemwheel_Icon_C::OnUnselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnUnselect");

	UHUD_Itemwheel_Icon_C_OnUnselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnSelect
// (Event, Protected, BlueprintEvent)

void UHUD_Itemwheel_Icon_C::OnSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnSelect");

	UHUD_Itemwheel_Icon_C_OnSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnInit
// (Event, Protected, BlueprintEvent)

void UHUD_Itemwheel_Icon_C::OnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnInit");

	UHUD_Itemwheel_Icon_C_OnInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Itemwheel_Icon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.PreConstruct");

	UHUD_Itemwheel_Icon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.ExecuteUbergraph_HUD_Itemwheel_Icon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Itemwheel_Icon_C::ExecuteUbergraph_HUD_Itemwheel_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.ExecuteUbergraph_HUD_Itemwheel_Icon");

	UHUD_Itemwheel_Icon_C_ExecuteUbergraph_HUD_Itemwheel_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
