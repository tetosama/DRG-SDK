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

// Function ConsoleScreen_SelectMission.ConsoleScreen_SelectMission_C.Construct
struct UConsoleScreen_SelectMission_C_Construct_Params
{
};

// Function ConsoleScreen_SelectMission.ConsoleScreen_SelectMission_C.DisableConsole
struct UConsoleScreen_SelectMission_C_DisableConsole_Params
{
};

// Function ConsoleScreen_SelectMission.ConsoleScreen_SelectMission_C.SetConsoleEnabled
struct UConsoleScreen_SelectMission_C_SetConsoleEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_SelectMission.ConsoleScreen_SelectMission_C.ExecuteUbergraph_ConsoleScreen_SelectMission
struct UConsoleScreen_SelectMission_C_ExecuteUbergraph_ConsoleScreen_SelectMission_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
