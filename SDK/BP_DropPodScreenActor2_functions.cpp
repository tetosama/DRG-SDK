
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

// Function BP_DropPodScreenActor2.BP_DropPodScreenActor2_C.TriggerCountdown
// (BlueprintCallable, BlueprintEvent)

void ABP_DropPodScreenActor2_C::TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenActor2.BP_DropPodScreenActor2_C.TriggerCountdown");

	ABP_DropPodScreenActor2_C_TriggerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenActor2.BP_DropPodScreenActor2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPodScreenActor2_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenActor2.BP_DropPodScreenActor2_C.ReceiveTick");

	ABP_DropPodScreenActor2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenActor2.BP_DropPodScreenActor2_C.ExecuteUbergraph_BP_DropPodScreenActor2
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPodScreenActor2_C::ExecuteUbergraph_BP_DropPodScreenActor2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenActor2.BP_DropPodScreenActor2_C.ExecuteUbergraph_BP_DropPodScreenActor2");

	ABP_DropPodScreenActor2_C_ExecuteUbergraph_BP_DropPodScreenActor2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
