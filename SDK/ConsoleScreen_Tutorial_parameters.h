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

// Function ConsoleScreen_Tutorial.ConsoleScreen_Tutorial_C.Construct
struct UConsoleScreen_Tutorial_C_Construct_Params
{
};

// Function ConsoleScreen_Tutorial.ConsoleScreen_Tutorial_C.DisableConsole
struct UConsoleScreen_Tutorial_C_DisableConsole_Params
{
};

// Function ConsoleScreen_Tutorial.ConsoleScreen_Tutorial_C.SetConsoleEnabled
struct UConsoleScreen_Tutorial_C_SetConsoleEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Tutorial.ConsoleScreen_Tutorial_C.ExecuteUbergraph_ConsoleScreen_Tutorial
struct UConsoleScreen_Tutorial_C_ExecuteUbergraph_ConsoleScreen_Tutorial_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
