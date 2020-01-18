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

// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.AdjustCLBar
struct UConsoleScreen_HazCompLen_C_AdjustCLBar_Params
{
	float*                                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.AdjustBar
struct UConsoleScreen_HazCompLen_C_AdjustBar_Params
{
	float*                                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.SetGeneratedMission
struct UConsoleScreen_HazCompLen_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          In_Mission;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.Construct
struct UConsoleScreen_HazCompLen_C_Construct_Params
{
};

// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.Tick
struct UConsoleScreen_HazCompLen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.OnGeneratedMissionChanged
struct UConsoleScreen_HazCompLen_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_HazCompLen.ConsoleScreen_HazCompLen_C.ExecuteUbergraph_ConsoleScreen_HazCompLen
struct UConsoleScreen_HazCompLen_C_ExecuteUbergraph_ConsoleScreen_HazCompLen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
