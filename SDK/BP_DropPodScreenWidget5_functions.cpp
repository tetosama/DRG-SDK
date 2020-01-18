
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

// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.GetNewOperation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DropPodScreenWidget5_C::GetNewOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.GetNewOperation");

	UBP_DropPodScreenWidget5_C_GetNewOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.DoOperation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_DropPodScreenWidget5_C::DoOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.DoOperation");

	UBP_DropPodScreenWidget5_C_DoOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_DropPodScreenWidget5_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.Construct");

	UBP_DropPodScreenWidget5_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget5_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.PreConstruct");

	UBP_DropPodScreenWidget5_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget5_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.Tick");

	UBP_DropPodScreenWidget5_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget5_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.OnGeneratedMissionChanged");

	UBP_DropPodScreenWidget5_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.ExecuteUbergraph_BP_DropPodScreenWidget5
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenWidget5_C::ExecuteUbergraph_BP_DropPodScreenWidget5(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.ExecuteUbergraph_BP_DropPodScreenWidget5");

	UBP_DropPodScreenWidget5_C_ExecuteUbergraph_BP_DropPodScreenWidget5_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
