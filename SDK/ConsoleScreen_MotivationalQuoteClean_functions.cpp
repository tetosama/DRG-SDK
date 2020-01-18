
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

// Function ConsoleScreen_MotivationalQuoteClean.ConsoleScreen_MotivationalQuoteClean_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_MotivationalQuoteClean_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MotivationalQuoteClean.ConsoleScreen_MotivationalQuoteClean_C.Construct");

	UConsoleScreen_MotivationalQuoteClean_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_MotivationalQuoteClean.ConsoleScreen_MotivationalQuoteClean_C.ExecuteUbergraph_ConsoleScreen_MotivationalQuoteClean
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_MotivationalQuoteClean_C::ExecuteUbergraph_ConsoleScreen_MotivationalQuoteClean(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MotivationalQuoteClean.ConsoleScreen_MotivationalQuoteClean_C.ExecuteUbergraph_ConsoleScreen_MotivationalQuoteClean");

	UConsoleScreen_MotivationalQuoteClean_C_ExecuteUbergraph_ConsoleScreen_MotivationalQuoteClean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
