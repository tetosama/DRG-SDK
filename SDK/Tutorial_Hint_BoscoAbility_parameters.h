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

// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ReceiveOnHidden
struct UTutorial_Hint_BoscoAbility_C_ReceiveOnHidden_Params
{
};

// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnLaserPointerPressed
struct UTutorial_Hint_BoscoAbility_C_OnLaserPointerPressed_Params
{
};

// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnLaserPointerReleased
struct UTutorial_Hint_BoscoAbility_C_OnLaserPointerReleased_Params
{
};

// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ReceiveOnInitialized
struct UTutorial_Hint_BoscoAbility_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.Mark Ready If
struct UTutorial_Hint_BoscoAbility_C_Mark_Ready_If_Params
{
	bool*                                              Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnBoscoChanged
struct UTutorial_Hint_BoscoAbility_C_OnBoscoChanged_Params
{
	class ABosco**                                     Bosco;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ExecuteUbergraph_Tutorial_Hint_BoscoAbility
struct UTutorial_Hint_BoscoAbility_C_ExecuteUbergraph_Tutorial_Hint_BoscoAbility_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
