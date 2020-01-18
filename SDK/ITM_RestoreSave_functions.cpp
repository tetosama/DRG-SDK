
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

// Function ITM_RestoreSave.ITM_RestoreSave_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_RestoreSave_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.Construct");

	UITM_RestoreSave_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_RestoreSave_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.Tick");

	UITM_RestoreSave_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.HideUIDelayed
// (BlueprintCallable, BlueprintEvent)

void UITM_RestoreSave_C::HideUIDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.HideUIDelayed");

	UITM_RestoreSave_C_HideUIDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.ShowWindow
// (BlueprintCallable, BlueprintEvent)

void UITM_RestoreSave_C::ShowWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.ShowWindow");

	UITM_RestoreSave_C_ShowWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_RestoreSave_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	UITM_RestoreSave_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_RestoreSave_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature");

	UITM_RestoreSave_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.ExecuteUbergraph_ITM_RestoreSave
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_RestoreSave_C::ExecuteUbergraph_ITM_RestoreSave(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.ExecuteUbergraph_ITM_RestoreSave");

	UITM_RestoreSave_C_ExecuteUbergraph_ITM_RestoreSave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.ImageReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UITM_RestoreSave_C::ImageReady__DelegateSignature(struct FString* URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.ImageReady__DelegateSignature");

	UITM_RestoreSave_C_ImageReady__DelegateSignature_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
