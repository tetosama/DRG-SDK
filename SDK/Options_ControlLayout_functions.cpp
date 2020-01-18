
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

// Function Options_ControlLayout.Options_ControlLayout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_ControlLayout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ControlLayout.Options_ControlLayout_C.Construct");

	UOptions_ControlLayout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ControlLayout.Options_ControlLayout_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptions_ControlLayout_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ControlLayout.Options_ControlLayout_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UOptions_ControlLayout_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ControlLayout.Options_ControlLayout_C.OnInputSourceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputSource*                  InputSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ControlLayout_C::OnInputSourceChanged(EInputSource* InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ControlLayout.Options_ControlLayout_C.OnInputSourceChanged");

	UOptions_ControlLayout_C_OnInputSourceChanged_Params params;
	params.InputSource = InputSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ControlLayout.Options_ControlLayout_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptions_ControlLayout_C::BndEvt__BTN_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ControlLayout.Options_ControlLayout_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UOptions_ControlLayout_C_BndEvt__BTN_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ControlLayout.Options_ControlLayout_C.ExecuteUbergraph_Options_ControlLayout
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ControlLayout_C::ExecuteUbergraph_Options_ControlLayout(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ControlLayout.Options_ControlLayout_C.ExecuteUbergraph_Options_ControlLayout");

	UOptions_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ControlLayout.Options_ControlLayout_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptions_ControlLayout_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ControlLayout.Options_ControlLayout_C.OnClose__DelegateSignature");

	UOptions_ControlLayout_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
