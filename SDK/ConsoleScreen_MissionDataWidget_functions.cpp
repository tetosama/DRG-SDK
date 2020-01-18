
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

// Function ConsoleScreen_MissionDataWidget.ConsoleScreen_MissionDataWidget_C.SetGeneratedMission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      In_Mission                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_MissionDataWidget_C::SetGeneratedMission(class UGeneratedMission** In_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MissionDataWidget.ConsoleScreen_MissionDataWidget_C.SetGeneratedMission");

	UConsoleScreen_MissionDataWidget_C_SetGeneratedMission_Params params;
	params.In_Mission = In_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_MissionDataWidget.ConsoleScreen_MissionDataWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_MissionDataWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MissionDataWidget.ConsoleScreen_MissionDataWidget_C.Construct");

	UConsoleScreen_MissionDataWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_MissionDataWidget.ConsoleScreen_MissionDataWidget_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_MissionDataWidget_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MissionDataWidget.ConsoleScreen_MissionDataWidget_C.OnGeneratedMissionChanged");

	UConsoleScreen_MissionDataWidget_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_MissionDataWidget.ConsoleScreen_MissionDataWidget_C.ExecuteUbergraph_ConsoleScreen_MissionDataWidget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_MissionDataWidget_C::ExecuteUbergraph_ConsoleScreen_MissionDataWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MissionDataWidget.ConsoleScreen_MissionDataWidget_C.ExecuteUbergraph_ConsoleScreen_MissionDataWidget");

	UConsoleScreen_MissionDataWidget_C_ExecuteUbergraph_ConsoleScreen_MissionDataWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
