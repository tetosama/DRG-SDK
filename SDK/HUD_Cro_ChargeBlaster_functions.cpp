
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

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Cro_ChargeBlaster_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.Construct");

	UHUD_Cro_ChargeBlaster_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.SetData
// (Event, Public, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Cro_ChargeBlaster_C::SetData(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.SetData");

	UHUD_Cro_ChargeBlaster_C_SetData_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.OnSpreadChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HorizontalSpread               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         VerticalSpread                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isAtRest                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Cro_ChargeBlaster_C::OnSpreadChanged(float* HorizontalSpread, float* VerticalSpread, bool* isAtRest)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.OnSpreadChanged");

	UHUD_Cro_ChargeBlaster_C_OnSpreadChanged_Params params;
	params.HorizontalSpread = HorizontalSpread;
	params.VerticalSpread = VerticalSpread;
	params.isAtRest = isAtRest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Cro_ChargeBlaster_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.PreConstruct");

	UHUD_Cro_ChargeBlaster_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.OnDamagedEnemy_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UHealth>* EnemyHealth                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageModifier                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HealthRemaining                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Cro_ChargeBlaster_C::OnDamagedEnemy_Event(TScriptInterface<class UHealth>* EnemyHealth, float* Damage, float* DamageModifier, float* HealthRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.OnDamagedEnemy_Event");

	UHUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event_Params params;
	params.EnemyHealth = EnemyHealth;
	params.Damage = Damage;
	params.DamageModifier = DamageModifier;
	params.HealthRemaining = HealthRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.OnChargeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         charge                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Cro_ChargeBlaster_C::OnChargeChanged(float* charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.OnChargeChanged");

	UHUD_Cro_ChargeBlaster_C_OnChargeChanged_Params params;
	params.charge = charge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.ExecuteUbergraph_HUD_Cro_ChargeBlaster
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Cro_ChargeBlaster_C::ExecuteUbergraph_HUD_Cro_ChargeBlaster(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.ExecuteUbergraph_HUD_Cro_ChargeBlaster");

	UHUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
