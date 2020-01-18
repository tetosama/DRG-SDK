
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

// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnHidden
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_LaserPointer_C::ReceiveOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnHidden");

	UTutorial_Hint_LaserPointer_C_ReceiveOnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerPressed
// (BlueprintCallable, BlueprintEvent)

void UTutorial_Hint_LaserPointer_C::OnLaserPointerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerPressed");

	UTutorial_Hint_LaserPointer_C_OnLaserPointerPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerReleased
// (BlueprintCallable, BlueprintEvent)

void UTutorial_Hint_LaserPointer_C::OnLaserPointerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerReleased");

	UTutorial_Hint_LaserPointer_C_OnLaserPointerReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ELaserPointerTargetType*       TargetType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 ExtraActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_LaserPointer_C::OnLaserPointerEvent(class AActor** Target, ELaserPointerTargetType* TargetType, struct FVector* Location, class AActor** ExtraActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerEvent");

	UTutorial_Hint_LaserPointer_C_OnLaserPointerEvent_Params params;
	params.Target = Target;
	params.TargetType = TargetType;
	params.Location = Location;
	params.ExtraActor = ExtraActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_LaserPointer_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnInitialized");

	UTutorial_Hint_LaserPointer_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ExecuteUbergraph_Tutorial_Hint_LaserPointer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_LaserPointer_C::ExecuteUbergraph_Tutorial_Hint_LaserPointer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ExecuteUbergraph_Tutorial_Hint_LaserPointer");

	UTutorial_Hint_LaserPointer_C_ExecuteUbergraph_Tutorial_Hint_LaserPointer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
