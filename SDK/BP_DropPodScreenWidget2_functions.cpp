
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

// Function BP_DropPodScreenWidget2.BP_DropPodScreenWidget2_C.AdjustBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget2_C::AdjustBar(float* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget2.BP_DropPodScreenWidget2_C.AdjustBar");

	UBP_DropPodScreenWidget2_C_AdjustBar_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget2.BP_DropPodScreenWidget2_C.SetGeneratedMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      In_Mission                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget2_C::SetGeneratedMission(class UGeneratedMission** In_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget2.BP_DropPodScreenWidget2_C.SetGeneratedMission");

	UBP_DropPodScreenWidget2_C_SetGeneratedMission_Params params;
	params.In_Mission = In_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget2.BP_DropPodScreenWidget2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_DropPodScreenWidget2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget2.BP_DropPodScreenWidget2_C.Construct");

	UBP_DropPodScreenWidget2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget2.BP_DropPodScreenWidget2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget2.BP_DropPodScreenWidget2_C.Tick");

	UBP_DropPodScreenWidget2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget2.BP_DropPodScreenWidget2_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget2_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget2.BP_DropPodScreenWidget2_C.OnGeneratedMissionChanged");

	UBP_DropPodScreenWidget2_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget2.BP_DropPodScreenWidget2_C.ExecuteUbergraph_BP_DropPodScreenWidget2
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget2_C::ExecuteUbergraph_BP_DropPodScreenWidget2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget2.BP_DropPodScreenWidget2_C.ExecuteUbergraph_BP_DropPodScreenWidget2");

	UBP_DropPodScreenWidget2_C_ExecuteUbergraph_BP_DropPodScreenWidget2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
