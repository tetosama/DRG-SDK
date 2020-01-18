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

// Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.OnStartEffect
struct UDE_GenericBuffEffect_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.OnStopEffect
struct UDE_GenericBuffEffect_C_OnStopEffect_Params
{
};

// Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.ExecuteUbergraph_DE_GenericBuffEffect
struct UDE_GenericBuffEffect_C_ExecuteUbergraph_DE_GenericBuffEffect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
