
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

// Function ABP_SMG_A.ABP_SMG_A_C.ExecuteUbergraph_ABP_SMG_A
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_SMG_A_C::ExecuteUbergraph_ABP_SMG_A(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_SMG_A.ABP_SMG_A_C.ExecuteUbergraph_ABP_SMG_A");

	UABP_SMG_A_C_ExecuteUbergraph_ABP_SMG_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
