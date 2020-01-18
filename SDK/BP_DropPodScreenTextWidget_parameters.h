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

// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.SetColor
struct UBP_DropPodScreenTextWidget_C_SetColor_Params
{
	struct FSlateColor*                                InColorAndOpacity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.SetText
struct UBP_DropPodScreenTextWidget_C_SetText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.Tick
struct UBP_DropPodScreenTextWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.PreConstruct
struct UBP_DropPodScreenTextWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.ExecuteUbergraph_BP_DropPodScreenTextWidget
struct UBP_DropPodScreenTextWidget_C_ExecuteUbergraph_BP_DropPodScreenTextWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
