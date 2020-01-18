
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

// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.AdjustCLBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_HazCompLen_C::AdjustCLBar(float* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.AdjustCLBar");

	UConsoleScreen_HazCompLen_C_AdjustCLBar_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.AdjustBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_HazCompLen_C::AdjustBar(float* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.AdjustBar");

	UConsoleScreen_HazCompLen_C_AdjustBar_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.SetGeneratedMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      In_Mission                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_HazCompLen_C::SetGeneratedMission(class UGeneratedMission** In_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.SetGeneratedMission");

	UConsoleScreen_HazCompLen_C_SetGeneratedMission_Params params;
	params.In_Mission = In_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_HazCompLen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.Construct");

	UConsoleScreen_HazCompLen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_HazCompLen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.Tick");

	UConsoleScreen_HazCompLen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_HazCompLen_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.OnGeneratedMissionChanged");

	UConsoleScreen_HazCompLen_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.ExecuteUbergraph_ConsoleScreen_HazCompLen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_HazCompLen_C::ExecuteUbergraph_ConsoleScreen_HazCompLen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.ExecuteUbergraph_ConsoleScreen_HazCompLen");

	UConsoleScreen_HazCompLen_C_ExecuteUbergraph_ConsoleScreen_HazCompLen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
