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

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnKeyUp
struct UBasic_Popup_YesNoPrompt_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnShow
struct UBasic_Popup_YesNoPrompt_C_OnShow_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Message;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UBasic_Popup_YesNoPrompt_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UBasic_Popup_YesNoPrompt_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.PreConstruct
struct UBasic_Popup_YesNoPrompt_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Yes
struct UBasic_Popup_YesNoPrompt_C_Yes_Params
{
};

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.No
struct UBasic_Popup_YesNoPrompt_C_No_Params
{
};

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Clear Resources
struct UBasic_Popup_YesNoPrompt_C_Clear_Resources_Params
{
};

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Add Resource
struct UBasic_Popup_YesNoPrompt_C_Add_Resource_Params
{
	class UResourceData**                              InResource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.SetResources
struct UBasic_Popup_YesNoPrompt_C_SetResources_Params
{
	TArray<struct FCraftingCost>*                      Resources;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.SetMappedResources
struct UBasic_Popup_YesNoPrompt_C_SetMappedResources_Params
{
	TMap<class UResourceData*, int>*                   Resources;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.ExecuteUbergraph_Basic_Popup_YesNoPrompt
struct UBasic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnYesNoClicked__DelegateSignature
struct UBasic_Popup_YesNoPrompt_C_OnYesNoClicked__DelegateSignature_Params
{
	bool*                                              ClickedYes;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
