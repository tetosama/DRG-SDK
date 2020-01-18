
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

// Function ASI_Maggot.ASI_Maggot_C.ExecuteUbergraph_ASI_Maggot
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASI_Maggot_C::ExecuteUbergraph_ASI_Maggot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASI_Maggot.ASI_Maggot_C.ExecuteUbergraph_ASI_Maggot");

	UASI_Maggot_C_ExecuteUbergraph_ASI_Maggot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
