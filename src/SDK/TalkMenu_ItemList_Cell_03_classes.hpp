#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TalkMenu_ItemList_Cell_03

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TalkMenu_ItemList_Cell_03.TalkMenu_ItemList_Cell_03_C
// 0x0040 (0x0408 - 0x03C8)
class UTalkMenu_ItemList_Cell_03_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Status_3;                                          // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Status_2;                                          // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Status_1;                                          // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIcon_Item_C*                           Icon_Item;                                         // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_X_G1;                                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Base;                                          // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Base_00;                                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line;                                              // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TalkMenu_ItemList_Cell_03_C">();
	}
	static class UTalkMenu_ItemList_Cell_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTalkMenu_ItemList_Cell_03_C>();
	}
};
static_assert(alignof(UTalkMenu_ItemList_Cell_03_C) == 0x000008, "Wrong alignment on UTalkMenu_ItemList_Cell_03_C");
static_assert(sizeof(UTalkMenu_ItemList_Cell_03_C) == 0x000408, "Wrong size on UTalkMenu_ItemList_Cell_03_C");
static_assert(offsetof(UTalkMenu_ItemList_Cell_03_C, Status_3) == 0x0003C8, "Member 'UTalkMenu_ItemList_Cell_03_C::Status_3' has a wrong offset!");
static_assert(offsetof(UTalkMenu_ItemList_Cell_03_C, Status_2) == 0x0003D0, "Member 'UTalkMenu_ItemList_Cell_03_C::Status_2' has a wrong offset!");
static_assert(offsetof(UTalkMenu_ItemList_Cell_03_C, Status_1) == 0x0003D8, "Member 'UTalkMenu_ItemList_Cell_03_C::Status_1' has a wrong offset!");
static_assert(offsetof(UTalkMenu_ItemList_Cell_03_C, Icon_Item) == 0x0003E0, "Member 'UTalkMenu_ItemList_Cell_03_C::Icon_Item' has a wrong offset!");
static_assert(offsetof(UTalkMenu_ItemList_Cell_03_C, Icon_X_G1) == 0x0003E8, "Member 'UTalkMenu_ItemList_Cell_03_C::Icon_X_G1' has a wrong offset!");
static_assert(offsetof(UTalkMenu_ItemList_Cell_03_C, Img_Base) == 0x0003F0, "Member 'UTalkMenu_ItemList_Cell_03_C::Img_Base' has a wrong offset!");
static_assert(offsetof(UTalkMenu_ItemList_Cell_03_C, Img_Base_00) == 0x0003F8, "Member 'UTalkMenu_ItemList_Cell_03_C::Img_Base_00' has a wrong offset!");
static_assert(offsetof(UTalkMenu_ItemList_Cell_03_C, Line) == 0x000400, "Member 'UTalkMenu_ItemList_Cell_03_C::Line' has a wrong offset!");

}

