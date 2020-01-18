
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

// Function DE_NonStopTalking.DE_NonStopTalking_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_NonStopTalking_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_NonStopTalking.DE_NonStopTalking_C.OnStartEffect");

	UDE_NonStopTalking_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_NonStopTalking.DE_NonStopTalking_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_NonStopTalking_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_NonStopTalking.DE_NonStopTalking_C.OnStopEffect");

	UDE_NonStopTalking_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_NonStopTalking.DE_NonStopTalking_C.ExecuteUbergraph_DE_NonStopTalking
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_NonStopTalking_C::ExecuteUbergraph_DE_NonStopTalking(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_NonStopTalking.DE_NonStopTalking_C.ExecuteUbergraph_DE_NonStopTalking");

	UDE_NonStopTalking_C_ExecuteUbergraph_DE_NonStopTalking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
