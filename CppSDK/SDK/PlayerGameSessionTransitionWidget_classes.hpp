﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerGameSessionTransitionWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C
// 0x0060 (0x02D0 - 0x0270)
class UPlayerGameSessionTransitionWidget_C final : public URBPlayerGameSessionTransitionWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background_1;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RorchachOverlay;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_48;                                      // 0x0298(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 vignette;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShouldShow;                                       // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bPlayingAnim;                                      // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShowing;                                          // 0x02AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2AB[0x5];                                      // 0x02AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   TransitionText;                                    // 0x02B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bFromTrial;                                        // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PlayerGameSessionTransitionWidget(int32 EntryPoint);
	void Construct();
	void Update();
	void FadeInCompleted();
	void Event_Hide();
	void Event_Show();
	void FadeOutCompleted();
	class FText GetTransitionText();
	class FText GetProgressionText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerGameSessionTransitionWidget_C">();
	}
	static class UPlayerGameSessionTransitionWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerGameSessionTransitionWidget_C>();
	}
};
static_assert(alignof(UPlayerGameSessionTransitionWidget_C) == 0x000008, "Wrong alignment on UPlayerGameSessionTransitionWidget_C");
static_assert(sizeof(UPlayerGameSessionTransitionWidget_C) == 0x0002D0, "Wrong size on UPlayerGameSessionTransitionWidget_C");
static_assert(offsetof(UPlayerGameSessionTransitionWidget_C, UberGraphFrame) == 0x000270, "Member 'UPlayerGameSessionTransitionWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerGameSessionTransitionWidget_C, FadeIn) == 0x000278, "Member 'UPlayerGameSessionTransitionWidget_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UPlayerGameSessionTransitionWidget_C, Background_1) == 0x000280, "Member 'UPlayerGameSessionTransitionWidget_C::Background_1' has a wrong offset!");
static_assert(offsetof(UPlayerGameSessionTransitionWidget_C, RorchachOverlay) == 0x000288, "Member 'UPlayerGameSessionTransitionWidget_C::RorchachOverlay' has a wrong offset!");
static_assert(offsetof(UPlayerGameSessionTransitionWidget_C, TextBlock) == 0x000290, "Member 'UPlayerGameSessionTransitionWidget_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UPlayerGameSessionTransitionWidget_C, TextBlock_48) == 0x000298, "Member 'UPlayerGameSessionTransitionWidget_C::TextBlock_48' has a wrong offset!");
static_assert(offsetof(UPlayerGameSessionTransitionWidget_C, vignette) == 0x0002A0, "Member 'UPlayerGameSessionTransitionWidget_C::vignette' has a wrong offset!");
static_assert(offsetof(UPlayerGameSessionTransitionWidget_C, bShouldShow) == 0x0002A8, "Member 'UPlayerGameSessionTransitionWidget_C::bShouldShow' has a wrong offset!");
static_assert(offsetof(UPlayerGameSessionTransitionWidget_C, bPlayingAnim) == 0x0002A9, "Member 'UPlayerGameSessionTransitionWidget_C::bPlayingAnim' has a wrong offset!");
static_assert(offsetof(UPlayerGameSessionTransitionWidget_C, bShowing) == 0x0002AA, "Member 'UPlayerGameSessionTransitionWidget_C::bShowing' has a wrong offset!");
static_assert(offsetof(UPlayerGameSessionTransitionWidget_C, TransitionText) == 0x0002B0, "Member 'UPlayerGameSessionTransitionWidget_C::TransitionText' has a wrong offset!");
static_assert(offsetof(UPlayerGameSessionTransitionWidget_C, bFromTrial) == 0x0002C8, "Member 'UPlayerGameSessionTransitionWidget_C::bFromTrial' has a wrong offset!");

}

