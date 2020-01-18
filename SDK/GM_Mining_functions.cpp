
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

// Function GM_Mining.GM_Mining_C.BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature
// (BlueprintEvent)

void AGM_Mining_C::BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Mining.GM_Mining_C.BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature");

	AGM_Mining_C_BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Mining.GM_Mining_C.DonkeyButtonPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGM_Mining_C::DonkeyButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Mining.GM_Mining_C.DonkeyButtonPressed");

	AGM_Mining_C_DonkeyButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Mining.GM_Mining_C.ExecuteUbergraph_GM_Mining
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_Mining_C::ExecuteUbergraph_GM_Mining(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Mining.GM_Mining_C.ExecuteUbergraph_GM_Mining");

	AGM_Mining_C_ExecuteUbergraph_GM_Mining_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
