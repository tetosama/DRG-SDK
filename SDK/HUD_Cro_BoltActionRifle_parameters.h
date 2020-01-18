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

// Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.OnDamagedEnemy_Event
struct UHUD_Cro_BoltActionRifle_C_OnDamagedEnemy_Event_Params
{
	TScriptInterface<class UHealth>*                   EnemyHealth;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageModifier;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HealthRemaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.Construct
struct UHUD_Cro_BoltActionRifle_C_Construct_Params
{
};

// Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.OnSpreadChanged
struct UHUD_Cro_BoltActionRifle_C_OnSpreadChanged_Params
{
	float*                                             HorizontalSpread;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             VerticalSpread;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isAtRest;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.SetData
struct UHUD_Cro_BoltActionRifle_C_SetData_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.PreConstruct
struct UHUD_Cro_BoltActionRifle_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.ExecuteUbergraph_HUD_Cro_BoltActionRifle
struct UHUD_Cro_BoltActionRifle_C_ExecuteUbergraph_HUD_Cro_BoltActionRifle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif