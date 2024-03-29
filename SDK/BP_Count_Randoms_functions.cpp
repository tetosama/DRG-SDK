
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

// Function BP_Count_Randoms.BP_Count_Randoms_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Count_Randoms_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Count_Randoms.BP_Count_Randoms_C.ReceiveTick");

	ABP_Count_Randoms_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Count_Randoms.BP_Count_Randoms_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Count_Randoms_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Count_Randoms.BP_Count_Randoms_C.ReceiveBeginPlay");

	ABP_Count_Randoms_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Count_Randoms.BP_Count_Randoms_C.ExecuteUbergraph_BP_Count_Randoms
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Count_Randoms_C::ExecuteUbergraph_BP_Count_Randoms(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Count_Randoms.BP_Count_Randoms_C.ExecuteUbergraph_BP_Count_Randoms");

	ABP_Count_Randoms_C_ExecuteUbergraph_BP_Count_Randoms_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
