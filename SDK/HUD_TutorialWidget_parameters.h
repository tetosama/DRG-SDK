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

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnShow
struct UHUD_TutorialWidget_C_OnShow_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      ControllerOverrideText;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.Construct
struct UHUD_TutorialWidget_C_Construct_Params
{
};

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnHide
struct UHUD_TutorialWidget_C_OnHide_Params
{
};

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.PreConstruct
struct UHUD_TutorialWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnEnterExitFinished
struct UHUD_TutorialWidget_C_OnEnterExitFinished_Params
{
};

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.ExecuteUbergraph_HUD_TutorialWidget
struct UHUD_TutorialWidget_C_ExecuteUbergraph_HUD_TutorialWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
