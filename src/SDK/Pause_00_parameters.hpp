#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pause_00

#include "Basic.hpp"


namespace SDK::Params
{

// Function Pause_00.Pause_00_C.ExecuteUbergraph_Pause_00
// 0x0008 (0x0008 - 0x0000)
struct Pause_00_C_ExecuteUbergraph_Pause_00 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAnimationByName_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Pause_00_C_ExecuteUbergraph_Pause_00) == 0x000004, "Wrong alignment on Pause_00_C_ExecuteUbergraph_Pause_00");
static_assert(sizeof(Pause_00_C_ExecuteUbergraph_Pause_00) == 0x000008, "Wrong size on Pause_00_C_ExecuteUbergraph_Pause_00");
static_assert(offsetof(Pause_00_C_ExecuteUbergraph_Pause_00, EntryPoint) == 0x000000, "Member 'Pause_00_C_ExecuteUbergraph_Pause_00::EntryPoint' has a wrong offset!");
static_assert(offsetof(Pause_00_C_ExecuteUbergraph_Pause_00, CallFunc_PlayAnimationByName_ReturnValue) == 0x000004, "Member 'Pause_00_C_ExecuteUbergraph_Pause_00::CallFunc_PlayAnimationByName_ReturnValue' has a wrong offset!");

}

