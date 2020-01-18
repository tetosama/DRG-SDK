
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

// Function ABP_Vanity_Headwear_HelmetDragon.ABP_Vanity_Headwear_HelmetDragon_C.ExecuteUbergraph_ABP_Vanity_Headwear_HelmetDragon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Vanity_Headwear_HelmetDragon_C::ExecuteUbergraph_ABP_Vanity_Headwear_HelmetDragon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Vanity_Headwear_HelmetDragon.ABP_Vanity_Headwear_HelmetDragon_C.ExecuteUbergraph_ABP_Vanity_Headwear_HelmetDragon");

	UABP_Vanity_Headwear_HelmetDragon_C_ExecuteUbergraph_ABP_Vanity_Headwear_HelmetDragon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
