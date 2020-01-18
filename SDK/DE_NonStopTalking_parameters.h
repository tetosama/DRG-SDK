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

// Function DE_NonStopTalking.DE_NonStopTalking_C.OnStartEffect
struct UDE_NonStopTalking_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_NonStopTalking.DE_NonStopTalking_C.OnStopEffect
struct UDE_NonStopTalking_C_OnStopEffect_Params
{
};

// Function DE_NonStopTalking.DE_NonStopTalking_C.ExecuteUbergraph_DE_NonStopTalking
struct UDE_NonStopTalking_C_ExecuteUbergraph_DE_NonStopTalking_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
