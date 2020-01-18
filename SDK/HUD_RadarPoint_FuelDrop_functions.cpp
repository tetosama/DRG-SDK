
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

// Function HUD_RadarPoint_FuelDrop.HUD_RadarPoint_FuelDrop_C.InitPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URadarPointComponent**   RadarComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_RadarPoint_FuelDrop_C::InitPoint(class URadarPointComponent** RadarComponent, bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_RadarPoint_FuelDrop.HUD_RadarPoint_FuelDrop_C.InitPoint");

	UHUD_RadarPoint_FuelDrop_C_InitPoint_Params params;
	params.RadarComponent = RadarComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (success != nullptr)
		*success = params.success;
}


// Function HUD_RadarPoint_FuelDrop.HUD_RadarPoint_FuelDrop_C.Get3dPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Pos                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_RadarPoint_FuelDrop_C::Get3dPosition(struct FVector* Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_RadarPoint_FuelDrop.HUD_RadarPoint_FuelDrop_C.Get3dPosition");

	UHUD_RadarPoint_FuelDrop_C_Get3dPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pos != nullptr)
		*Pos = params.Pos;
}


// Function HUD_RadarPoint_FuelDrop.HUD_RadarPoint_FuelDrop_C.UpdatePoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         verticalDist                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           destroy                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_RadarPoint_FuelDrop_C::UpdatePoint(float* Alpha, float* verticalDist, bool* destroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_RadarPoint_FuelDrop.HUD_RadarPoint_FuelDrop_C.UpdatePoint");

	UHUD_RadarPoint_FuelDrop_C_UpdatePoint_Params params;
	params.Alpha = Alpha;
	params.verticalDist = verticalDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (destroy != nullptr)
		*destroy = params.destroy;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
