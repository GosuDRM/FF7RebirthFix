#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Two000_WESTC_Before

#include "Basic.hpp"


namespace SDK::Params
{

// Function 2000-WESTC_Before.2000-WESTC_Before_C.ExecuteUbergraph_2000-WESTC_Before
// 0x0014 (0x0014 - 0x0000)
struct Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_value;                                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChapterProgress_ReturnValue;           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before) == 0x000004, "Wrong alignment on Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before");
static_assert(sizeof(Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before) == 0x000014, "Wrong size on Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before");
static_assert(offsetof(Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before, EntryPoint) == 0x000000, "Member 'Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before::EntryPoint' has a wrong offset!");
static_assert(offsetof(Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before, CallFunc_Less_IntInt_ReturnValue) == 0x000004, "Member 'Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before, K2Node_Event_value) == 0x000008, "Member 'Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before::K2Node_Event_value' has a wrong offset!");
static_assert(offsetof(Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before, CallFunc_GetChapterProgress_ReturnValue) == 0x00000C, "Member 'Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before::CallFunc_GetChapterProgress_ReturnValue' has a wrong offset!");
static_assert(offsetof(Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before, CallFunc_Less_IntInt_ReturnValue_1) == 0x000010, "Member 'Two000_WESTC_Before_C_ExecuteUbergraph_2000_WESTC_Before::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function 2000-WESTC_Before.2000-WESTC_Before_C.OnSetChapterProgress
// 0x0004 (0x0004 - 0x0000)
struct Two000_WESTC_Before_C_OnSetChapterProgress final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Two000_WESTC_Before_C_OnSetChapterProgress) == 0x000004, "Wrong alignment on Two000_WESTC_Before_C_OnSetChapterProgress");
static_assert(sizeof(Two000_WESTC_Before_C_OnSetChapterProgress) == 0x000004, "Wrong size on Two000_WESTC_Before_C_OnSetChapterProgress");
static_assert(offsetof(Two000_WESTC_Before_C_OnSetChapterProgress, Value) == 0x000000, "Member 'Two000_WESTC_Before_C_OnSetChapterProgress::Value' has a wrong offset!");

}

