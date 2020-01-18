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

// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnHidden
struct UTutorial_Hint_LaserPointer_C_ReceiveOnHidden_Params
{
};

// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerPressed
struct UTutorial_Hint_LaserPointer_C_OnLaserPointerPressed_Params
{
};

// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerReleased
struct UTutorial_Hint_LaserPointer_C_OnLaserPointerReleased_Params
{
};

// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerEvent
struct UTutorial_Hint_LaserPointer_C_OnLaserPointerEvent_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ELaserPointerTargetType*                           TargetType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     ExtraActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnInitialized
struct UTutorial_Hint_LaserPointer_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ExecuteUbergraph_Tutorial_Hint_LaserPointer
struct UTutorial_Hint_LaserPointer_C_ExecuteUbergraph_Tutorial_Hint_LaserPointer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
