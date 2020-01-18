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

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetText
struct UConsoleScreen_BGtemplate_C_SetText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.Construct
struct UConsoleScreen_BGtemplate_C_Construct_Params
{
};

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.PreConstruct
struct UConsoleScreen_BGtemplate_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.ExecuteUbergraph_ConsoleScreen_BGtemplate
struct UConsoleScreen_BGtemplate_C_ExecuteUbergraph_ConsoleScreen_BGtemplate_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
