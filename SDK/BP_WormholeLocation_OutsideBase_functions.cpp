
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

// Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.OnPlayerEnterLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WormholeLocation_OutsideBase_C::OnPlayerEnterLocation(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.OnPlayerEnterLocation");

	ABP_WormholeLocation_OutsideBase_C_OnPlayerEnterLocation_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.OnPlayerLeaveLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WormholeLocation_OutsideBase_C::OnPlayerLeaveLocation(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.OnPlayerLeaveLocation");

	ABP_WormholeLocation_OutsideBase_C_OnPlayerLeaveLocation_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.ExecuteUbergraph_BP_WormholeLocation_OutsideBase
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WormholeLocation_OutsideBase_C::ExecuteUbergraph_BP_WormholeLocation_OutsideBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.ExecuteUbergraph_BP_WormholeLocation_OutsideBase");

	ABP_WormholeLocation_OutsideBase_C_ExecuteUbergraph_BP_WormholeLocation_OutsideBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
