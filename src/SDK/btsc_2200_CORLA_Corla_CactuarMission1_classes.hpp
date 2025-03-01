#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: btsc_2200_CORLA_Corla_CactuarMission1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass btsc_2200-CORLA_Corla_CactuarMission1.btsc_2200-CORLA_Corla_CactuarMission1_C
// 0x00F8 (0x03B8 - 0x02C0)
class Abtsc_2200_CORLA_Corla_CactuarMission1_C final : public AEndBattleSceneBlueprint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                   Territory_ID;                                      // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNotStage1;                                       // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D9[0x3];                                      // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentStageCheckIndex;                            // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ReinforceActorList;                                // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         StageID;                                           // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SpawnSlotID;                                       // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SpawnValue;                                        // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentWave;                                       // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoadDone;                                        // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        SpawnPosOffset;                                    // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         DEF_OffsetUnit;                                    // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DEF_LoadWaitDuration;                              // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           DEF_StageFlags;                                    // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   DEF_StageFlagHard;                                 // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DEF_StageID_1;                                     // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DEF_StageID_OffsetForHard;                         // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         SpawnValue_All_st;                                 // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         WaveClearRequirementNum_st;                        // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         DEF_Digit_SpawnValue;                              // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DEF_OffsetUnitForSpawnValue;                       // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DEF_Digit_WaveClearRequirement;                    // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DEF_OffsetNoiseRateMax;                            // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 DEF_PointNameBody;                                 // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsMissionMode;                                     // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_381[0x3];                                      // 0x0381(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DEF_KillsCountName;                                // 0x0384(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DEF_AllEnemyTypes;                                 // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DEF_MaxEnemySpawnNum;                              // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DEF_ReinforceEndNum;                               // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DEF_OffsetNoiseUnit;                               // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DEF_NameExtensionRule;                             // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DEF_ForPreload;                                    // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4[0x4];                                      // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DEF_Territory_ID_Base;                             // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_btsc_2200_CORLA_Corla_CactuarMission1(int32 EntryPoint);
	void CactuarMission_Init();
	void GetStageID();
	void WaitWaveClear();
	void Reinforce();
	void WaitLoad();
	void PrepareNextReinforce();
	void OnEntryBattleScene(const class FName& battleScenenBPName, const class FName& territoryID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"btsc_2200-CORLA_Corla_CactuarMission1_C">();
	}
	static class Abtsc_2200_CORLA_Corla_CactuarMission1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Abtsc_2200_CORLA_Corla_CactuarMission1_C>();
	}
};
static_assert(alignof(Abtsc_2200_CORLA_Corla_CactuarMission1_C) == 0x000008, "Wrong alignment on Abtsc_2200_CORLA_Corla_CactuarMission1_C");
static_assert(sizeof(Abtsc_2200_CORLA_Corla_CactuarMission1_C) == 0x0003B8, "Wrong size on Abtsc_2200_CORLA_Corla_CactuarMission1_C");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, UberGraphFrame) == 0x0002C0, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DefaultSceneRoot) == 0x0002C8, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, Territory_ID) == 0x0002D0, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::Territory_ID' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, IsNotStage1) == 0x0002D8, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::IsNotStage1' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, CurrentStageCheckIndex) == 0x0002DC, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::CurrentStageCheckIndex' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, ReinforceActorList) == 0x0002E0, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::ReinforceActorList' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, StageID) == 0x0002F0, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::StageID' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, SpawnSlotID) == 0x0002F4, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::SpawnSlotID' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, SpawnValue) == 0x0002F8, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::SpawnValue' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, CurrentWave) == 0x0002FC, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::CurrentWave' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, IsLoadDone) == 0x000300, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::IsLoadDone' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, SpawnPosOffset) == 0x000308, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::SpawnPosOffset' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_OffsetUnit) == 0x000318, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_OffsetUnit' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_LoadWaitDuration) == 0x00031C, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_LoadWaitDuration' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_StageFlags) == 0x000320, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_StageFlags' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_StageFlagHard) == 0x000330, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_StageFlagHard' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_StageID_1) == 0x000338, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_StageID_1' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_StageID_OffsetForHard) == 0x00033C, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_StageID_OffsetForHard' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, SpawnValue_All_st) == 0x000340, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::SpawnValue_All_st' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, WaveClearRequirementNum_st) == 0x000350, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::WaveClearRequirementNum_st' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_Digit_SpawnValue) == 0x000360, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_Digit_SpawnValue' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_OffsetUnitForSpawnValue) == 0x000364, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_OffsetUnitForSpawnValue' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_Digit_WaveClearRequirement) == 0x000368, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_Digit_WaveClearRequirement' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_OffsetNoiseRateMax) == 0x00036C, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_OffsetNoiseRateMax' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_PointNameBody) == 0x000370, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_PointNameBody' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, IsMissionMode) == 0x000380, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::IsMissionMode' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_KillsCountName) == 0x000384, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_KillsCountName' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_AllEnemyTypes) == 0x00038C, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_AllEnemyTypes' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_MaxEnemySpawnNum) == 0x000390, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_MaxEnemySpawnNum' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_ReinforceEndNum) == 0x000394, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_ReinforceEndNum' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_OffsetNoiseUnit) == 0x000398, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_OffsetNoiseUnit' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_NameExtensionRule) == 0x00039C, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_NameExtensionRule' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_ForPreload) == 0x0003A0, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_ForPreload' has a wrong offset!");
static_assert(offsetof(Abtsc_2200_CORLA_Corla_CactuarMission1_C, DEF_Territory_ID_Base) == 0x0003A8, "Member 'Abtsc_2200_CORLA_Corla_CactuarMission1_C::DEF_Territory_ID_Base' has a wrong offset!");

}

