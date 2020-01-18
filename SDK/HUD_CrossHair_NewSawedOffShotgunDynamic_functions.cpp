
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

// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.PreConstruct");

	UHUD_CrossHair_NewSawedOffShotgunDynamic_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmmoDrivenWeapon**      Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::SetData(class AAmmoDrivenWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.SetData");

	UHUD_CrossHair_NewSawedOffShotgunDynamic_C_SetData_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnClipCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::OnClipCountChanged(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnClipCountChanged");

	UHUD_CrossHair_NewSawedOffShotgunDynamic_C_OnClipCountChanged_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.Construct");

	UHUD_CrossHair_NewSawedOffShotgunDynamic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnDamagedEnemy_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UHealth>* EnemyHealth                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageModifier                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HealthRemaining                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::OnDamagedEnemy_Event(TScriptInterface<class UHealth>* EnemyHealth, float* Damage, float* DamageModifier, float* HealthRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnDamagedEnemy_Event");

	UHUD_CrossHair_NewSawedOffShotgunDynamic_C_OnDamagedEnemy_Event_Params params;
	params.EnemyHealth = EnemyHealth;
	params.Damage = Damage;
	params.DamageModifier = DamageModifier;
	params.HealthRemaining = HealthRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnSpreadChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HorizontalSpread               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         VerticalSpread                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isAtRest                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::OnSpreadChanged(float* HorizontalSpread, float* VerticalSpread, bool* isAtRest)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnSpreadChanged");

	UHUD_CrossHair_NewSawedOffShotgunDynamic_C_OnSpreadChanged_Params params;
	params.HorizontalSpread = HorizontalSpread;
	params.VerticalSpread = VerticalSpread;
	params.isAtRest = isAtRest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic");

	UHUD_CrossHair_NewSawedOffShotgunDynamic_C_ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
