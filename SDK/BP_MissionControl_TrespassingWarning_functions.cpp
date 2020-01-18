
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

// Function BP_MissionControl_TrespassingWarning.BP_MissionControl_TrespassingWarning_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionControl_TrespassingWarning_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionControl_TrespassingWarning.BP_MissionControl_TrespassingWarning_C.ReceiveActorBeginOverlap");

	ABP_MissionControl_TrespassingWarning_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionControl_TrespassingWarning.BP_MissionControl_TrespassingWarning_C.ExecuteUbergraph_BP_MissionControl_TrespassingWarning
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionControl_TrespassingWarning_C::ExecuteUbergraph_BP_MissionControl_TrespassingWarning(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionControl_TrespassingWarning.BP_MissionControl_TrespassingWarning_C.ExecuteUbergraph_BP_MissionControl_TrespassingWarning");

	ABP_MissionControl_TrespassingWarning_C_ExecuteUbergraph_BP_MissionControl_TrespassingWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
