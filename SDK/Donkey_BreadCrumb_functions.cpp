
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

// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADonkey_BreadCrumb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ReceiveBeginPlay");

	ADonkey_BreadCrumb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink
// (BlueprintCallable, BlueprintEvent)

void ADonkey_BreadCrumb_C::Blink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink");

	ADonkey_BreadCrumb_C_Blink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ExecuteUbergraph_Donkey_BreadCrumb
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADonkey_BreadCrumb_C::ExecuteUbergraph_Donkey_BreadCrumb(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ExecuteUbergraph_Donkey_BreadCrumb");

	ADonkey_BreadCrumb_C_ExecuteUbergraph_Donkey_BreadCrumb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
