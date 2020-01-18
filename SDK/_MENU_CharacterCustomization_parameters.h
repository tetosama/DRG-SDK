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

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnKeyUp
struct U_MENU_CharacterCustomization_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.GetCharacter
struct U_MENU_CharacterCustomization_C_GetCharacter_Params
{
	class APlayerCharacter*                            Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
struct U_MENU_CharacterCustomization_C_BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnShown
struct U_MENU_CharacterCustomization_C_OnShown_Params
{
};

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature
struct U_MENU_CharacterCustomization_C_BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature_Params
{
};

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ReceiveCloseCommand
struct U_MENU_CharacterCustomization_C_ReceiveCloseCommand_Params
{
};

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.PreConstruct
struct U_MENU_CharacterCustomization_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature
struct U_MENU_CharacterCustomization_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature_Params
{
};

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.Refresh
struct U_MENU_CharacterCustomization_C_Refresh_Params
{
};

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.SetCharacter
struct U_MENU_CharacterCustomization_C_SetCharacter_Params
{
	class UClass**                                     PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnClosed
struct U_MENU_CharacterCustomization_C_OnClosed_Params
{
};

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ExecuteUbergraph__MENU_CharacterCustomization
struct U_MENU_CharacterCustomization_C_ExecuteUbergraph__MENU_CharacterCustomization_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
