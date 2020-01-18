
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

// Function EndScreenSetups.EndScreenSetups_C.GetRandomWalkAnim
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVictoryPose**           VicPose                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandStream                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEndScreenSetups_C::GetRandomWalkAnim(class UVictoryPose** VicPose, struct FRandomStream* RandStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.GetRandomWalkAnim");

	UEndScreenSetups_C_GetRandomWalkAnim_Params params;
	params.VicPose = VicPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandStream != nullptr)
		*RandStream = params.RandStream;
}


// Function EndScreenSetups.EndScreenSetups_C.LoadVictoryAnims
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVictoryPose**           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandStream                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FEndScreenMove          EndScreenMove                  (Parm, OutParm, ZeroConstructor)

void UEndScreenSetups_C::LoadVictoryAnims(class UVictoryPose** InputPin, struct FRandomStream* RandStream, struct FEndScreenMove* EndScreenMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.LoadVictoryAnims");

	UEndScreenSetups_C_LoadVictoryAnims_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandStream != nullptr)
		*RandStream = params.RandStream;
	if (EndScreenMove != nullptr)
		*EndScreenMove = params.EndScreenMove;
}


// Function EndScreenSetups.EndScreenSetups_C.LoadActorClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Hard                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEndScreenSetups_C::LoadActorClass(class UClass** Hard)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.LoadActorClass");

	UEndScreenSetups_C_LoadActorClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hard != nullptr)
		*Hard = params.Hard;
}


// Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeqArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UAnimSequence*>   Hard                           (Parm, OutParm, ZeroConstructor)

void UEndScreenSetups_C::LoadAnimSeqArray(TArray<class UAnimSequence*>* Hard)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeqArray");

	UEndScreenSetups_C_LoadAnimSeqArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hard != nullptr)
		*Hard = params.Hard;
}


// Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeq
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimSequence*           Hard                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEndScreenSetups_C::LoadAnimSeq(class UAnimSequence** Hard)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeq");

	UEndScreenSetups_C_LoadAnimSeq_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hard != nullptr)
		*Hard = params.Hard;
}


// Function EndScreenSetups.EndScreenSetups_C.SplitMoveSetAnims
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequence*           Selected1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEndScreenSetups_C::SplitMoveSetAnims(class UAnimSequence** Selected1)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.SplitMoveSetAnims");

	UEndScreenSetups_C_SplitMoveSetAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selected1 != nullptr)
		*Selected1 = params.Selected1;
}


// Function EndScreenSetups.EndScreenSetups_C.ResetMovesets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewSeed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndScreenSetups_C::ResetMovesets(int* NewSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.ResetMovesets");

	UEndScreenSetups_C_ResetMovesets_Params params;
	params.NewSeed = NewSeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndScreenSetups.EndScreenSetups_C.RandomWeightedMoveSet
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FEndScreenMoveSet> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FEndScreenMove          Selected                       (Parm, OutParm, ZeroConstructor)

void UEndScreenSetups_C::RandomWeightedMoveSet(TArray<struct FEndScreenMoveSet>* Array, struct FEndScreenMove* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.RandomWeightedMoveSet");

	UEndScreenSetups_C_RandomWeightedMoveSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Selected != nullptr)
		*Selected = params.Selected;
}


// Function EndScreenSetups.EndScreenSetups_C.GetEndScreenMoveSet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Survived                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UVictoryPose**           VictPose                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandStream                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FEndScreenMove          Selected                       (Parm, OutParm, ZeroConstructor)

void UEndScreenSetups_C::GetEndScreenMoveSet(bool* Survived, class UVictoryPose** VictPose, struct FRandomStream* RandStream, struct FEndScreenMove* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.GetEndScreenMoveSet");

	UEndScreenSetups_C_GetEndScreenMoveSet_Params params;
	params.Survived = Survived;
	params.VictPose = VictPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandStream != nullptr)
		*RandStream = params.RandStream;
	if (Selected != nullptr)
		*Selected = params.Selected;
}


// Function EndScreenSetups.EndScreenSetups_C.RandomAnimElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UAnimSequence*>   Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UAnimSequence*           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEndScreenSetups_C::RandomAnimElement(TArray<class UAnimSequence*>* Array, class UAnimSequence** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.RandomAnimElement");

	UEndScreenSetups_C_RandomAnimElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Output != nullptr)
		*Output = params.Output;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
