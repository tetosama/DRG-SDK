
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_ColorBar_C::SetOpacity(float* Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetOpacity");

	UBasic_Menu_ColorBar_C_SetOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetThickness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_PixelWidths>* Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_ColorBar_C::SetThickness(TEnumAsByte<ENUM_PixelWidths>* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetThickness");

	UBasic_Menu_ColorBar_C_SetThickness_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  Brush_Color                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_ColorBar_C::SetColor(TEnumAsByte<ENUM_MenuColors>* Brush_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetColor");

	UBasic_Menu_ColorBar_C_SetColor_Params params;
	params.Brush_Color = Brush_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_ColorBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.PreConstruct");

	UBasic_Menu_ColorBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.ExecuteUbergraph_Basic_Menu_ColorBar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_ColorBar_C::ExecuteUbergraph_Basic_Menu_ColorBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.ExecuteUbergraph_Basic_Menu_ColorBar");

	UBasic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
