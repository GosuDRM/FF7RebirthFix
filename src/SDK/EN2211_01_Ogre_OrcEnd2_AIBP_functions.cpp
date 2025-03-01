#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN2211_01_Ogre_OrcEnd2_AIBP

#include "Basic.hpp"

#include "EN2211_01_Ogre_OrcEnd2_AIBP_classes.hpp"
#include "EN2211_01_Ogre_OrcEnd2_AIBP_parameters.hpp"


namespace SDK
{

// Function EN2211_01_Ogre_OrcEnd2_AIBP.EN2211_01_Ogre_OrcEnd2_AIBP_C.ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2211_01_Ogre_OrcEnd2_AIBP_C::ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2211_01_Ogre_OrcEnd2_AIBP_C", "ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP");

	Params::EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2211_01_Ogre_OrcEnd2_AIBP.EN2211_01_Ogre_OrcEnd2_AIBP_C.OnProwlInvoke
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndAIProwlCallType                     CallType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2211_01_Ogre_OrcEnd2_AIBP_C::OnProwlInvoke(EEndAIProwlCallType CallType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2211_01_Ogre_OrcEnd2_AIBP_C", "OnProwlInvoke");

	Params::EN2211_01_Ogre_OrcEnd2_AIBP_C_OnProwlInvoke Parms{};

	Parms.CallType = CallType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2211_01_Ogre_OrcEnd2_AIBP.EN2211_01_Ogre_OrcEnd2_AIBP_C.OnActionInvoke
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndAIIntervalType                      IntervalType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ExtraIntervalId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2211_01_Ogre_OrcEnd2_AIBP_C::OnActionInvoke(EEndAIIntervalType IntervalType, class FName ExtraIntervalId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2211_01_Ogre_OrcEnd2_AIBP_C", "OnActionInvoke");

	Params::EN2211_01_Ogre_OrcEnd2_AIBP_C_OnActionInvoke Parms{};

	Parms.IntervalType = IntervalType;
	Parms.ExtraIntervalId = ExtraIntervalId;

	UObject::ProcessEvent(Func, &Parms);
}

}

