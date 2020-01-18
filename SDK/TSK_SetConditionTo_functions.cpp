
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

// Function TSK_SetConditionTo.TSK_SetConditionTo_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_SetConditionTo_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_SetConditionTo.TSK_SetConditionTo_C.ReceiveExecute");

	UTSK_SetConditionTo_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_SetConditionTo.TSK_SetConditionTo_C.ExecuteUbergraph_TSK_SetConditionTo
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_SetConditionTo_C::ExecuteUbergraph_TSK_SetConditionTo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_SetConditionTo.TSK_SetConditionTo_C.ExecuteUbergraph_TSK_SetConditionTo");

	UTSK_SetConditionTo_C_ExecuteUbergraph_TSK_SetConditionTo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
