
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

// Function Options_ResetProgress.Options_ResetProgress_C.BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptions_ResetProgress_C::BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ResetProgress.Options_ResetProgress_C.BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature");

	UOptions_ResetProgress_C_BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ResetProgress.Options_ResetProgress_C.Answer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ResetProgress_C::Answer(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ResetProgress.Options_ResetProgress_C.Answer");

	UOptions_ResetProgress_C_Answer_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ResetProgress.Options_ResetProgress_C.ExecuteUbergraph_Options_ResetProgress
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ResetProgress_C::ExecuteUbergraph_Options_ResetProgress(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ResetProgress.Options_ResetProgress_C.ExecuteUbergraph_Options_ResetProgress");

	UOptions_ResetProgress_C_ExecuteUbergraph_Options_ResetProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
