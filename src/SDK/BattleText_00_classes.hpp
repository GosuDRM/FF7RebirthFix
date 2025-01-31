#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleText_00

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleText_00.BattleText_00_C
// 0x0078 (0x07E0 - 0x0768)
class UBattleText_00_C final : public UEndPopupMessage
{
public:
	class UWidgetAnimation*                       Reject_In;                                         // 0x0768(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Linkage_In;                                        // 0x0770(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Parry_Out;                                         // 0x0778(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Parry_In;                                          // 0x0780(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Loop;                                              // 0x0788(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal_Out;                                        // 0x0790(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Continued_In;                                      // 0x0798(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal_In;                                         // 0x07A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndCanvasPanel*                        All_BattleText;                                    // 0x07A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndBorder*                             All_Nut_BattleText;                                // 0x07B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Img_ResistArrow;                                   // 0x07B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndCanvasPanel*                        Pnl_BattleText;                                    // 0x07C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Guard;                                         // 0x07C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Magni;                                         // 0x07D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Number;                                        // 0x07D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleText_00_C">();
	}
	static class UBattleText_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleText_00_C>();
	}
};
static_assert(alignof(UBattleText_00_C) == 0x000008, "Wrong alignment on UBattleText_00_C");
static_assert(sizeof(UBattleText_00_C) == 0x0007E0, "Wrong size on UBattleText_00_C");
static_assert(offsetof(UBattleText_00_C, Reject_In) == 0x000768, "Member 'UBattleText_00_C::Reject_In' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, Linkage_In) == 0x000770, "Member 'UBattleText_00_C::Linkage_In' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, Parry_Out) == 0x000778, "Member 'UBattleText_00_C::Parry_Out' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, Parry_In) == 0x000780, "Member 'UBattleText_00_C::Parry_In' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, Loop) == 0x000788, "Member 'UBattleText_00_C::Loop' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, Normal_Out) == 0x000790, "Member 'UBattleText_00_C::Normal_Out' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, Continued_In) == 0x000798, "Member 'UBattleText_00_C::Continued_In' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, Normal_In) == 0x0007A0, "Member 'UBattleText_00_C::Normal_In' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, All_BattleText) == 0x0007A8, "Member 'UBattleText_00_C::All_BattleText' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, All_Nut_BattleText) == 0x0007B0, "Member 'UBattleText_00_C::All_Nut_BattleText' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, Img_ResistArrow) == 0x0007B8, "Member 'UBattleText_00_C::Img_ResistArrow' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, Pnl_BattleText) == 0x0007C0, "Member 'UBattleText_00_C::Pnl_BattleText' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, Txt_Guard) == 0x0007C8, "Member 'UBattleText_00_C::Txt_Guard' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, Txt_Magni) == 0x0007D0, "Member 'UBattleText_00_C::Txt_Magni' has a wrong offset!");
static_assert(offsetof(UBattleText_00_C, Txt_Number) == 0x0007D8, "Member 'UBattleText_00_C::Txt_Number' has a wrong offset!");

}

