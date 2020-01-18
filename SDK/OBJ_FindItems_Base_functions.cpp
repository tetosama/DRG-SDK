
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

// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.IsObjectiveResource
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UResourceData**          InResource                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOBJ_FindItems_Base_C::IsObjectiveResource(class UResourceData** InResource)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.IsObjectiveResource");

	UOBJ_FindItems_Base_C_IsObjectiveResource_Params params;
	params.InResource = InResource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBJ_FindItems_Base_C::GetInMissionCounterIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterIcon");

	UOBJ_FindItems_Base_C_GetInMissionCounterIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOBJ_FindItems_Base_C::GetInMissionCounterText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterText");

	UOBJ_FindItems_Base_C_GetInMissionCounterText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBJ_FindItems_Base_C::GetObjectiveIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveIcon");

	UOBJ_FindItems_Base_C_GetObjectiveIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveAmount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         missionLength                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOBJ_FindItems_Base_C::GetObjectiveAmount(float* missionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveAmount");

	UOBJ_FindItems_Base_C_GetObjectiveAmount_Params params;
	params.missionLength = missionLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOBJ_FindItems_Base_C::GetInMissionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionText");

	UOBJ_FindItems_Base_C_GetInMissionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         missionLength                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOBJ_FindItems_Base_C::GetObjectiveDescription(float* missionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveDescription");

	UOBJ_FindItems_Base_C_GetObjectiveDescription_Params params;
	params.missionLength = missionLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
