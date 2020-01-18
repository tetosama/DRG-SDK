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

// Function Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C.OnIncreased_Event
struct UTutorial_Hint_ResourceMined_C_OnIncreased_Event_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C.ReceiveOnInitialized
struct UTutorial_Hint_ResourceMined_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C.ExecuteUbergraph_Tutorial_Hint_ResourceMined
struct UTutorial_Hint_ResourceMined_C_ExecuteUbergraph_Tutorial_Hint_ResourceMined_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
