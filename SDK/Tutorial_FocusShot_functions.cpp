
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

// Function Tutorial_FocusShot.Tutorial_FocusShot_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_FocusShot_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_FocusShot.Tutorial_FocusShot_C.ReceiveOnInitialized");

	UTutorial_FocusShot_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_FocusShot.Tutorial_FocusShot_C.OnItemEquipped_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_FocusShot_C::OnItemEquipped_Event(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_FocusShot.Tutorial_FocusShot_C.OnItemEquipped_Event");

	UTutorial_FocusShot_C_OnItemEquipped_Event_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_FocusShot.Tutorial_FocusShot_C.FullyFocusedEvent_Event
// (BlueprintCallable, BlueprintEvent)

void UTutorial_FocusShot_C::FullyFocusedEvent_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_FocusShot.Tutorial_FocusShot_C.FullyFocusedEvent_Event");

	UTutorial_FocusShot_C_FullyFocusedEvent_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_FocusShot.Tutorial_FocusShot_C.ExecuteUbergraph_Tutorial_FocusShot
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_FocusShot_C::ExecuteUbergraph_Tutorial_FocusShot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_FocusShot.Tutorial_FocusShot_C.ExecuteUbergraph_Tutorial_FocusShot");

	UTutorial_FocusShot_C_ExecuteUbergraph_Tutorial_FocusShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
