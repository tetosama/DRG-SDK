
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

// Function BP_TutorialConsole.BP_TutorialConsole_C.OnFailure_5EEE1A8C47D19E84703E51BE96E53B4F
// (BlueprintCallable, BlueprintEvent)

void ABP_TutorialConsole_C::OnFailure_5EEE1A8C47D19E84703E51BE96E53B4F()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialConsole.BP_TutorialConsole_C.OnFailure_5EEE1A8C47D19E84703E51BE96E53B4F");

	ABP_TutorialConsole_C_OnFailure_5EEE1A8C47D19E84703E51BE96E53B4F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TutorialConsole.BP_TutorialConsole_C.OnSuccess_5EEE1A8C47D19E84703E51BE96E53B4F
// (BlueprintCallable, BlueprintEvent)

void ABP_TutorialConsole_C::OnSuccess_5EEE1A8C47D19E84703E51BE96E53B4F()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialConsole.BP_TutorialConsole_C.OnSuccess_5EEE1A8C47D19E84703E51BE96E53B4F");

	ABP_TutorialConsole_C_OnSuccess_5EEE1A8C47D19E84703E51BE96E53B4F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TutorialConsole.BP_TutorialConsole_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TutorialConsole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialConsole.BP_TutorialConsole_C.ReceiveBeginPlay");

	ABP_TutorialConsole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TutorialConsole.BP_TutorialConsole_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TutorialConsole_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialConsole.BP_TutorialConsole_C.ReceiveTick");

	ABP_TutorialConsole_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TutorialConsole.BP_TutorialConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TutorialConsole_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialConsole.BP_TutorialConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_TutorialConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TutorialConsole.BP_TutorialConsole_C.ExecuteUbergraph_BP_TutorialConsole
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TutorialConsole_C::ExecuteUbergraph_BP_TutorialConsole(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialConsole.BP_TutorialConsole_C.ExecuteUbergraph_BP_TutorialConsole");

	ABP_TutorialConsole_C_ExecuteUbergraph_BP_TutorialConsole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
