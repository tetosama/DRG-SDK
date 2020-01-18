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

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetOpacity
struct UBasic_Menu_ColorBar_C_SetOpacity_Params
{
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetThickness
struct UBasic_Menu_ColorBar_C_SetThickness_Params
{
	TEnumAsByte<ENUM_PixelWidths>*                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetColor
struct UBasic_Menu_ColorBar_C_SetColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      Brush_Color;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.PreConstruct
struct UBasic_Menu_ColorBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.ExecuteUbergraph_Basic_Menu_ColorBar
struct UBasic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
