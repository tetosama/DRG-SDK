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

// Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.OnSpreadChanged
struct UHUD_CroNewGrenadeLauncher_C_OnSpreadChanged_Params
{
	float*                                             HorizontalSpread;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             VerticalSpread;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isAtRest;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.SetData
struct UHUD_CroNewGrenadeLauncher_C_SetData_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.Construct
struct UHUD_CroNewGrenadeLauncher_C_Construct_Params
{
};

// Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.PreConstruct
struct UHUD_CroNewGrenadeLauncher_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.OnDamagedEnemy_Event
struct UHUD_CroNewGrenadeLauncher_C_OnDamagedEnemy_Event_Params
{
	TScriptInterface<class UHealth>*                   EnemyHealth;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageModifier;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HealthRemaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.ExecuteUbergraph_HUD_CroNewGrenadeLauncher
struct UHUD_CroNewGrenadeLauncher_C_ExecuteUbergraph_HUD_CroNewGrenadeLauncher_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
