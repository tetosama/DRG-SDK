
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

// Function ConsoleScreen_Biome.ConsoleScreen_Biome_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBiome**                 Biome                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Biome_C::SetData(class UBiome** Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Biome.ConsoleScreen_Biome_C.SetData");

	UConsoleScreen_Biome_C_SetData_Params params;
	params.Biome = Biome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Biome.ConsoleScreen_Biome_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_Biome_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Biome.ConsoleScreen_Biome_C.Construct");

	UConsoleScreen_Biome_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Biome.ConsoleScreen_Biome_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Biome_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Biome.ConsoleScreen_Biome_C.OnGeneratedMissionChanged");

	UConsoleScreen_Biome_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Biome.ConsoleScreen_Biome_C.ExecuteUbergraph_ConsoleScreen_Biome
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Biome_C::ExecuteUbergraph_ConsoleScreen_Biome(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Biome.ConsoleScreen_Biome_C.ExecuteUbergraph_ConsoleScreen_Biome");

	UConsoleScreen_Biome_C_ExecuteUbergraph_ConsoleScreen_Biome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
