
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

// Function ConsoleScreen_Tutorial.ConsoleScreen_Tutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_Tutorial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Tutorial.ConsoleScreen_Tutorial_C.Construct");

	UConsoleScreen_Tutorial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Tutorial.ConsoleScreen_Tutorial_C.DisableConsole
// (BlueprintCallable, BlueprintEvent)

void UConsoleScreen_Tutorial_C::DisableConsole()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Tutorial.ConsoleScreen_Tutorial_C.DisableConsole");

	UConsoleScreen_Tutorial_C_DisableConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Tutorial.ConsoleScreen_Tutorial_C.SetConsoleEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Tutorial_C::SetConsoleEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Tutorial.ConsoleScreen_Tutorial_C.SetConsoleEnabled");

	UConsoleScreen_Tutorial_C_SetConsoleEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Tutorial.ConsoleScreen_Tutorial_C.ExecuteUbergraph_ConsoleScreen_Tutorial
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Tutorial_C::ExecuteUbergraph_ConsoleScreen_Tutorial(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Tutorial.ConsoleScreen_Tutorial_C.ExecuteUbergraph_ConsoleScreen_Tutorial");

	UConsoleScreen_Tutorial_C_ExecuteUbergraph_ConsoleScreen_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
