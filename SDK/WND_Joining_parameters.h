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

// Function WND_Joining.WND_Joining_C.BeginFadeOut
struct UWND_Joining_C_BeginFadeOut_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Joining.WND_Joining_C.OnKeyUp
struct UWND_Joining_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WND_Joining.WND_Joining_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWND_Joining_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WND_Joining.WND_Joining_C.PreConstruct
struct UWND_Joining_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Joining.WND_Joining_C.HideCancel
struct UWND_Joining_C_HideCancel_Params
{
};

// Function WND_Joining.WND_Joining_C.OnShown
struct UWND_Joining_C_OnShown_Params
{
};

// Function WND_Joining.WND_Joining_C.Close
struct UWND_Joining_C_Close_Params
{
};

// Function WND_Joining.WND_Joining_C.ExecuteUbergraph_WND_Joining
struct UWND_Joining_C_ExecuteUbergraph_WND_Joining_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
