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

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.CampaignChecks
struct UWND_MissionBar_Normal_C_CampaignChecks_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CampaignMission;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AreRestrictionsMet;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetGeneratedMission
struct UWND_MissionBar_Normal_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          InMission;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.PreConstruct
struct UWND_MissionBar_Normal_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.Construct
struct UWND_MissionBar_Normal_C_Construct_Params
{
};

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.ExecuteUbergraph_WND_MissionBar_Normal
struct UWND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
