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

// Function UI_RetirementInfo.UI_RetirementInfo_C.UpdateBenefits
struct UUI_RetirementInfo_C_UpdateBenefits_Params
{
	bool*                                              InNoCharactersPromoted;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InCharacterRetirementCount;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RetirementInfo.UI_RetirementInfo_C.SetData
struct UUI_RetirementInfo_C_SetData_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RetirementInfo.UI_RetirementInfo_C.PreConstruct
struct UUI_RetirementInfo_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RetirementInfo.UI_RetirementInfo_C.ExecuteUbergraph_UI_RetirementInfo
struct UUI_RetirementInfo_C_ExecuteUbergraph_UI_RetirementInfo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
