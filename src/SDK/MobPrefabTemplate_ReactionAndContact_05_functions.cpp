#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MobPrefabTemplate_ReactionAndContact_05

#include "Basic.hpp"

#include "MobPrefabTemplate_ReactionAndContact_05_classes.hpp"
#include "MobPrefabTemplate_ReactionAndContact_05_parameters.hpp"


namespace SDK
{

// Function MobPrefabTemplate_ReactionAndContact_05.MobPrefabTemplate_ReactionAndContact_05_C.GetContext
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MobId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    EnableReaction                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    EnableContact                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ContactDuringReaction                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             ForwardLeftMotion                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ForwardRightMotion                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BackLeftMotion                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BackRightMotion                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ContactBlendTime                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, class FName>          ContactPropagateMotionTable                            (Parm, OutParm)
// TMap<class FName, class FName>          ContactPropagateForwardLeftMotionTable                 (Parm, OutParm)
// TMap<class FName, class FName>          ContactPropagateForwardRightMotionTable                (Parm, OutParm)
// TMap<class FName, class FName>          ContactPropagateBackLeftMotionTable                    (Parm, OutParm)
// TMap<class FName, class FName>          ContactPropagateBackRightMotionTable                   (Parm, OutParm)
// float                                   ContactPropagateBlendTime                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ContactOutMotionName                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ContactOutBlendTime                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ContactOutReplaceBaseMotionName                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Motion                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BlendTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ReplaceBaseMotion                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ReactionOutMotionName                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReactionOutBlendTime                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ReactionOutReplaceBaseMotionName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlayMotionOnce                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMobPrefabTemplate_ReactionAndContact_05_C::GetContext(class FName MobId, bool* EnableReaction, bool* EnableContact, bool* ContactDuringReaction, class FName* ForwardLeftMotion, class FName* ForwardRightMotion, class FName* BackLeftMotion, class FName* BackRightMotion, float* ContactBlendTime, TMap<class FName, class FName>* ContactPropagateMotionTable, TMap<class FName, class FName>* ContactPropagateForwardLeftMotionTable, TMap<class FName, class FName>* ContactPropagateForwardRightMotionTable, TMap<class FName, class FName>* ContactPropagateBackLeftMotionTable, TMap<class FName, class FName>* ContactPropagateBackRightMotionTable, float* ContactPropagateBlendTime, class FName* ContactOutMotionName, float* ContactOutBlendTime, class FName* ContactOutReplaceBaseMotionName, class FName* Motion, float* BlendTime, class FName* ReplaceBaseMotion, class FName* ReactionOutMotionName, float* ReactionOutBlendTime, class FName* ReactionOutReplaceBaseMotionName, bool* PlayMotionOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MobPrefabTemplate_ReactionAndContact_05_C", "GetContext");

	Params::MobPrefabTemplate_ReactionAndContact_05_C_GetContext Parms{};

	Parms.MobId = MobId;

	UObject::ProcessEvent(Func, &Parms);

	if (EnableReaction != nullptr)
		*EnableReaction = Parms.EnableReaction;

	if (EnableContact != nullptr)
		*EnableContact = Parms.EnableContact;

	if (ContactDuringReaction != nullptr)
		*ContactDuringReaction = Parms.ContactDuringReaction;

	if (ForwardLeftMotion != nullptr)
		*ForwardLeftMotion = Parms.ForwardLeftMotion;

	if (ForwardRightMotion != nullptr)
		*ForwardRightMotion = Parms.ForwardRightMotion;

	if (BackLeftMotion != nullptr)
		*BackLeftMotion = Parms.BackLeftMotion;

	if (BackRightMotion != nullptr)
		*BackRightMotion = Parms.BackRightMotion;

	if (ContactBlendTime != nullptr)
		*ContactBlendTime = Parms.ContactBlendTime;

	if (ContactPropagateMotionTable != nullptr)
		*ContactPropagateMotionTable = std::move(Parms.ContactPropagateMotionTable);

	if (ContactPropagateForwardLeftMotionTable != nullptr)
		*ContactPropagateForwardLeftMotionTable = std::move(Parms.ContactPropagateForwardLeftMotionTable);

	if (ContactPropagateForwardRightMotionTable != nullptr)
		*ContactPropagateForwardRightMotionTable = std::move(Parms.ContactPropagateForwardRightMotionTable);

	if (ContactPropagateBackLeftMotionTable != nullptr)
		*ContactPropagateBackLeftMotionTable = std::move(Parms.ContactPropagateBackLeftMotionTable);

	if (ContactPropagateBackRightMotionTable != nullptr)
		*ContactPropagateBackRightMotionTable = std::move(Parms.ContactPropagateBackRightMotionTable);

	if (ContactPropagateBlendTime != nullptr)
		*ContactPropagateBlendTime = Parms.ContactPropagateBlendTime;

	if (ContactOutMotionName != nullptr)
		*ContactOutMotionName = Parms.ContactOutMotionName;

	if (ContactOutBlendTime != nullptr)
		*ContactOutBlendTime = Parms.ContactOutBlendTime;

	if (ContactOutReplaceBaseMotionName != nullptr)
		*ContactOutReplaceBaseMotionName = Parms.ContactOutReplaceBaseMotionName;

	if (Motion != nullptr)
		*Motion = Parms.Motion;

	if (BlendTime != nullptr)
		*BlendTime = Parms.BlendTime;

	if (ReplaceBaseMotion != nullptr)
		*ReplaceBaseMotion = Parms.ReplaceBaseMotion;

	if (ReactionOutMotionName != nullptr)
		*ReactionOutMotionName = Parms.ReactionOutMotionName;

	if (ReactionOutBlendTime != nullptr)
		*ReactionOutBlendTime = Parms.ReactionOutBlendTime;

	if (ReactionOutReplaceBaseMotionName != nullptr)
		*ReactionOutReplaceBaseMotionName = Parms.ReactionOutReplaceBaseMotionName;

	if (PlayMotionOnce != nullptr)
		*PlayMotionOnce = Parms.PlayMotionOnce;
}


// Function MobPrefabTemplate_ReactionAndContact_05.MobPrefabTemplate_ReactionAndContact_05_C.ExecuteUbergraph_MobPrefabTemplate_ReactionAndContact_05
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMobPrefabTemplate_ReactionAndContact_05_C::ExecuteUbergraph_MobPrefabTemplate_ReactionAndContact_05(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MobPrefabTemplate_ReactionAndContact_05_C", "ExecuteUbergraph_MobPrefabTemplate_ReactionAndContact_05");

	Params::MobPrefabTemplate_ReactionAndContact_05_C_ExecuteUbergraph_MobPrefabTemplate_ReactionAndContact_05 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MobPrefabTemplate_ReactionAndContact_05.MobPrefabTemplate_ReactionAndContact_05_C.OnPreUpdateRegistry
// (Event, Public, BlueprintEvent)

void AMobPrefabTemplate_ReactionAndContact_05_C::OnPreUpdateRegistry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MobPrefabTemplate_ReactionAndContact_05_C", "OnPreUpdateRegistry");

	UObject::ProcessEvent(Func, nullptr);
}

}

