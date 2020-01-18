
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

// Function Tutorial_Hint_PickAxe.Tutorial_Hint_PickAxe_C.ReceiveOnHidden
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_PickAxe_C::ReceiveOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_PickAxe.Tutorial_Hint_PickAxe_C.ReceiveOnHidden");

	UTutorial_Hint_PickAxe_C_ReceiveOnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_PickAxe.Tutorial_Hint_PickAxe_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_PickAxe_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_PickAxe.Tutorial_Hint_PickAxe_C.ReceiveOnInitialized");

	UTutorial_Hint_PickAxe_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_PickAxe.Tutorial_Hint_PickAxe_C.OnManualMiningEnd
// (BlueprintCallable, BlueprintEvent)

void UTutorial_Hint_PickAxe_C::OnManualMiningEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_PickAxe.Tutorial_Hint_PickAxe_C.OnManualMiningEnd");

	UTutorial_Hint_PickAxe_C_OnManualMiningEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_PickAxe.Tutorial_Hint_PickAxe_C.ExecuteUbergraph_Tutorial_Hint_PickAxe
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_PickAxe_C::ExecuteUbergraph_Tutorial_Hint_PickAxe(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_PickAxe.Tutorial_Hint_PickAxe_C.ExecuteUbergraph_Tutorial_Hint_PickAxe");

	UTutorial_Hint_PickAxe_C_ExecuteUbergraph_Tutorial_Hint_PickAxe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
