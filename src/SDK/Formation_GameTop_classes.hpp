#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Formation_GameTop

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Formation_GameTop.Formation_GameTop_C
// 0x0048 (0x0410 - 0x03C8)
class UFormation_GameTop_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       ResultTitle_Out;                                   // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ResultTitle_In;                                    // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Title_In;                                          // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFormation_Combo_C*                     Combo;                                             // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_50;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon;                                              // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFormation_SimpleResult_C*              SimpleResult;                                      // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Txt1Bg;                                            // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Txt2Bg;                                            // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Formation_GameTop_C">();
	}
	static class UFormation_GameTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFormation_GameTop_C>();
	}
};
static_assert(alignof(UFormation_GameTop_C) == 0x000008, "Wrong alignment on UFormation_GameTop_C");
static_assert(sizeof(UFormation_GameTop_C) == 0x000410, "Wrong size on UFormation_GameTop_C");
static_assert(offsetof(UFormation_GameTop_C, ResultTitle_Out) == 0x0003C8, "Member 'UFormation_GameTop_C::ResultTitle_Out' has a wrong offset!");
static_assert(offsetof(UFormation_GameTop_C, ResultTitle_In) == 0x0003D0, "Member 'UFormation_GameTop_C::ResultTitle_In' has a wrong offset!");
static_assert(offsetof(UFormation_GameTop_C, Title_In) == 0x0003D8, "Member 'UFormation_GameTop_C::Title_In' has a wrong offset!");
static_assert(offsetof(UFormation_GameTop_C, Combo) == 0x0003E0, "Member 'UFormation_GameTop_C::Combo' has a wrong offset!");
static_assert(offsetof(UFormation_GameTop_C, EndImage_50) == 0x0003E8, "Member 'UFormation_GameTop_C::EndImage_50' has a wrong offset!");
static_assert(offsetof(UFormation_GameTop_C, Icon) == 0x0003F0, "Member 'UFormation_GameTop_C::Icon' has a wrong offset!");
static_assert(offsetof(UFormation_GameTop_C, SimpleResult) == 0x0003F8, "Member 'UFormation_GameTop_C::SimpleResult' has a wrong offset!");
static_assert(offsetof(UFormation_GameTop_C, Txt1Bg) == 0x000400, "Member 'UFormation_GameTop_C::Txt1Bg' has a wrong offset!");
static_assert(offsetof(UFormation_GameTop_C, Txt2Bg) == 0x000408, "Member 'UFormation_GameTop_C::Txt2Bg' has a wrong offset!");

}

