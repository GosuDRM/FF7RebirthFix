#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: One200_GRASA

#include "Basic.hpp"

#include "One200_GRASA_classes.hpp"
#include "One200_GRASA_parameters.hpp"


namespace SDK
{

// Function 1200-GRASA.1200-GRASA_C.ExecuteUbergraph_1200-GRASA
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOne200_GRASA_C::ExecuteUbergraph_1200_GRASA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("1200-GRASA_C", "ExecuteUbergraph_1200-GRASA");

	Params::One200_GRASA_C_ExecuteUbergraph_1200_GRASA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 1200-GRASA.1200-GRASA_C.OnSetChapterProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOne200_GRASA_C::OnSetChapterProgress(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("1200-GRASA_C", "OnSetChapterProgress");

	Params::One200_GRASA_C_OnSetChapterProgress Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 1200-GRASA.1200-GRASA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOne200_GRASA_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("1200-GRASA_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

