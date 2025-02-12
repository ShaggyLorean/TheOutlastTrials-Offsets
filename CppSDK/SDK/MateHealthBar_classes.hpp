﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MateHealthBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MateHealthBar.MateHealthBar_C
// 0x0090 (0x02F0 - 0x0260)
class UMateHealthBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeInFadeOut;                                     // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInBar;                                         // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMateHealthBarElement_C*                FifthBracket;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMateHealthBarElement_C*                FirstBracket;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMateHealthBarElement_C*                FourBracket;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HealthBar;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_HealthBar;                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMateHealthBarElement_C*                SecondBracket;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMateHealthBarElement_C*                ThirdBracket;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShouldShowEmpty;                                   // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B1[0x3];                                      // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurrentHealth;                                     // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PreviousHealth;                                    // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               HealthBarMaterial;                                 // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMateHealthBarElement_C*>        MateHealthBrackets;                                // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UMateHealthBarElement_C*                CurrentAnimatedBracket;                            // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FinishingBracket;                                  // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WasDown;                                           // 0x02E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OngoingTweens;                                     // 0x02E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E6[0x2];                                      // 0x02E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BarHeight;                                         // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BracketsInitialized;                               // 0x02EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          debug;                                             // 0x02ED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MateHealthBar(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void ProcessHealthEvent(float newHealth, bool SkipAnims);
	void ChainTweens();
	void UpdateFifthBarVisibility(bool Show);
	void TryConstructBracketsArray();
	void OnMaxHealthUpdated(float maxHealth);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MateHealthBar_C">();
	}
	static class UMateHealthBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMateHealthBar_C>();
	}
};
static_assert(alignof(UMateHealthBar_C) == 0x000008, "Wrong alignment on UMateHealthBar_C");
static_assert(sizeof(UMateHealthBar_C) == 0x0002F0, "Wrong size on UMateHealthBar_C");
static_assert(offsetof(UMateHealthBar_C, UberGraphFrame) == 0x000260, "Member 'UMateHealthBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, FadeInFadeOut) == 0x000268, "Member 'UMateHealthBar_C::FadeInFadeOut' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, FadeInBar) == 0x000270, "Member 'UMateHealthBar_C::FadeInBar' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, FifthBracket) == 0x000278, "Member 'UMateHealthBar_C::FifthBracket' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, FirstBracket) == 0x000280, "Member 'UMateHealthBar_C::FirstBracket' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, FourBracket) == 0x000288, "Member 'UMateHealthBar_C::FourBracket' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, HealthBar) == 0x000290, "Member 'UMateHealthBar_C::HealthBar' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, InvalidationBox_HealthBar) == 0x000298, "Member 'UMateHealthBar_C::InvalidationBox_HealthBar' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, SecondBracket) == 0x0002A0, "Member 'UMateHealthBar_C::SecondBracket' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, ThirdBracket) == 0x0002A8, "Member 'UMateHealthBar_C::ThirdBracket' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, ShouldShowEmpty) == 0x0002B0, "Member 'UMateHealthBar_C::ShouldShowEmpty' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, CurrentHealth) == 0x0002B4, "Member 'UMateHealthBar_C::CurrentHealth' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, PreviousHealth) == 0x0002B8, "Member 'UMateHealthBar_C::PreviousHealth' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, HealthBarMaterial) == 0x0002C0, "Member 'UMateHealthBar_C::HealthBarMaterial' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, MateHealthBrackets) == 0x0002C8, "Member 'UMateHealthBar_C::MateHealthBrackets' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, CurrentAnimatedBracket) == 0x0002D8, "Member 'UMateHealthBar_C::CurrentAnimatedBracket' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, FinishingBracket) == 0x0002E0, "Member 'UMateHealthBar_C::FinishingBracket' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, WasDown) == 0x0002E4, "Member 'UMateHealthBar_C::WasDown' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, OngoingTweens) == 0x0002E5, "Member 'UMateHealthBar_C::OngoingTweens' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, BarHeight) == 0x0002E8, "Member 'UMateHealthBar_C::BarHeight' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, BracketsInitialized) == 0x0002EC, "Member 'UMateHealthBar_C::BracketsInitialized' has a wrong offset!");
static_assert(offsetof(UMateHealthBar_C, debug) == 0x0002ED, "Member 'UMateHealthBar_C::debug' has a wrong offset!");

}

