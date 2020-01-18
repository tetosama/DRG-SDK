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

// Function LoreScreen_Template.LoreScreen_Template_C.SetHeadline
struct ULoreScreen_Template_C_SetHeadline_Params
{
	struct FText*                                      SetHeadline;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoreScreen_Template.LoreScreen_Template_C.PreConstruct
struct ULoreScreen_Template_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMovie
struct ULoreScreen_Template_C_SetHeaderMovie_Params
{
	class UMediaSource**                               MediaSource;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderImage
struct ULoreScreen_Template_C_SetHeaderImage_Params
{
	class UTexture2D**                                 HeaderImage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoreScreen_Template.LoreScreen_Template_C.StartMovie
struct ULoreScreen_Template_C_StartMovie_Params
{
};

// Function LoreScreen_Template.LoreScreen_Template_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct ULoreScreen_Template_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function LoreScreen_Template.LoreScreen_Template_C.OnScreenOut
struct ULoreScreen_Template_C_OnScreenOut_Params
{
};

// Function LoreScreen_Template.LoreScreen_Template_C.SetMissionTypeHeadline
struct ULoreScreen_Template_C_SetMissionTypeHeadline_Params
{
	struct FText*                                      TextBeforeIcon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FObjectiveMissionIcon*                      MissionIcon;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextAfterIcon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoreScreen_Template.LoreScreen_Template_C.ExecuteUbergraph_LoreScreen_Template
struct ULoreScreen_Template_C_ExecuteUbergraph_LoreScreen_Template_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
