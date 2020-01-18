
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

// Function BP_CountDownWidget.BP_CountDownWidget_C.UpdateDepthText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_CountDownWidget_C::UpdateDepthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownWidget.BP_CountDownWidget_C.UpdateDepthText");

	UBP_CountDownWidget_C_UpdateDepthText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CountDownWidget.BP_CountDownWidget_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CountDownWidget_C::SetProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownWidget.BP_CountDownWidget_C.SetProgress");

	UBP_CountDownWidget_C_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CountDownWidget.BP_CountDownWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_CountDownWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownWidget.BP_CountDownWidget_C.Construct");

	UBP_CountDownWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CountDownWidget.BP_CountDownWidget_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CountDownWidget_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownWidget.BP_CountDownWidget_C.OnGeneratedMissionChanged");

	UBP_CountDownWidget_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CountDownWidget.BP_CountDownWidget_C.ExecuteUbergraph_BP_CountDownWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CountDownWidget_C::ExecuteUbergraph_BP_CountDownWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownWidget.BP_CountDownWidget_C.ExecuteUbergraph_BP_CountDownWidget");

	UBP_CountDownWidget_C_ExecuteUbergraph_BP_CountDownWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
