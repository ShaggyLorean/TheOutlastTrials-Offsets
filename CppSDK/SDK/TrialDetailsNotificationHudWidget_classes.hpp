﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TrialDetailsNotificationHudWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TrialDetailsNotificationHudWidget.TrialDetailsNotificationHudWidget_C
// 0x0088 (0x0370 - 0x02E8)
class UTrialDetailsNotificationHudWidget_C final : public URBHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideAnimation;                                     // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnimation;                                     // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_116;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        RBMenuButton;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TrialBoardProgramBorder;                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TrialBoardProgramName;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TrialBoardTrialDifficulty;                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TrialBoardTrialName;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TrialBoardTrialType;                               // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TrialDetailsBox;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TrialImage;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TrialImageContainer;                               // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ARBPlayer*                              CurrentPlayer;                                     // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowing;                                          // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TrialDetailsNotificationHudWidget(int32 EntryPoint);
	void Event_Show();
	void Event_Hide();
	void Show(const struct FRBTrialHudNotificationDetails& details);
	void OnLoaded_76A8266E46F538C023072980EA257A98(class UObject* Loaded);
	void Hide(bool bPlayTransition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TrialDetailsNotificationHudWidget_C">();
	}
	static class UTrialDetailsNotificationHudWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTrialDetailsNotificationHudWidget_C>();
	}
};
static_assert(alignof(UTrialDetailsNotificationHudWidget_C) == 0x000008, "Wrong alignment on UTrialDetailsNotificationHudWidget_C");
static_assert(sizeof(UTrialDetailsNotificationHudWidget_C) == 0x000370, "Wrong size on UTrialDetailsNotificationHudWidget_C");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, UberGraphFrame) == 0x0002E8, "Member 'UTrialDetailsNotificationHudWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, HideAnimation) == 0x0002F0, "Member 'UTrialDetailsNotificationHudWidget_C::HideAnimation' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, ShowAnimation) == 0x0002F8, "Member 'UTrialDetailsNotificationHudWidget_C::ShowAnimation' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, Image_116) == 0x000300, "Member 'UTrialDetailsNotificationHudWidget_C::Image_116' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, Overlay_0) == 0x000308, "Member 'UTrialDetailsNotificationHudWidget_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, RBMenuButton) == 0x000310, "Member 'UTrialDetailsNotificationHudWidget_C::RBMenuButton' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, RetainerBox_0) == 0x000318, "Member 'UTrialDetailsNotificationHudWidget_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, TrialBoardProgramBorder) == 0x000320, "Member 'UTrialDetailsNotificationHudWidget_C::TrialBoardProgramBorder' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, TrialBoardProgramName) == 0x000328, "Member 'UTrialDetailsNotificationHudWidget_C::TrialBoardProgramName' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, TrialBoardTrialDifficulty) == 0x000330, "Member 'UTrialDetailsNotificationHudWidget_C::TrialBoardTrialDifficulty' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, TrialBoardTrialName) == 0x000338, "Member 'UTrialDetailsNotificationHudWidget_C::TrialBoardTrialName' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, TrialBoardTrialType) == 0x000340, "Member 'UTrialDetailsNotificationHudWidget_C::TrialBoardTrialType' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, TrialDetailsBox) == 0x000348, "Member 'UTrialDetailsNotificationHudWidget_C::TrialDetailsBox' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, TrialImage) == 0x000350, "Member 'UTrialDetailsNotificationHudWidget_C::TrialImage' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, TrialImageContainer) == 0x000358, "Member 'UTrialDetailsNotificationHudWidget_C::TrialImageContainer' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, CurrentPlayer) == 0x000360, "Member 'UTrialDetailsNotificationHudWidget_C::CurrentPlayer' has a wrong offset!");
static_assert(offsetof(UTrialDetailsNotificationHudWidget_C, bShowing) == 0x000368, "Member 'UTrialDetailsNotificationHudWidget_C::bShowing' has a wrong offset!");

}
