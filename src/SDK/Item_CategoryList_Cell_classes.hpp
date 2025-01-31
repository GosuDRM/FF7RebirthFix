#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_CategoryList_Cell

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Item_CategoryList_Cell.Item_CategoryList_Cell_C
// 0x0028 (0x0408 - 0x03E0)
class UItem_CategoryList_Cell_C final : public UEndItemCategoryListCell
{
public:
	class UWidgetAnimation*                       BtnHover;                                          // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              EndImage;                                          // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_301;                                      // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Gradation1;                                        // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndButton*                             MainMenu_Btn;                                      // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Item_CategoryList_Cell_C">();
	}
	static class UItem_CategoryList_Cell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItem_CategoryList_Cell_C>();
	}
};
static_assert(alignof(UItem_CategoryList_Cell_C) == 0x000008, "Wrong alignment on UItem_CategoryList_Cell_C");
static_assert(sizeof(UItem_CategoryList_Cell_C) == 0x000408, "Wrong size on UItem_CategoryList_Cell_C");
static_assert(offsetof(UItem_CategoryList_Cell_C, BtnHover) == 0x0003E0, "Member 'UItem_CategoryList_Cell_C::BtnHover' has a wrong offset!");
static_assert(offsetof(UItem_CategoryList_Cell_C, EndImage) == 0x0003E8, "Member 'UItem_CategoryList_Cell_C::EndImage' has a wrong offset!");
static_assert(offsetof(UItem_CategoryList_Cell_C, EndImage_301) == 0x0003F0, "Member 'UItem_CategoryList_Cell_C::EndImage_301' has a wrong offset!");
static_assert(offsetof(UItem_CategoryList_Cell_C, Gradation1) == 0x0003F8, "Member 'UItem_CategoryList_Cell_C::Gradation1' has a wrong offset!");
static_assert(offsetof(UItem_CategoryList_Cell_C, MainMenu_Btn) == 0x000400, "Member 'UItem_CategoryList_Cell_C::MainMenu_Btn' has a wrong offset!");

}

