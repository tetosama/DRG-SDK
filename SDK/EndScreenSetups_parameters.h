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

// Function EndScreenSetups.EndScreenSetups_C.GetRandomWalkAnim
struct UEndScreenSetups_C_GetRandomWalkAnim_Params
{
	class UVictoryPose**                               VicPose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandStream;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EndScreenSetups.EndScreenSetups_C.LoadVictoryAnims
struct UEndScreenSetups_C_LoadVictoryAnims_Params
{
	class UVictoryPose**                               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandStream;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FEndScreenMove                              EndScreenMove;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function EndScreenSetups.EndScreenSetups_C.LoadActorClass
struct UEndScreenSetups_C_LoadActorClass_Params
{
	class UClass*                                      Hard;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeqArray
struct UEndScreenSetups_C_LoadAnimSeqArray_Params
{
	TArray<class UAnimSequence*>                       Hard;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeq
struct UEndScreenSetups_C_LoadAnimSeq_Params
{
	class UAnimSequence*                               Hard;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenSetups.EndScreenSetups_C.SplitMoveSetAnims
struct UEndScreenSetups_C_SplitMoveSetAnims_Params
{
	class UAnimSequence*                               Selected1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenSetups.EndScreenSetups_C.ResetMovesets
struct UEndScreenSetups_C_ResetMovesets_Params
{
	int*                                               NewSeed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenSetups.EndScreenSetups_C.RandomWeightedMoveSet
struct UEndScreenSetups_C_RandomWeightedMoveSet_Params
{
	TArray<struct FEndScreenMoveSet>                   Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FEndScreenMove                              Selected;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function EndScreenSetups.EndScreenSetups_C.GetEndScreenMoveSet
struct UEndScreenSetups_C_GetEndScreenMoveSet_Params
{
	bool*                                              Survived;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UVictoryPose**                               VictPose;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandStream;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FEndScreenMove                              Selected;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function EndScreenSetups.EndScreenSetups_C.RandomAnimElement
struct UEndScreenSetups_C_RandomAnimElement_Params
{
	TArray<class UAnimSequence*>                       Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UAnimSequence*                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
