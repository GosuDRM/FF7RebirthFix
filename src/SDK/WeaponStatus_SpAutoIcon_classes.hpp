#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponStatus_SpAutoIcon

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponStatus_SpAutoIcon.WeaponStatus_SpAutoIcon_C
// 0x0028 (0x0400 - 0x03D8)
class UWeaponStatus_SpAutoIcon_C final : public UEndWeaponStatusSpAutoIcon
{
public:
	class UWidgetAnimation*                       Auto3;                                             // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Auto2;                                             // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Auto1;                                             // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              AutoIconFrame;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base;                                              // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponStatus_SpAutoIcon_C">();
	}
	static class UWeaponStatus_SpAutoIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponStatus_SpAutoIcon_C>();
	}
};
static_assert(alignof(UWeaponStatus_SpAutoIcon_C) == 0x000008, "Wrong alignment on UWeaponStatus_SpAutoIcon_C");
static_assert(sizeof(UWeaponStatus_SpAutoIcon_C) == 0x000400, "Wrong size on UWeaponStatus_SpAutoIcon_C");
static_assert(offsetof(UWeaponStatus_SpAutoIcon_C, Auto3) == 0x0003D8, "Member 'UWeaponStatus_SpAutoIcon_C::Auto3' has a wrong offset!");
static_assert(offsetof(UWeaponStatus_SpAutoIcon_C, Auto2) == 0x0003E0, "Member 'UWeaponStatus_SpAutoIcon_C::Auto2' has a wrong offset!");
static_assert(offsetof(UWeaponStatus_SpAutoIcon_C, Auto1) == 0x0003E8, "Member 'UWeaponStatus_SpAutoIcon_C::Auto1' has a wrong offset!");
static_assert(offsetof(UWeaponStatus_SpAutoIcon_C, AutoIconFrame) == 0x0003F0, "Member 'UWeaponStatus_SpAutoIcon_C::AutoIconFrame' has a wrong offset!");
static_assert(offsetof(UWeaponStatus_SpAutoIcon_C, Base) == 0x0003F8, "Member 'UWeaponStatus_SpAutoIcon_C::Base' has a wrong offset!");

}

