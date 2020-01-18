
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

// Function ABP_FuelCell.ABP_FuelCell_C.SetBuildProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_FuelCell_C::SetBuildProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FuelCell.ABP_FuelCell_C.SetBuildProgress");

	UABP_FuelCell_C_SetBuildProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_FuelCell.ABP_FuelCell_C.SetDefendProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_FuelCell_C::SetDefendProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FuelCell.ABP_FuelCell_C.SetDefendProgress");

	UABP_FuelCell_C_SetDefendProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_FuelCell.ABP_FuelCell_C.ExecuteUbergraph_ABP_FuelCell
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_FuelCell_C::ExecuteUbergraph_ABP_FuelCell(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FuelCell.ABP_FuelCell_C.ExecuteUbergraph_ABP_FuelCell");

	UABP_FuelCell_C_ExecuteUbergraph_ABP_FuelCell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
