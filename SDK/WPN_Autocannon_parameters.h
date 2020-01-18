#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WPN_Autocannon.WPN_Autocannon_C.GetGearStatEntry
struct AWPN_Autocannon_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_Autocannon.WPN_Autocannon_C.UserConstructionScript
struct AWPN_Autocannon_C_UserConstructionScript_Params
{
};

// Function WPN_Autocannon.WPN_Autocannon_C.ShowCurentFireTime
struct AWPN_Autocannon_C_ShowCurentFireTime_Params
{
};

// Function WPN_Autocannon.WPN_Autocannon_C.ReceiveBeginPlay
struct AWPN_Autocannon_C_ReceiveBeginPlay_Params
{
};

// Function WPN_Autocannon.WPN_Autocannon_C.RecieveUnequipped
struct AWPN_Autocannon_C_RecieveUnequipped_Params
{
};

// Function WPN_Autocannon.WPN_Autocannon_C.RecieveEquipped
struct AWPN_Autocannon_C_RecieveEquipped_Params
{
};

// Function WPN_Autocannon.WPN_Autocannon_C.Receive_IsFiringChanged
struct AWPN_Autocannon_C_Receive_IsFiringChanged_Params
{
	bool*                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_Autocannon.WPN_Autocannon_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
struct AWPN_Autocannon_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params
{
};

// Function WPN_Autocannon.WPN_Autocannon_C.RecieveFiredWeapon
struct AWPN_Autocannon_C_RecieveFiredWeapon_Params
{
};

// Function WPN_Autocannon.WPN_Autocannon_C.ExecuteUbergraph_WPN_Autocannon
struct AWPN_Autocannon_C_ExecuteUbergraph_WPN_Autocannon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
