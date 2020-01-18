
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

// Function GM_Tutorial.GM_Tutorial_C.SpawnBosco
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AGM_Tutorial_C::SpawnBosco(struct FTransform* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Tutorial.GM_Tutorial_C.SpawnBosco");

	AGM_Tutorial_C_SpawnBosco_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Tutorial.GM_Tutorial_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGM_Tutorial_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Tutorial.GM_Tutorial_C.ReceiveBeginPlay");

	AGM_Tutorial_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Tutorial.GM_Tutorial_C.ExecuteUbergraph_GM_Tutorial
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_Tutorial_C::ExecuteUbergraph_GM_Tutorial(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Tutorial.GM_Tutorial_C.ExecuteUbergraph_GM_Tutorial");

	AGM_Tutorial_C_ExecuteUbergraph_GM_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
