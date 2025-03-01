#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Formation_Result_Good

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Formation_Result_Good.Formation_Result_Good_C
// 0x0040 (0x0408 - 0x03C8)
class UFormation_Result_Good_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       In;                                                // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Arrow;                                             // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base0;                                             // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base0_1;                                           // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base0_2;                                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base3;                                             // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base_FaceIcon;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base_main;                                         // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Formation_Result_Good_C">();
	}
	static class UFormation_Result_Good_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFormation_Result_Good_C>();
	}
};
static_assert(alignof(UFormation_Result_Good_C) == 0x000008, "Wrong alignment on UFormation_Result_Good_C");
static_assert(sizeof(UFormation_Result_Good_C) == 0x000408, "Wrong size on UFormation_Result_Good_C");
static_assert(offsetof(UFormation_Result_Good_C, In) == 0x0003C8, "Member 'UFormation_Result_Good_C::In' has a wrong offset!");
static_assert(offsetof(UFormation_Result_Good_C, Arrow) == 0x0003D0, "Member 'UFormation_Result_Good_C::Arrow' has a wrong offset!");
static_assert(offsetof(UFormation_Result_Good_C, Base0) == 0x0003D8, "Member 'UFormation_Result_Good_C::Base0' has a wrong offset!");
static_assert(offsetof(UFormation_Result_Good_C, Base0_1) == 0x0003E0, "Member 'UFormation_Result_Good_C::Base0_1' has a wrong offset!");
static_assert(offsetof(UFormation_Result_Good_C, Base0_2) == 0x0003E8, "Member 'UFormation_Result_Good_C::Base0_2' has a wrong offset!");
static_assert(offsetof(UFormation_Result_Good_C, Base3) == 0x0003F0, "Member 'UFormation_Result_Good_C::Base3' has a wrong offset!");
static_assert(offsetof(UFormation_Result_Good_C, Base_FaceIcon) == 0x0003F8, "Member 'UFormation_Result_Good_C::Base_FaceIcon' has a wrong offset!");
static_assert(offsetof(UFormation_Result_Good_C, Base_main) == 0x000400, "Member 'UFormation_Result_Good_C::Base_main' has a wrong offset!");

}

