#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN2211_01_Ogre_OrcEnd2_AIBP

#include "Basic.hpp"

#include "EndGame_structs.hpp"


namespace SDK::Params
{

// Function EN2211_01_Ogre_OrcEnd2_AIBP.EN2211_01_Ogre_OrcEnd2_AIBP_C.ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP
// 0x0068 (0x0068 - 0x0000)
struct EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSubclassOf<class UEndAIActionPackBase>> K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	EEndAIIntervalType                            K2Node_Event_IntervalType;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_ExtraIntervalId;                      // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEndAIActionPackReturnInfo             CallFunc_RequestActionPackArray_ReturnValue;       // 0x0024(0x0014)(NoDestructor)
	EEndAIProwlCallType                           K2Node_Event_CallType;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSubclassOf<class UEndAIActionPackBase>> K2Node_MakeArray_Array_1;                          // 0x0040(0x0010)(ReferenceParm)
	struct FEndAIActionPackReturnInfo             CallFunc_RequestActionPackArray_ReturnValue_1;     // 0x0050(0x0014)(NoDestructor)
};
static_assert(alignof(EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP) == 0x000008, "Wrong alignment on EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP");
static_assert(sizeof(EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP) == 0x000068, "Wrong size on EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP");
static_assert(offsetof(EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP, EntryPoint) == 0x000000, "Member 'EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP, K2Node_MakeArray_Array) == 0x000008, "Member 'EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP, K2Node_Event_IntervalType) == 0x000018, "Member 'EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP::K2Node_Event_IntervalType' has a wrong offset!");
static_assert(offsetof(EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP, K2Node_Event_ExtraIntervalId) == 0x00001C, "Member 'EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP::K2Node_Event_ExtraIntervalId' has a wrong offset!");
static_assert(offsetof(EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP, CallFunc_RequestActionPackArray_ReturnValue) == 0x000024, "Member 'EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP::CallFunc_RequestActionPackArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP, K2Node_Event_CallType) == 0x000038, "Member 'EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP::K2Node_Event_CallType' has a wrong offset!");
static_assert(offsetof(EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP, K2Node_MakeArray_Array_1) == 0x000040, "Member 'EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP, CallFunc_RequestActionPackArray_ReturnValue_1) == 0x000050, "Member 'EN2211_01_Ogre_OrcEnd2_AIBP_C_ExecuteUbergraph_EN2211_01_Ogre_OrcEnd2_AIBP::CallFunc_RequestActionPackArray_ReturnValue_1' has a wrong offset!");

// Function EN2211_01_Ogre_OrcEnd2_AIBP.EN2211_01_Ogre_OrcEnd2_AIBP_C.OnProwlInvoke
// 0x0001 (0x0001 - 0x0000)
struct EN2211_01_Ogre_OrcEnd2_AIBP_C_OnProwlInvoke final
{
public:
	EEndAIProwlCallType                           CallType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EN2211_01_Ogre_OrcEnd2_AIBP_C_OnProwlInvoke) == 0x000001, "Wrong alignment on EN2211_01_Ogre_OrcEnd2_AIBP_C_OnProwlInvoke");
static_assert(sizeof(EN2211_01_Ogre_OrcEnd2_AIBP_C_OnProwlInvoke) == 0x000001, "Wrong size on EN2211_01_Ogre_OrcEnd2_AIBP_C_OnProwlInvoke");
static_assert(offsetof(EN2211_01_Ogre_OrcEnd2_AIBP_C_OnProwlInvoke, CallType) == 0x000000, "Member 'EN2211_01_Ogre_OrcEnd2_AIBP_C_OnProwlInvoke::CallType' has a wrong offset!");

// Function EN2211_01_Ogre_OrcEnd2_AIBP.EN2211_01_Ogre_OrcEnd2_AIBP_C.OnActionInvoke
// 0x000C (0x000C - 0x0000)
struct EN2211_01_Ogre_OrcEnd2_AIBP_C_OnActionInvoke final
{
public:
	EEndAIIntervalType                            IntervalType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ExtraIntervalId;                                   // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EN2211_01_Ogre_OrcEnd2_AIBP_C_OnActionInvoke) == 0x000004, "Wrong alignment on EN2211_01_Ogre_OrcEnd2_AIBP_C_OnActionInvoke");
static_assert(sizeof(EN2211_01_Ogre_OrcEnd2_AIBP_C_OnActionInvoke) == 0x00000C, "Wrong size on EN2211_01_Ogre_OrcEnd2_AIBP_C_OnActionInvoke");
static_assert(offsetof(EN2211_01_Ogre_OrcEnd2_AIBP_C_OnActionInvoke, IntervalType) == 0x000000, "Member 'EN2211_01_Ogre_OrcEnd2_AIBP_C_OnActionInvoke::IntervalType' has a wrong offset!");
static_assert(offsetof(EN2211_01_Ogre_OrcEnd2_AIBP_C_OnActionInvoke, ExtraIntervalId) == 0x000004, "Member 'EN2211_01_Ogre_OrcEnd2_AIBP_C_OnActionInvoke::ExtraIntervalId' has a wrong offset!");

}

