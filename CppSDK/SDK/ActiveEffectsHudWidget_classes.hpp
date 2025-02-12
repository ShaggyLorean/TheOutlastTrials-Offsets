﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActiveEffectsHudWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ActiveEffectsHudWidget.ActiveEffectsHudWidget_C
// 0x00C8 (0x03B0 - 0x02E8)
class UActiveEffectsHudWidget_C final : public URBHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UActiveEffectEntryWidget_C*             ActiveEffectEntryWidget;                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActiveEffectEntryWidget_C*             ActiveEffectEntryWidget_29;                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EffectList;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ARBPlayer*                              CurrentPlayer;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FActiveEffectTrackingData> DelayedEffects;                                    // 0x0310(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, float>                      Timestamps;                                        // 0x0360(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ActiveEffectsHudWidget(int32 EntryPoint);
	void OnActiveEffectAdded(const struct FActiveEffectTrackingData& activeEffectTrackingDataEntry);
	void Event_OnHudModeChanged(EHudMode newHudMode);
	void Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer);
	void PreConstruct(bool IsDesignTime);
	void AddActiveEffect(const struct FActiveEffectTrackingData& activeEffectTrackingDataEntry, float delay);
	void UpdateActiveEffect(const struct FActiveEffectTrackingData& activeEffectTrackingDataEntry);
	void RemoveActiveEffect(const class FName& EffectId);
	void Refresh(TArray<struct FActiveEffectTrackingData>& activeEffectTrackingDataEntries);
	void TryAddDelayedEffects();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActiveEffectsHudWidget_C">();
	}
	static class UActiveEffectsHudWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActiveEffectsHudWidget_C>();
	}
};
static_assert(alignof(UActiveEffectsHudWidget_C) == 0x000008, "Wrong alignment on UActiveEffectsHudWidget_C");
static_assert(sizeof(UActiveEffectsHudWidget_C) == 0x0003B0, "Wrong size on UActiveEffectsHudWidget_C");
static_assert(offsetof(UActiveEffectsHudWidget_C, UberGraphFrame) == 0x0002E8, "Member 'UActiveEffectsHudWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActiveEffectsHudWidget_C, ActiveEffectEntryWidget) == 0x0002F0, "Member 'UActiveEffectsHudWidget_C::ActiveEffectEntryWidget' has a wrong offset!");
static_assert(offsetof(UActiveEffectsHudWidget_C, ActiveEffectEntryWidget_29) == 0x0002F8, "Member 'UActiveEffectsHudWidget_C::ActiveEffectEntryWidget_29' has a wrong offset!");
static_assert(offsetof(UActiveEffectsHudWidget_C, EffectList) == 0x000300, "Member 'UActiveEffectsHudWidget_C::EffectList' has a wrong offset!");
static_assert(offsetof(UActiveEffectsHudWidget_C, CurrentPlayer) == 0x000308, "Member 'UActiveEffectsHudWidget_C::CurrentPlayer' has a wrong offset!");
static_assert(offsetof(UActiveEffectsHudWidget_C, DelayedEffects) == 0x000310, "Member 'UActiveEffectsHudWidget_C::DelayedEffects' has a wrong offset!");
static_assert(offsetof(UActiveEffectsHudWidget_C, Timestamps) == 0x000360, "Member 'UActiveEffectsHudWidget_C::Timestamps' has a wrong offset!");

}

