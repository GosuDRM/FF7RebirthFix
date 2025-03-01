#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChocoboTimeAttack_BestTime

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChocoboTimeAttack_BestTime.ChocoboTimeAttack_BestTime_C
// 0x0018 (0x03E0 - 0x03C8)
class UChocoboTimeAttack_BestTime_C final : public UEndUserWidget
{
public:
	class UEndImage*                              Line;                                              // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_BestTime;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Title;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChocoboTimeAttack_BestTime_C">();
	}
	static class UChocoboTimeAttack_BestTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChocoboTimeAttack_BestTime_C>();
	}
};
static_assert(alignof(UChocoboTimeAttack_BestTime_C) == 0x000008, "Wrong alignment on UChocoboTimeAttack_BestTime_C");
static_assert(sizeof(UChocoboTimeAttack_BestTime_C) == 0x0003E0, "Wrong size on UChocoboTimeAttack_BestTime_C");
static_assert(offsetof(UChocoboTimeAttack_BestTime_C, Line) == 0x0003C8, "Member 'UChocoboTimeAttack_BestTime_C::Line' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_BestTime_C, Txt_BestTime) == 0x0003D0, "Member 'UChocoboTimeAttack_BestTime_C::Txt_BestTime' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_BestTime_C, Txt_Title) == 0x0003D8, "Member 'UChocoboTimeAttack_BestTime_C::Txt_Title' has a wrong offset!");

}

