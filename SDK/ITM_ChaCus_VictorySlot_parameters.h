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

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.UpdateItemUINotification
struct UITM_ChaCus_VictorySlot_C_UpdateItemUINotification_Params
{
	class UVictoryPose**                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.UpdateCategoryUINotification
struct UITM_ChaCus_VictorySlot_C_UpdateCategoryUINotification_Params
{
	bool*                                              InitialSetup;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.GetPreviewVictoryPose
struct UITM_ChaCus_VictorySlot_C_GetPreviewVictoryPose_Params
{
	class UVictoryPose*                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.OnKeyUp
struct UITM_ChaCus_VictorySlot_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.UpdateCounterText
struct UITM_ChaCus_VictorySlot_C_UpdateCounterText_Params
{
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.GetCharacter
struct UITM_ChaCus_VictorySlot_C_GetCharacter_Params
{
	class APlayerCharacter*                            AsPlayer_Character;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.UpdateItem
struct UITM_ChaCus_VictorySlot_C_UpdateItem_Params
{
	class UVictoryPose**                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              TriggerPreview;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.SetData
struct UITM_ChaCus_VictorySlot_C_SetData_Params
{
	TArray<class UVictoryPose*>*                       vanityItems;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UVictoryPose**                               currentItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID**                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.PreConstruct
struct UITM_ChaCus_VictorySlot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UITM_ChaCus_VictorySlot_C_BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UITM_ChaCus_VictorySlot_C_BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.Prev
struct UITM_ChaCus_VictorySlot_C_Prev_Params
{
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.Next
struct UITM_ChaCus_VictorySlot_C_Next_Params
{
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UITM_ChaCus_VictorySlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.ScheduleHideNotification
struct UITM_ChaCus_VictorySlot_C_ScheduleHideNotification_Params
{
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.OnHideNotification
struct UITM_ChaCus_VictorySlot_C_OnHideNotification_Params
{
};

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.ExecuteUbergraph_ITM_ChaCus_VictorySlot
struct UITM_ChaCus_VictorySlot_C_ExecuteUbergraph_ITM_ChaCus_VictorySlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
