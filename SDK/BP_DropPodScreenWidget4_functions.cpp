
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

// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.SetGeneratedMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      In_Mission                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget4_C::SetGeneratedMission(class UGeneratedMission** In_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.SetGeneratedMission");

	UBP_DropPodScreenWidget4_C_SetGeneratedMission_Params params;
	params.In_Mission = In_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_DropPodScreenWidget4_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.Construct");

	UBP_DropPodScreenWidget4_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget4_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.OnGeneratedMissionChanged");

	UBP_DropPodScreenWidget4_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.OnDifficultyChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDifficultySetting**     Setting                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget4_C::OnDifficultyChanged_Event_1(class UDifficultySetting** Setting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.OnDifficultyChanged_Event_1");

	UBP_DropPodScreenWidget4_C_OnDifficultyChanged_Event_1_Params params;
	params.Setting = Setting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.ExecuteUbergraph_BP_DropPodScreenWidget4
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget4_C::ExecuteUbergraph_BP_DropPodScreenWidget4(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.ExecuteUbergraph_BP_DropPodScreenWidget4");

	UBP_DropPodScreenWidget4_C_ExecuteUbergraph_BP_DropPodScreenWidget4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
