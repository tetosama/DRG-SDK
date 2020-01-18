
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

// Function BP_QuickRecoveryLogic.BP_QuickRecoveryLogic_C.GetAdditionalText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_QuickRecoveryLogic_C::GetAdditionalText(int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickRecoveryLogic.BP_QuickRecoveryLogic_C.GetAdditionalText");

	UBP_QuickRecoveryLogic_C_GetAdditionalText_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_QuickRecoveryLogic.BP_QuickRecoveryLogic_C.StartLogic
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QuickRecoveryLogic_C::StartLogic(int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickRecoveryLogic.BP_QuickRecoveryLogic_C.StartLogic");

	UBP_QuickRecoveryLogic_C_StartLogic_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickRecoveryLogic.BP_QuickRecoveryLogic_C.RevivedOther
// (BlueprintCallable, BlueprintEvent)

void UBP_QuickRecoveryLogic_C::RevivedOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickRecoveryLogic.BP_QuickRecoveryLogic_C.RevivedOther");

	UBP_QuickRecoveryLogic_C_RevivedOther_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickRecoveryLogic.BP_QuickRecoveryLogic_C.PlayFleeEffect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_QuickRecoveryLogic_C::PlayFleeEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickRecoveryLogic.BP_QuickRecoveryLogic_C.PlayFleeEffect");

	UBP_QuickRecoveryLogic_C_PlayFleeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickRecoveryLogic.BP_QuickRecoveryLogic_C.ExecuteUbergraph_BP_QuickRecoveryLogic
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QuickRecoveryLogic_C::ExecuteUbergraph_BP_QuickRecoveryLogic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickRecoveryLogic.BP_QuickRecoveryLogic_C.ExecuteUbergraph_BP_QuickRecoveryLogic");

	UBP_QuickRecoveryLogic_C_ExecuteUbergraph_BP_QuickRecoveryLogic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
