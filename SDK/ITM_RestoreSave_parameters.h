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

// Function ITM_RestoreSave.ITM_RestoreSave_C.Construct
struct UITM_RestoreSave_C_Construct_Params
{
};

// Function ITM_RestoreSave.ITM_RestoreSave_C.Tick
struct UITM_RestoreSave_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_RestoreSave.ITM_RestoreSave_C.HideUIDelayed
struct UITM_RestoreSave_C_HideUIDelayed_Params
{
};

// Function ITM_RestoreSave.ITM_RestoreSave_C.ShowWindow
struct UITM_RestoreSave_C_ShowWindow_Params
{
};

// Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
struct UITM_RestoreSave_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params
{
};

// Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
struct UITM_RestoreSave_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature_Params
{
};

// Function ITM_RestoreSave.ITM_RestoreSave_C.ExecuteUbergraph_ITM_RestoreSave
struct UITM_RestoreSave_C_ExecuteUbergraph_ITM_RestoreSave_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_RestoreSave.ITM_RestoreSave_C.ImageReady__DelegateSignature
struct UITM_RestoreSave_C_ImageReady__DelegateSignature_Params
{
	struct FString*                                    URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
