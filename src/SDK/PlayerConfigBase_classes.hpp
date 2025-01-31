#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerConfigBase

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerConfigBase.PlayerConfigBase_C
// 0x0000 (0x02F8 - 0x02F8)
class UPlayerConfigBase_C : public UEndPlayerCharacterConfig
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerConfigBase_C">();
	}
	static class UPlayerConfigBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerConfigBase_C>();
	}
};
static_assert(alignof(UPlayerConfigBase_C) == 0x000008, "Wrong alignment on UPlayerConfigBase_C");
static_assert(sizeof(UPlayerConfigBase_C) == 0x0002F8, "Wrong size on UPlayerConfigBase_C");

}

