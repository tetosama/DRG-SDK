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

// Function Tutorial_FocusShot.Tutorial_FocusShot_C.ReceiveOnInitialized
struct UTutorial_FocusShot_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_FocusShot.Tutorial_FocusShot_C.OnItemEquipped_Event
struct UTutorial_FocusShot_C_OnItemEquipped_Event_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_FocusShot.Tutorial_FocusShot_C.FullyFocusedEvent_Event
struct UTutorial_FocusShot_C_FullyFocusedEvent_Event_Params
{
};

// Function Tutorial_FocusShot.Tutorial_FocusShot_C.ExecuteUbergraph_Tutorial_FocusShot
struct UTutorial_FocusShot_C_ExecuteUbergraph_Tutorial_FocusShot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
