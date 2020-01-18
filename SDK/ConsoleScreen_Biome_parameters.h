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

// Function ConsoleScreen_Biome.ConsoleScreen_Biome_C.SetData
struct UConsoleScreen_Biome_C_SetData_Params
{
	class UBiome**                                     Biome;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Biome.ConsoleScreen_Biome_C.Construct
struct UConsoleScreen_Biome_C_Construct_Params
{
};

// Function ConsoleScreen_Biome.ConsoleScreen_Biome_C.OnGeneratedMissionChanged
struct UConsoleScreen_Biome_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Biome.ConsoleScreen_Biome_C.ExecuteUbergraph_ConsoleScreen_Biome
struct UConsoleScreen_Biome_C_ExecuteUbergraph_ConsoleScreen_Biome_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
