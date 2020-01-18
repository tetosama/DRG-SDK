
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

// Function BP_ResupplierLogic.BP_ResupplierLogic_C.GetAdditionalText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ResupplierLogic_C::GetAdditionalText(int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ResupplierLogic.BP_ResupplierLogic_C.GetAdditionalText");

	UBP_ResupplierLogic_C_GetAdditionalText_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ResupplierLogic.BP_ResupplierLogic_C.StartLogic
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ResupplierLogic_C::StartLogic(int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ResupplierLogic.BP_ResupplierLogic_C.StartLogic");

	UBP_ResupplierLogic_C_StartLogic_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ResupplierLogic.BP_ResupplierLogic_C.OnResupplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ResupplierLogic_C::OnResupplied(float* percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ResupplierLogic.BP_ResupplierLogic_C.OnResupplied");

	UBP_ResupplierLogic_C_OnResupplied_Params params;
	params.percentage = percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ResupplierLogic.BP_ResupplierLogic_C.Client_InstantlyReload
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_ResupplierLogic_C::Client_InstantlyReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ResupplierLogic.BP_ResupplierLogic_C.Client_InstantlyReload");

	UBP_ResupplierLogic_C_Client_InstantlyReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ResupplierLogic.BP_ResupplierLogic_C.ExecuteUbergraph_BP_ResupplierLogic
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ResupplierLogic_C::ExecuteUbergraph_BP_ResupplierLogic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ResupplierLogic.BP_ResupplierLogic_C.ExecuteUbergraph_BP_ResupplierLogic");

	UBP_ResupplierLogic_C_ExecuteUbergraph_BP_ResupplierLogic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
