
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

// Function ABP_EventRewardFrame.ABP_EventRewardFrame_C.ExecuteUbergraph_ABP_EventRewardFrame
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_EventRewardFrame_C::ExecuteUbergraph_ABP_EventRewardFrame(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_EventRewardFrame.ABP_EventRewardFrame_C.ExecuteUbergraph_ABP_EventRewardFrame");

	UABP_EventRewardFrame_C_ExecuteUbergraph_ABP_EventRewardFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
