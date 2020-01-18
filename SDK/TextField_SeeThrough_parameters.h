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

// Function TextField_SeeThrough.TextField_SeeThrough_C.SetTextSize
struct UTextField_SeeThrough_C_SetTextSize_Params
{
	int*                                               TextSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TextField_SeeThrough.TextField_SeeThrough_C.SetText
struct UTextField_SeeThrough_C_SetText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TextField_SeeThrough.TextField_SeeThrough_C.PreConstruct
struct UTextField_SeeThrough_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TextField_SeeThrough.TextField_SeeThrough_C.ExecuteUbergraph_TextField_SeeThrough
struct UTextField_SeeThrough_C_ExecuteUbergraph_TextField_SeeThrough_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
