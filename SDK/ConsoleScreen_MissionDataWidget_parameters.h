#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ConsoleScreen_MissionDataWidget.ConsoleScreen_MissionDataWidget_C.SetGeneratedMission
struct UConsoleScreen_MissionDataWidget_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          In_Mission;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_MissionDataWidget.ConsoleScreen_MissionDataWidget_C.Construct
struct UConsoleScreen_MissionDataWidget_C_Construct_Params
{
};

// Function ConsoleScreen_MissionDataWidget.ConsoleScreen_MissionDataWidget_C.OnGeneratedMissionChanged
struct UConsoleScreen_MissionDataWidget_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_MissionDataWidget.ConsoleScreen_MissionDataWidget_C.ExecuteUbergraph_ConsoleScreen_MissionDataWidget
struct UConsoleScreen_MissionDataWidget_C_ExecuteUbergraph_ConsoleScreen_MissionDataWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
