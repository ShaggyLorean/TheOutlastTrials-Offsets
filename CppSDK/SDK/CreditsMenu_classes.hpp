﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreditsMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CreditsMenu.CreditsMenu_C
// 0x0088 (0x0390 - 0x0308)
class UCreditsMenu_C final : public URBCutsceneMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeInPrompts;                                     // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BackButtonFadeIn;                                  // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 bg;                                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             CreditsScroll;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        FastForwardPrompt;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                FinalSpacer;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_61;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                InitialSpacer;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PromptsBox;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        SkipPrompt;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 vignette;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         ScrollTarget;                                      // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBinkMediaPlayer*                       BinkBackgroundVideoPlayer;                         // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         scroll_speed;                                      // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37C[0x4];                                      // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SkipTimerHandle;                                   // 0x0380(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsShowingSkipPrompt;                              // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CreditsMenu(int32 EntryPoint);
	void BndEvt__CreditsMenu_PromptsBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CreditsMenu_PromptsBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void Event_ShowSkipPrompt(bool bShouldStartHideTimer);
	void HideSkipPrompt();
	void Event_EndCutsceneRequested();
	void CustomEvent_1();
	void CustomEvent_0();
	void Event_OnFocusMenu();
	void Event_OnPop();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Finished_0560D27B4148CBD98B8758ADF411BFC7();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CreditsMenu_C">();
	}
	static class UCreditsMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreditsMenu_C>();
	}
};
static_assert(alignof(UCreditsMenu_C) == 0x000008, "Wrong alignment on UCreditsMenu_C");
static_assert(sizeof(UCreditsMenu_C) == 0x000390, "Wrong size on UCreditsMenu_C");
static_assert(offsetof(UCreditsMenu_C, UberGraphFrame) == 0x000308, "Member 'UCreditsMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, FadeInPrompts) == 0x000310, "Member 'UCreditsMenu_C::FadeInPrompts' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, BackButtonFadeIn) == 0x000318, "Member 'UCreditsMenu_C::BackButtonFadeIn' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, bg) == 0x000320, "Member 'UCreditsMenu_C::bg' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, CreditsScroll) == 0x000328, "Member 'UCreditsMenu_C::CreditsScroll' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, FastForwardPrompt) == 0x000330, "Member 'UCreditsMenu_C::FastForwardPrompt' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, FinalSpacer) == 0x000338, "Member 'UCreditsMenu_C::FinalSpacer' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, Image_61) == 0x000340, "Member 'UCreditsMenu_C::Image_61' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, InitialSpacer) == 0x000348, "Member 'UCreditsMenu_C::InitialSpacer' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, PromptsBox) == 0x000350, "Member 'UCreditsMenu_C::PromptsBox' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, SkipPrompt) == 0x000358, "Member 'UCreditsMenu_C::SkipPrompt' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, vignette) == 0x000360, "Member 'UCreditsMenu_C::vignette' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, ScrollTarget) == 0x000368, "Member 'UCreditsMenu_C::ScrollTarget' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, BinkBackgroundVideoPlayer) == 0x000370, "Member 'UCreditsMenu_C::BinkBackgroundVideoPlayer' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, scroll_speed) == 0x000378, "Member 'UCreditsMenu_C::scroll_speed' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, SkipTimerHandle) == 0x000380, "Member 'UCreditsMenu_C::SkipTimerHandle' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, bIsShowingSkipPrompt) == 0x000388, "Member 'UCreditsMenu_C::bIsShowingSkipPrompt' has a wrong offset!");

}
