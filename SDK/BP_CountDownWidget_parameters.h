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

// Function BP_CountDownWidget.BP_CountDownWidget_C.UpdateDepthText
struct UBP_CountDownWidget_C_UpdateDepthText_Params
{
};

// Function BP_CountDownWidget.BP_CountDownWidget_C.SetProgress
struct UBP_CountDownWidget_C_SetProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CountDownWidget.BP_CountDownWidget_C.Construct
struct UBP_CountDownWidget_C_Construct_Params
{
};

// Function BP_CountDownWidget.BP_CountDownWidget_C.OnGeneratedMissionChanged
struct UBP_CountDownWidget_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CountDownWidget.BP_CountDownWidget_C.ExecuteUbergraph_BP_CountDownWidget
struct UBP_CountDownWidget_C_ExecuteUbergraph_BP_CountDownWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
