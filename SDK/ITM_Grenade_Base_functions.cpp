
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

// Function ITM_Grenade_Base.ITM_Grenade_Base_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AITM_Grenade_Base_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Grenade_Base.ITM_Grenade_Base_C.GetGearStatEntry");

	AITM_Grenade_Base_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function ITM_Grenade_Base.ITM_Grenade_Base_C.AddGearStateEntries
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AITM_Grenade_Base_C::AddGearStateEntries(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Grenade_Base.ITM_Grenade_Base_C.AddGearStateEntries");

	AITM_Grenade_Base_C_AddGearStateEntries_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function ITM_Grenade_Base.ITM_Grenade_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AITM_Grenade_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Grenade_Base.ITM_Grenade_Base_C.ReceiveBeginPlay");

	AITM_Grenade_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Grenade_Base.ITM_Grenade_Base_C.OnExploded
// (Event, Protected, BlueprintEvent)

void AITM_Grenade_Base_C::OnExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Grenade_Base.ITM_Grenade_Base_C.OnExploded");

	AITM_Grenade_Base_C_OnExploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Grenade_Base.ITM_Grenade_Base_C.ExecuteUbergraph_ITM_Grenade_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AITM_Grenade_Base_C::ExecuteUbergraph_ITM_Grenade_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Grenade_Base.ITM_Grenade_Base_C.ExecuteUbergraph_ITM_Grenade_Base");

	AITM_Grenade_Base_C_ExecuteUbergraph_ITM_Grenade_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
