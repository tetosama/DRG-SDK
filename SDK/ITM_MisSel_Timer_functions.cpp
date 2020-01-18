
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

// Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_MisSel_Timer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.Construct");

	UITM_MisSel_Timer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.UpdateTime
// (BlueprintCallable, BlueprintEvent)

void UITM_MisSel_Timer_C::UpdateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.UpdateTime");

	UITM_MisSel_Timer_C_UpdateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.ExecuteUbergraph_ITM_MisSel_Timer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_Timer_C::ExecuteUbergraph_ITM_MisSel_Timer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.ExecuteUbergraph_ITM_MisSel_Timer");

	UITM_MisSel_Timer_C_ExecuteUbergraph_ITM_MisSel_Timer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
