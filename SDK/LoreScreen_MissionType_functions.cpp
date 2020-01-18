
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

// Function LoreScreen_MissionType.LoreScreen_MissionType_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoreScreen_MissionType_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.Construct");

	ULoreScreen_MissionType_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_MissionType.LoreScreen_MissionType_C.ExecuteUbergraph_LoreScreen_MissionType
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_MissionType_C::ExecuteUbergraph_LoreScreen_MissionType(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.ExecuteUbergraph_LoreScreen_MissionType");

	ULoreScreen_MissionType_C_ExecuteUbergraph_LoreScreen_MissionType_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
