
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

// Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.OnResourceFull
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_Deposite_C::OnResourceFull(class UCappedResource** Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.OnResourceFull");

	UTutorial_Hint_Deposite_C_OnResourceFull_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.OnResourceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_Deposite_C::OnResourceChanged(class UCappedResource** Resource, float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.OnResourceChanged");

	UTutorial_Hint_Deposite_C_OnResourceChanged_Params params;
	params.Resource = Resource;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.OnCallDonkey
// (BlueprintCallable, BlueprintEvent)

void UTutorial_Hint_Deposite_C::OnCallDonkey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.OnCallDonkey");

	UTutorial_Hint_Deposite_C_OnCallDonkey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_Deposite_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.ReceiveOnInitialized");

	UTutorial_Hint_Deposite_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.ExecuteUbergraph_Tutorial_Hint_Deposite
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_Deposite_C::ExecuteUbergraph_Tutorial_Hint_Deposite(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.ExecuteUbergraph_Tutorial_Hint_Deposite");

	UTutorial_Hint_Deposite_C_ExecuteUbergraph_Tutorial_Hint_Deposite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
