
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

// Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_StrongerBarrelKicking_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.OnStartEffect");

	UDE_StrongerBarrelKicking_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_StrongerBarrelKicking_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.OnStopEffect");

	UDE_StrongerBarrelKicking_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.ExecuteUbergraph_DE_StrongerBarrelKicking
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_StrongerBarrelKicking_C::ExecuteUbergraph_DE_StrongerBarrelKicking(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.ExecuteUbergraph_DE_StrongerBarrelKicking");

	UDE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
