#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: COMON_SingleJikeidan2_01

#include "Basic.hpp"

#include "COMON_SingleJikeidan2_01_classes.hpp"
#include "COMON_SingleJikeidan2_01_parameters.hpp"


namespace SDK
{

// Function COMON_SingleJikeidan2_01.COMON_SingleJikeidan2_01_C.ExecuteUbergraph_COMON_SingleJikeidan2_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACOMON_SingleJikeidan2_01_C::ExecuteUbergraph_COMON_SingleJikeidan2_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMON_SingleJikeidan2_01_C", "ExecuteUbergraph_COMON_SingleJikeidan2_01");

	Params::COMON_SingleJikeidan2_01_C_ExecuteUbergraph_COMON_SingleJikeidan2_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMON_SingleJikeidan2_01.COMON_SingleJikeidan2_01_C.CreateMobCommand
// (Event, Public, BlueprintEvent)

void ACOMON_SingleJikeidan2_01_C::CreateMobCommand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMON_SingleJikeidan2_01_C", "CreateMobCommand");

	UObject::ProcessEvent(Func, nullptr);
}

}

