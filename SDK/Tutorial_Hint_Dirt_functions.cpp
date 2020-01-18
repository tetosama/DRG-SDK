
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

// Function Tutorial_Hint_Dirt.Tutorial_Hint_Dirt_C.ReceiveOnHidden
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_Dirt_C::ReceiveOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Dirt.Tutorial_Hint_Dirt_C.ReceiveOnHidden");

	UTutorial_Hint_Dirt_C_ReceiveOnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Dirt.Tutorial_Hint_Dirt_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_Dirt_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Dirt.Tutorial_Hint_Dirt_C.ReceiveOnInitialized");

	UTutorial_Hint_Dirt_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Dirt.Tutorial_Hint_Dirt_C.ExecuteUbergraph_Tutorial_Hint_Dirt
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_Dirt_C::ExecuteUbergraph_Tutorial_Hint_Dirt(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Dirt.Tutorial_Hint_Dirt_C.ExecuteUbergraph_Tutorial_Hint_Dirt");

	UTutorial_Hint_Dirt_C_ExecuteUbergraph_Tutorial_Hint_Dirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
