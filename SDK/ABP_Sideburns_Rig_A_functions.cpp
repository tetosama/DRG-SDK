
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

// Function ABP_Sideburns_Rig_A.ABP_Sideburns_Rig_A_C.ExecuteUbergraph_ABP_Sideburns_Rig_A
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Sideburns_Rig_A_C::ExecuteUbergraph_ABP_Sideburns_Rig_A(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Sideburns_Rig_A.ABP_Sideburns_Rig_A_C.ExecuteUbergraph_ABP_Sideburns_Rig_A");

	UABP_Sideburns_Rig_A_C_ExecuteUbergraph_ABP_Sideburns_Rig_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
