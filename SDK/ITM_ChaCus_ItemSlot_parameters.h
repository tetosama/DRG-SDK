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

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.SetCurrentItem
struct UITM_ChaCus_ItemSlot_C_SetCurrentItem_Params
{
	int*                                               InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.IsInteractable
struct UITM_ChaCus_ItemSlot_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.SetCharacter
struct UITM_ChaCus_ItemSlot_C_SetCharacter_Params
{
	class UClass**                                     InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateItemUINotification
struct UITM_ChaCus_ItemSlot_C_UpdateItemUINotification_Params
{
	class UObject**                                    InItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateCategoryUINotification
struct UITM_ChaCus_ItemSlot_C_UpdateCategoryUINotification_Params
{
	bool*                                              InitialSetup;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.OnKeyUp
struct UITM_ChaCus_ItemSlot_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateCounterText
struct UITM_ChaCus_ItemSlot_C_UpdateCounterText_Params
{
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.GetCharacter
struct UITM_ChaCus_ItemSlot_C_GetCharacter_Params
{
	class APlayerCharacter*                            AsPlayer_Character;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateItem
struct UITM_ChaCus_ItemSlot_C_UpdateItem_Params
{
	class UVanityItem**                                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.PreConstruct
struct UITM_ChaCus_ItemSlot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UITM_ChaCus_ItemSlot_C_BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UITM_ChaCus_ItemSlot_C_BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.Prev
struct UITM_ChaCus_ItemSlot_C_Prev_Params
{
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.Next
struct UITM_ChaCus_ItemSlot_C_Next_Params
{
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.ScheduleHideNotification
struct UITM_ChaCus_ItemSlot_C_ScheduleHideNotification_Params
{
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.OnHideNotification
struct UITM_ChaCus_ItemSlot_C_OnHideNotification_Params
{
};

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot
struct UITM_ChaCus_ItemSlot_C_ExecuteUbergraph_ITM_ChaCus_ItemSlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
