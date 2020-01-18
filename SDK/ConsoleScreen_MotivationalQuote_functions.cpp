
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

// Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_MotivationalQuote_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.Construct");

	UConsoleScreen_MotivationalQuote_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.ExecuteUbergraph_ConsoleScreen_MotivationalQuote
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_MotivationalQuote_C::ExecuteUbergraph_ConsoleScreen_MotivationalQuote(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.ExecuteUbergraph_ConsoleScreen_MotivationalQuote");

	UConsoleScreen_MotivationalQuote_C_ExecuteUbergraph_ConsoleScreen_MotivationalQuote_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
