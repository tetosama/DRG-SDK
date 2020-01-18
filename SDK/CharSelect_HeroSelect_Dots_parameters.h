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

// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.UpdateDots
struct UCharSelect_HeroSelect_Dots_C_UpdateDots_Params
{
};

// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.PreConstruct
struct UCharSelect_HeroSelect_Dots_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Tick
struct UCharSelect_HeroSelect_Dots_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Set Character Class
struct UCharSelect_HeroSelect_Dots_C_Set_Character_Class_Params
{
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Construct
struct UCharSelect_HeroSelect_Dots_C_Construct_Params
{
};

// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.ExecuteUbergraph_CharSelect_HeroSelect_Dots
struct UCharSelect_HeroSelect_Dots_C_ExecuteUbergraph_CharSelect_HeroSelect_Dots_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
