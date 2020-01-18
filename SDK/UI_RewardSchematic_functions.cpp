
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

// Function UI_RewardSchematic.UI_RewardSchematic_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RewardSchematic_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardSchematic.UI_RewardSchematic_C.PreConstruct");

	UUI_RewardSchematic_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardSchematic.UI_RewardSchematic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_RewardSchematic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardSchematic.UI_RewardSchematic_C.Construct");

	UUI_RewardSchematic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardSchematic.UI_RewardSchematic_C.PlayReceiveAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_RewardSchematic_C::PlayReceiveAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardSchematic.UI_RewardSchematic_C.PlayReceiveAnim");

	UUI_RewardSchematic_C_PlayReceiveAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardSchematic.UI_RewardSchematic_C.ExecuteUbergraph_UI_RewardSchematic
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RewardSchematic_C::ExecuteUbergraph_UI_RewardSchematic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardSchematic.UI_RewardSchematic_C.ExecuteUbergraph_UI_RewardSchematic");

	UUI_RewardSchematic_C_ExecuteUbergraph_UI_RewardSchematic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
