
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

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.PreConstruct");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CharacterLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::SetData(int* CharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.SetData");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C_SetData_Params params;
	params.CharacterLevel = CharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C_ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
