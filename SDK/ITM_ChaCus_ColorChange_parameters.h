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

// Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.OnColorSelected
struct UITM_ChaCus_ColorChange_C_OnColorSelected_Params
{
	class UITM_ChaCus_ColorChange_ColorBox_C**         InItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.SetCharacter
struct UITM_ChaCus_ColorChange_C_SetCharacter_Params
{
	class UClass**                                     InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.PreConstruct
struct UITM_ChaCus_ColorChange_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.ExecuteUbergraph_ITM_ChaCus_ColorChange
struct UITM_ChaCus_ColorChange_C_ExecuteUbergraph_ITM_ChaCus_ColorChange_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
