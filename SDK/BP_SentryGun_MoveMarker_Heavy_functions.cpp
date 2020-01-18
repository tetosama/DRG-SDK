
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

// Function BP_SentryGun_MoveMarker_Heavy.BP_SentryGun_MoveMarker_Heavy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_MoveMarker_Heavy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_MoveMarker_Heavy.BP_SentryGun_MoveMarker_Heavy_C.UserConstructionScript");

	ABP_SentryGun_MoveMarker_Heavy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_MoveMarker_Heavy.BP_SentryGun_MoveMarker_Heavy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_MoveMarker_Heavy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_MoveMarker_Heavy.BP_SentryGun_MoveMarker_Heavy_C.ReceiveBeginPlay");

	ABP_SentryGun_MoveMarker_Heavy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_MoveMarker_Heavy.BP_SentryGun_MoveMarker_Heavy_C.ExecuteUbergraph_BP_SentryGun_MoveMarker_Heavy
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_MoveMarker_Heavy_C::ExecuteUbergraph_BP_SentryGun_MoveMarker_Heavy(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_MoveMarker_Heavy.BP_SentryGun_MoveMarker_Heavy_C.ExecuteUbergraph_BP_SentryGun_MoveMarker_Heavy");

	ABP_SentryGun_MoveMarker_Heavy_C_ExecuteUbergraph_BP_SentryGun_MoveMarker_Heavy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
