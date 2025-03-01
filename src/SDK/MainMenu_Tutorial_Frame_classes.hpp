#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Tutorial_Frame

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_Tutorial_Frame.MainMenu_Tutorial_Frame_C
// 0x0020 (0x03F0 - 0x03D0)
class UMainMenu_Tutorial_Frame_C final : public UEndHighlightFrameWindow
{
public:
	class UWidgetAnimation*                       Loop;                                              // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Img_Com_Base;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_Tutorial_Frame_C">();
	}
	static class UMainMenu_Tutorial_Frame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_Tutorial_Frame_C>();
	}
};
static_assert(alignof(UMainMenu_Tutorial_Frame_C) == 0x000008, "Wrong alignment on UMainMenu_Tutorial_Frame_C");
static_assert(sizeof(UMainMenu_Tutorial_Frame_C) == 0x0003F0, "Wrong size on UMainMenu_Tutorial_Frame_C");
static_assert(offsetof(UMainMenu_Tutorial_Frame_C, Loop) == 0x0003D0, "Member 'UMainMenu_Tutorial_Frame_C::Loop' has a wrong offset!");
static_assert(offsetof(UMainMenu_Tutorial_Frame_C, Out) == 0x0003D8, "Member 'UMainMenu_Tutorial_Frame_C::Out' has a wrong offset!");
static_assert(offsetof(UMainMenu_Tutorial_Frame_C, In) == 0x0003E0, "Member 'UMainMenu_Tutorial_Frame_C::In' has a wrong offset!");
static_assert(offsetof(UMainMenu_Tutorial_Frame_C, Img_Com_Base) == 0x0003E8, "Member 'UMainMenu_Tutorial_Frame_C::Img_Com_Base' has a wrong offset!");

}

