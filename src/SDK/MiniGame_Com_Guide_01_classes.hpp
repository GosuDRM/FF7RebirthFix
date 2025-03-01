#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniGame_Com_Guide_01

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniGame_Com_Guide_01.MiniGame_Com_Guide_01_C
// 0x0038 (0x0400 - 0x03C8)
class UMiniGame_Com_Guide_01_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       In;                                                // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIcon_Btn_00_C*                         Icon_Btn;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Base_00;                                       // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Mash_Base01;                                   // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_Hold_Add;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_Hold_BG;                                       // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_Off_Inside;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniGame_Com_Guide_01_C">();
	}
	static class UMiniGame_Com_Guide_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniGame_Com_Guide_01_C>();
	}
};
static_assert(alignof(UMiniGame_Com_Guide_01_C) == 0x000008, "Wrong alignment on UMiniGame_Com_Guide_01_C");
static_assert(sizeof(UMiniGame_Com_Guide_01_C) == 0x000400, "Wrong size on UMiniGame_Com_Guide_01_C");
static_assert(offsetof(UMiniGame_Com_Guide_01_C, In) == 0x0003C8, "Member 'UMiniGame_Com_Guide_01_C::In' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_Guide_01_C, Icon_Btn) == 0x0003D0, "Member 'UMiniGame_Com_Guide_01_C::Icon_Btn' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_Guide_01_C, Img_Base_00) == 0x0003D8, "Member 'UMiniGame_Com_Guide_01_C::Img_Base_00' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_Guide_01_C, Img_Mash_Base01) == 0x0003E0, "Member 'UMiniGame_Com_Guide_01_C::Img_Mash_Base01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_Guide_01_C, Ims_Hold_Add) == 0x0003E8, "Member 'UMiniGame_Com_Guide_01_C::Ims_Hold_Add' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_Guide_01_C, Ims_Hold_BG) == 0x0003F0, "Member 'UMiniGame_Com_Guide_01_C::Ims_Hold_BG' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_Guide_01_C, Ims_Off_Inside) == 0x0003F8, "Member 'UMiniGame_Com_Guide_01_C::Ims_Off_Inside' has a wrong offset!");

}

