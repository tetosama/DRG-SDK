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

// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.UpdateMissionStructure
struct UITM_EscMenu_Briefing_C_UpdateMissionStructure_Params
{
	bool                                               IsDeepDiveAndSpacerig;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.SetMutatorInfo
struct UITM_EscMenu_Briefing_C_SetMutatorInfo_Params
{
	class UMissionMutator**                            Mutator;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.SetWarningInfo
struct UITM_EscMenu_Briefing_C_SetWarningInfo_Params
{
	class UMissionWarning**                            Warning;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.UpdateMissionInfo
struct UITM_EscMenu_Briefing_C_UpdateMissionInfo_Params
{
	class UBiome**                                     Biome;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.Tick
struct UITM_EscMenu_Briefing_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.PreConstruct
struct UITM_EscMenu_Briefing_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.ExecuteUbergraph_ITM_EscMenu_Briefing
struct UITM_EscMenu_Briefing_C_ExecuteUbergraph_ITM_EscMenu_Briefing_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
