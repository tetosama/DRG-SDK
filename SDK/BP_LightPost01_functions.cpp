
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

// Function BP_LightPost01.BP_LightPost01_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LightPost01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightPost01.BP_LightPost01_C.UserConstructionScript");

	ABP_LightPost01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightPost01.BP_LightPost01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LightPost01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightPost01.BP_LightPost01_C.ReceiveBeginPlay");

	ABP_LightPost01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightPost01.BP_LightPost01_C.ExecuteUbergraph_BP_LightPost01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightPost01_C::ExecuteUbergraph_BP_LightPost01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightPost01.BP_LightPost01_C.ExecuteUbergraph_BP_LightPost01");

	ABP_LightPost01_C_ExecuteUbergraph_BP_LightPost01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
