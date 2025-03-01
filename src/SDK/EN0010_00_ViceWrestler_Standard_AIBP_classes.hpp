#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN0010_00_ViceWrestler_Standard_AIBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EN_Base_AIBP_classes.hpp"
#include "EndGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EN0010_00_ViceWrestler_Standard_AIBP.EN0010_00_ViceWrestler_Standard_AIBP_C
// 0x0000 (0x0FA0 - 0x0FA0)
class AEN0010_00_ViceWrestler_Standard_AIBP_C final : public AEN_Base_AIBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EN0010_00_ViceWrestler_Standard_AIBP_C; // 0x0F98(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_EN0010_00_ViceWrestler_Standard_AIBP(int32 EntryPoint);
	void OnMotionMessageInvoke(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue);
	void OnMotionStateMessageEnd(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue);
	void OnMotionStateMessageBegin(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue, float InTotalDuration);
	void OnDefinitionLockTargetInvoke(class FName LockTargetTag);
	void OnBeginBurst();
	void OnBeginBreak(class AEndCharacter* causerCharacter);
	void OnEndBurst(bool instant);
	void OnEndBreak();
	void OnEndBattleInvoke();
	void OnStartBattleInvoke();
	void OnProwlInvoke(EEndAIProwlCallType CallType);
	void OnActionInvoke(EEndAIIntervalType IntervalType, class FName ExtraIntervalId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EN0010_00_ViceWrestler_Standard_AIBP_C">();
	}
	static class AEN0010_00_ViceWrestler_Standard_AIBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEN0010_00_ViceWrestler_Standard_AIBP_C>();
	}
};
static_assert(alignof(AEN0010_00_ViceWrestler_Standard_AIBP_C) == 0x000010, "Wrong alignment on AEN0010_00_ViceWrestler_Standard_AIBP_C");
static_assert(sizeof(AEN0010_00_ViceWrestler_Standard_AIBP_C) == 0x000FA0, "Wrong size on AEN0010_00_ViceWrestler_Standard_AIBP_C");
static_assert(offsetof(AEN0010_00_ViceWrestler_Standard_AIBP_C, UberGraphFrame_EN0010_00_ViceWrestler_Standard_AIBP_C) == 0x000F98, "Member 'AEN0010_00_ViceWrestler_Standard_AIBP_C::UberGraphFrame_EN0010_00_ViceWrestler_Standard_AIBP_C' has a wrong offset!");

}

