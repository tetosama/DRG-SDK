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

// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetTimesRetired
struct UITM_RetirementBadge_C_SetTimesRetired_Params
{
	int*                                               TimesRetired;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetCharacterClass
struct UITM_RetirementBadge_C_SetCharacterClass_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SelectColor
struct UITM_RetirementBadge_C_SelectColor_Params
{
	int*                                               Stars;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SelectIcon
struct UITM_RetirementBadge_C_SelectIcon_Params
{
	int*                                               RetirementLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetData
struct UITM_RetirementBadge_C_SetData_Params
{
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_RetirementBadge.ITM_RetirementBadge_C.PreConstruct
struct UITM_RetirementBadge_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_RetirementBadge.ITM_RetirementBadge_C.ExecuteUbergraph_ITM_RetirementBadge
struct UITM_RetirementBadge_C_ExecuteUbergraph_ITM_RetirementBadge_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
