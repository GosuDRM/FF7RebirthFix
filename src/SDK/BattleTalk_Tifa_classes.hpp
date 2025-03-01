#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleTalk_Tifa

#include "Basic.hpp"

#include "BattleTalk_Base_classes.hpp"
#include "EndGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleTalk_Tifa.BattleTalk_Tifa_C
// 0x0000 (0x00B8 - 0x00B8)
class UBattleTalk_Tifa_C final : public UBattleTalk_Base_C
{
public:
	bool OnNotify(const class FName& AnimName, const class FName& SoundName, class AEndCharacter* OwnerChara) const;
	bool OnNotifyWithAbility(const class FName& AnimName, const class FName& SoundName, class AEndCharacter* OwnerChara, class AEndCharacter* targetChara, const class FName& AbilityId, const struct FEndDataObjectBattleAbilityAccessor& dataObjectBattleAbility, bool bFinishBlow) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleTalk_Tifa_C">();
	}
	static class UBattleTalk_Tifa_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleTalk_Tifa_C>();
	}
};
static_assert(alignof(UBattleTalk_Tifa_C) == 0x000008, "Wrong alignment on UBattleTalk_Tifa_C");
static_assert(sizeof(UBattleTalk_Tifa_C) == 0x0000B8, "Wrong size on UBattleTalk_Tifa_C");

}

