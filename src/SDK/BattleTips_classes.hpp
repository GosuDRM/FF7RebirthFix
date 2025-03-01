#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleTips

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleTips.BattleTips_C
// 0x0150 (0x0520 - 0x03D0)
class UBattleTips_C final : public UEndTipsWindow
{
public:
	class UWidgetAnimation*                       MovieLarge_Out_All;                                // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal_Out;                                        // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal_In;                                         // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MovieLarge_Out;                                    // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MovieLarge_In;                                     // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Switching_R;                                       // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Switching_L;                                       // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Base;                                              // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base_0;                                            // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShop_Bg3_C*                            Bg2;                                               // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShop_Bg3_C*                            Bg2_1;                                             // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShop_Bg3_C*                            Bg2_2;                                             // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndButton*                             Btn;                                               // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage;                                          // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_1;                                        // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_2;                                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_3;                                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_4;                                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_170;                                      // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_386;                                      // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_BlackFilter;                                   // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_TipIcon;                                       // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndBillboard*                          Img_Tips;                                          // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_TitleBg;                                       // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_TitleBg2;                                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_AllBase;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListPoint;                                         // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListPoint_1;                                       // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListPoint_2;                                       // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListPoint_3;                                       // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListPoint_4;                                       // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListPoint_5;                                       // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListPoint_6;                                       // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListPoint_7;                                       // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListPoint_8;                                       // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListPoint_9;                                       // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListPoint_10;                                      // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListPoint_11;                                      // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              MovieBase;                                         // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              MovieFrame;                                        // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleTips_C">();
	}
	static class UBattleTips_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleTips_C>();
	}
};
static_assert(alignof(UBattleTips_C) == 0x000008, "Wrong alignment on UBattleTips_C");
static_assert(sizeof(UBattleTips_C) == 0x000520, "Wrong size on UBattleTips_C");
static_assert(offsetof(UBattleTips_C, MovieLarge_Out_All) == 0x0003D0, "Member 'UBattleTips_C::MovieLarge_Out_All' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Normal_Out) == 0x0003D8, "Member 'UBattleTips_C::Normal_Out' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Normal_In) == 0x0003E0, "Member 'UBattleTips_C::Normal_In' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, MovieLarge_Out) == 0x0003E8, "Member 'UBattleTips_C::MovieLarge_Out' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, MovieLarge_In) == 0x0003F0, "Member 'UBattleTips_C::MovieLarge_In' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Switching_R) == 0x0003F8, "Member 'UBattleTips_C::Switching_R' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Switching_L) == 0x000400, "Member 'UBattleTips_C::Switching_L' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Out) == 0x000408, "Member 'UBattleTips_C::Out' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, In) == 0x000410, "Member 'UBattleTips_C::In' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Base) == 0x000418, "Member 'UBattleTips_C::Base' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Base_0) == 0x000420, "Member 'UBattleTips_C::Base_0' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Bg2) == 0x000428, "Member 'UBattleTips_C::Bg2' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Bg2_1) == 0x000430, "Member 'UBattleTips_C::Bg2_1' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Bg2_2) == 0x000438, "Member 'UBattleTips_C::Bg2_2' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Btn) == 0x000440, "Member 'UBattleTips_C::Btn' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, EndImage) == 0x000448, "Member 'UBattleTips_C::EndImage' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, EndImage_1) == 0x000450, "Member 'UBattleTips_C::EndImage_1' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, EndImage_2) == 0x000458, "Member 'UBattleTips_C::EndImage_2' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, EndImage_3) == 0x000460, "Member 'UBattleTips_C::EndImage_3' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, EndImage_4) == 0x000468, "Member 'UBattleTips_C::EndImage_4' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, EndImage_170) == 0x000470, "Member 'UBattleTips_C::EndImage_170' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, EndImage_386) == 0x000478, "Member 'UBattleTips_C::EndImage_386' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Img_BlackFilter) == 0x000480, "Member 'UBattleTips_C::Img_BlackFilter' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Img_TipIcon) == 0x000488, "Member 'UBattleTips_C::Img_TipIcon' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Img_Tips) == 0x000490, "Member 'UBattleTips_C::Img_Tips' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Img_TitleBg) == 0x000498, "Member 'UBattleTips_C::Img_TitleBg' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Img_TitleBg2) == 0x0004A0, "Member 'UBattleTips_C::Img_TitleBg2' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, Ims_AllBase) == 0x0004A8, "Member 'UBattleTips_C::Ims_AllBase' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, ListPoint) == 0x0004B0, "Member 'UBattleTips_C::ListPoint' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, ListPoint_1) == 0x0004B8, "Member 'UBattleTips_C::ListPoint_1' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, ListPoint_2) == 0x0004C0, "Member 'UBattleTips_C::ListPoint_2' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, ListPoint_3) == 0x0004C8, "Member 'UBattleTips_C::ListPoint_3' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, ListPoint_4) == 0x0004D0, "Member 'UBattleTips_C::ListPoint_4' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, ListPoint_5) == 0x0004D8, "Member 'UBattleTips_C::ListPoint_5' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, ListPoint_6) == 0x0004E0, "Member 'UBattleTips_C::ListPoint_6' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, ListPoint_7) == 0x0004E8, "Member 'UBattleTips_C::ListPoint_7' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, ListPoint_8) == 0x0004F0, "Member 'UBattleTips_C::ListPoint_8' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, ListPoint_9) == 0x0004F8, "Member 'UBattleTips_C::ListPoint_9' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, ListPoint_10) == 0x000500, "Member 'UBattleTips_C::ListPoint_10' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, ListPoint_11) == 0x000508, "Member 'UBattleTips_C::ListPoint_11' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, MovieBase) == 0x000510, "Member 'UBattleTips_C::MovieBase' has a wrong offset!");
static_assert(offsetof(UBattleTips_C, MovieFrame) == 0x000518, "Member 'UBattleTips_C::MovieFrame' has a wrong offset!");

}

