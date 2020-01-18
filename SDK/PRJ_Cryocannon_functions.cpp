
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

// Function PRJ_Cryocannon.PRJ_Cryocannon_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APRJ_Cryocannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Cryocannon.PRJ_Cryocannon_C.UserConstructionScript");

	APRJ_Cryocannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Cryocannon.PRJ_Cryocannon_C.OnImpacted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_Cryocannon_C::OnImpacted(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Cryocannon.PRJ_Cryocannon_C.OnImpacted");

	APRJ_Cryocannon_C_OnImpacted_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Cryocannon.PRJ_Cryocannon_C.ExecuteUbergraph_PRJ_Cryocannon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_Cryocannon_C::ExecuteUbergraph_PRJ_Cryocannon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Cryocannon.PRJ_Cryocannon_C.ExecuteUbergraph_PRJ_Cryocannon");

	APRJ_Cryocannon_C_ExecuteUbergraph_PRJ_Cryocannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
