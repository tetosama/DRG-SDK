
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

// Function ABP_CryoSpray.ABP_CryoSpray_C.ExecuteUbergraph_ABP_CryoSpray
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_CryoSpray_C::ExecuteUbergraph_ABP_CryoSpray(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_CryoSpray.ABP_CryoSpray_C.ExecuteUbergraph_ABP_CryoSpray");

	UABP_CryoSpray_C_ExecuteUbergraph_ABP_CryoSpray_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
