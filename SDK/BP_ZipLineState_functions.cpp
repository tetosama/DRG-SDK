
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

// Function BP_ZipLineState.BP_ZipLineState_C.GetJumpVector
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                LookVector                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                CurrentVelocity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UBP_ZipLineState_C::GetJumpVector(struct FVector* LookVector, struct FVector* CurrentVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineState.BP_ZipLineState_C.GetJumpVector");

	UBP_ZipLineState_C_GetJumpVector_Params params;
	params.LookVector = LookVector;
	params.CurrentVelocity = CurrentVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
