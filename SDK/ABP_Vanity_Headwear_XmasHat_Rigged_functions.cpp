
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

// Function ABP_Vanity_Headwear_XmasHat_Rigged.ABP_Vanity_Headwear_XmasHat_Rigged_C.ExecuteUbergraph_ABP_Vanity_Headwear_XmasHat_Rigged
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Vanity_Headwear_XmasHat_Rigged_C::ExecuteUbergraph_ABP_Vanity_Headwear_XmasHat_Rigged(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Vanity_Headwear_XmasHat_Rigged.ABP_Vanity_Headwear_XmasHat_Rigged_C.ExecuteUbergraph_ABP_Vanity_Headwear_XmasHat_Rigged");

	UABP_Vanity_Headwear_XmasHat_Rigged_C_ExecuteUbergraph_ABP_Vanity_Headwear_XmasHat_Rigged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
