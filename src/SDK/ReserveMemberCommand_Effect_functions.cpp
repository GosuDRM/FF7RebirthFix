#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReserveMemberCommand_Effect

#include "Basic.hpp"

#include "ReserveMemberCommand_Effect_classes.hpp"
#include "ReserveMemberCommand_Effect_parameters.hpp"


namespace SDK
{

// Function ReserveMemberCommand_Effect.ReserveMemberCommand_Effect_C.ExecuteUbergraph_ReserveMemberCommand_Effect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReserveMemberCommand_Effect_C::ExecuteUbergraph_ReserveMemberCommand_Effect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReserveMemberCommand_Effect_C", "ExecuteUbergraph_ReserveMemberCommand_Effect");

	Params::ReserveMemberCommand_Effect_C_ExecuteUbergraph_ReserveMemberCommand_Effect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReserveMemberCommand_Effect.ReserveMemberCommand_Effect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReserveMemberCommand_Effect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReserveMemberCommand_Effect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

