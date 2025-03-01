#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Report_Terms2

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Report_Terms2.Report_Terms2_C
// 0x0028 (0x03F0 - 0x03C8)
class UReport_Terms2_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Clear;                                             // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Icon_Complete;                                     // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Icon_ReportList;                                   // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Terms;                                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Report_Terms2_C">();
	}
	static class UReport_Terms2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReport_Terms2_C>();
	}
};
static_assert(alignof(UReport_Terms2_C) == 0x000008, "Wrong alignment on UReport_Terms2_C");
static_assert(sizeof(UReport_Terms2_C) == 0x0003F0, "Wrong size on UReport_Terms2_C");
static_assert(offsetof(UReport_Terms2_C, Clear) == 0x0003C8, "Member 'UReport_Terms2_C::Clear' has a wrong offset!");
static_assert(offsetof(UReport_Terms2_C, Normal) == 0x0003D0, "Member 'UReport_Terms2_C::Normal' has a wrong offset!");
static_assert(offsetof(UReport_Terms2_C, Icon_Complete) == 0x0003D8, "Member 'UReport_Terms2_C::Icon_Complete' has a wrong offset!");
static_assert(offsetof(UReport_Terms2_C, Icon_ReportList) == 0x0003E0, "Member 'UReport_Terms2_C::Icon_ReportList' has a wrong offset!");
static_assert(offsetof(UReport_Terms2_C, Txt_Terms) == 0x0003E8, "Member 'UReport_Terms2_C::Txt_Terms' has a wrong offset!");

}

