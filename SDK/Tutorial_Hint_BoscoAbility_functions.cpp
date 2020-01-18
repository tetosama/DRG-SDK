
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

// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ReceiveOnHidden
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_BoscoAbility_C::ReceiveOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ReceiveOnHidden");

	UTutorial_Hint_BoscoAbility_C_ReceiveOnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnLaserPointerPressed
// (BlueprintCallable, BlueprintEvent)

void UTutorial_Hint_BoscoAbility_C::OnLaserPointerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnLaserPointerPressed");

	UTutorial_Hint_BoscoAbility_C_OnLaserPointerPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnLaserPointerReleased
// (BlueprintCallable, BlueprintEvent)

void UTutorial_Hint_BoscoAbility_C::OnLaserPointerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnLaserPointerReleased");

	UTutorial_Hint_BoscoAbility_C_OnLaserPointerReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_BoscoAbility_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ReceiveOnInitialized");

	UTutorial_Hint_BoscoAbility_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.Mark Ready If
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_BoscoAbility_C::Mark_Ready_If(bool* Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.Mark Ready If");

	UTutorial_Hint_BoscoAbility_C_Mark_Ready_If_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnBoscoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABosco**                 Bosco                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_BoscoAbility_C::OnBoscoChanged(class ABosco** Bosco)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnBoscoChanged");

	UTutorial_Hint_BoscoAbility_C_OnBoscoChanged_Params params;
	params.Bosco = Bosco;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ExecuteUbergraph_Tutorial_Hint_BoscoAbility
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_BoscoAbility_C::ExecuteUbergraph_Tutorial_Hint_BoscoAbility(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ExecuteUbergraph_Tutorial_Hint_BoscoAbility");

	UTutorial_Hint_BoscoAbility_C_ExecuteUbergraph_Tutorial_Hint_BoscoAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
