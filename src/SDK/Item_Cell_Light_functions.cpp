#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_Cell_Light

#include "Basic.hpp"

#include "Item_Cell_Light_classes.hpp"
#include "Item_Cell_Light_parameters.hpp"


namespace SDK
{

// Function Item_Cell_Light.Item_Cell_Light_C.ExecuteUbergraph_Item_Cell_Light
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItem_Cell_Light_C::ExecuteUbergraph_Item_Cell_Light(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_Cell_Light_C", "ExecuteUbergraph_Item_Cell_Light");

	Params::Item_Cell_Light_C_ExecuteUbergraph_Item_Cell_Light Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Item_Cell_Light.Item_Cell_Light_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItem_Cell_Light_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_Cell_Light_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

