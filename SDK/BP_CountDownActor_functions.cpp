
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

// Function BP_CountDownActor.BP_CountDownActor_C.TriggerCountdown
// (BlueprintCallable, BlueprintEvent)

void ABP_CountDownActor_C::TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownActor.BP_CountDownActor_C.TriggerCountdown");

	ABP_CountDownActor_C_TriggerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CountDownActor.BP_CountDownActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CountDownActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownActor.BP_CountDownActor_C.ReceiveTick");

	ABP_CountDownActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CountDownActor.BP_CountDownActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CountDownActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownActor.BP_CountDownActor_C.ReceiveBeginPlay");

	ABP_CountDownActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CountDownActor.BP_CountDownActor_C.OnMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CountDownActor_C::OnMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownActor.BP_CountDownActor_C.OnMissionChanged");

	ABP_CountDownActor_C_OnMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CountDownActor.BP_CountDownActor_C.ExecuteUbergraph_BP_CountDownActor
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CountDownActor_C::ExecuteUbergraph_BP_CountDownActor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownActor.BP_CountDownActor_C.ExecuteUbergraph_BP_CountDownActor");

	ABP_CountDownActor_C_ExecuteUbergraph_BP_CountDownActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
