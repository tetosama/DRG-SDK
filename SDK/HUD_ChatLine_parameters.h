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

// Function HUD_ChatLine.HUD_ChatLine_C.RemoveTags
struct UHUD_ChatLine_C_RemoveTags_Params
{
	struct FString*                                    Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function HUD_ChatLine.HUD_ChatLine_C.EncloseText
struct UHUD_ChatLine_C_EncloseText_Params
{
	struct FString*                                    Pre;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString*                                    Post;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function HUD_ChatLine.HUD_ChatLine_C.StyledText
struct UHUD_ChatLine_C_StyledText_Params
{
	struct FText*                                      style_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function HUD_ChatLine.HUD_ChatLine_C.UpdateUserIcon
struct UHUD_ChatLine_C_UpdateUserIcon_Params
{
	EChatMessageType*                                  MessageType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EChatSenderType*                                   SenderType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ChatLine.HUD_ChatLine_C.UpdateOpacity
struct UHUD_ChatLine_C_UpdateOpacity_Params
{
};

// Function HUD_ChatLine.HUD_ChatLine_C.SetMessage
struct UHUD_ChatLine_C_SetMessage_Params
{
	EChatMessageType*                                  MsgType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    SenderStr;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EChatSenderType*                                   SenderType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    MsgStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function HUD_ChatLine.HUD_ChatLine_C.Construct
struct UHUD_ChatLine_C_Construct_Params
{
};

// Function HUD_ChatLine.HUD_ChatLine_C.Tick
struct UHUD_ChatLine_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ChatLine.HUD_ChatLine_C.PreConstruct
struct UHUD_ChatLine_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ChatLine.HUD_ChatLine_C.ExecuteUbergraph_HUD_ChatLine
struct UHUD_ChatLine_C_ExecuteUbergraph_HUD_ChatLine_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ChatLine.HUD_ChatLine_C.OnMessageHidden__DelegateSignature
struct UHUD_ChatLine_C_OnMessageHidden__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
