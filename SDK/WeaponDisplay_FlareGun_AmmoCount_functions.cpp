
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

// Function WeaponDisplay_FlareGun_AmmoCount.WeaponDisplay_FlareGun_AmmoCount_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_FlareGun_AmmoCount_C::SetTotalCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_FlareGun_AmmoCount.WeaponDisplay_FlareGun_AmmoCount_C.SetTotalCount");

	UWeaponDisplay_FlareGun_AmmoCount_C_SetTotalCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_FlareGun_AmmoCount.WeaponDisplay_FlareGun_AmmoCount_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_FlareGun_AmmoCount_C::SetClipCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_FlareGun_AmmoCount.WeaponDisplay_FlareGun_AmmoCount_C.SetClipCount");

	UWeaponDisplay_FlareGun_AmmoCount_C_SetClipCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_FlareGun_AmmoCount.WeaponDisplay_FlareGun_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_FlareGun_AmmoCount
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_FlareGun_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_FlareGun_AmmoCount(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_FlareGun_AmmoCount.WeaponDisplay_FlareGun_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_FlareGun_AmmoCount");

	UWeaponDisplay_FlareGun_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_FlareGun_AmmoCount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
