
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

// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.UpdateStats
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_TabPlayerListEntry_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.UpdateStats");

	UHUD_TabPlayerListEntry_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntry_C::Update(class AFSDPlayerState** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.Update");

	UHUD_TabPlayerListEntry_C_Update_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.Tick");

	UHUD_TabPlayerListEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.PreConstruct");

	UHUD_TabPlayerListEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.ExecuteUbergraph_HUD_TabPlayerListEntry
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntry_C::ExecuteUbergraph_HUD_TabPlayerListEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.ExecuteUbergraph_HUD_TabPlayerListEntry");

	UHUD_TabPlayerListEntry_C_ExecuteUbergraph_HUD_TabPlayerListEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
