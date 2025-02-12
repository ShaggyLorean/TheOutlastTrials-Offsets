﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputBindingEntryWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "OPP_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InputBindingEntryWidget.InputBindingEntryWidget_C
// 0x00F8 (0x03D8 - 0x02E0)
class UInputBindingEntryWidget_C final : public URBMenuControlMappingEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                HoveringDetection;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Name_0;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionIconWidget_C*                    PrimaryActionIconWidget;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PrimaryRemappingButton;                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PrimaryRemappingImage;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PrimaryValueBackground;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionIconWidget_C*                    SecondaryActionIconWidget;                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SecondaryRemappingdButton;                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SecondaryRemappingImage;                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SecondaryValueBackground;                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBackground;                                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputBindingsMenu_C*                   ParentMenu;                                        // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputBindingEntryWidget_C*             NextWidget;                                        // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputBindingEntryWidget_C*             PreviousWidget;                                    // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            HoveredTint;                                       // 0x0358(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            HoveredTint_Semi;                                  // 0x0380(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            NormalTint;                                        // 0x03A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsRemappingPrimary;                               // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_InputBindingEntryWidget(int32 EntryPoint);
	void UpdateRemappingStatus(bool bIsRemappingInProgress, bool bIsRemappingPrimary_0);
	void BndEvt__InputBindingEntryWidget_SecondaryRebindButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_131_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Init(class UInputBindingsMenu_C* ParentMenu_0);
	void RefreshValue();
	void Highlight();
	void Downplay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InputBindingEntryWidget_C">();
	}
	static class UInputBindingEntryWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputBindingEntryWidget_C>();
	}
};
static_assert(alignof(UInputBindingEntryWidget_C) == 0x000008, "Wrong alignment on UInputBindingEntryWidget_C");
static_assert(sizeof(UInputBindingEntryWidget_C) == 0x0003D8, "Wrong size on UInputBindingEntryWidget_C");
static_assert(offsetof(UInputBindingEntryWidget_C, UberGraphFrame) == 0x0002E0, "Member 'UInputBindingEntryWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, HoveringDetection) == 0x0002E8, "Member 'UInputBindingEntryWidget_C::HoveringDetection' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, Name_0) == 0x0002F0, "Member 'UInputBindingEntryWidget_C::Name_0' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, PrimaryActionIconWidget) == 0x0002F8, "Member 'UInputBindingEntryWidget_C::PrimaryActionIconWidget' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, PrimaryRemappingButton) == 0x000300, "Member 'UInputBindingEntryWidget_C::PrimaryRemappingButton' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, PrimaryRemappingImage) == 0x000308, "Member 'UInputBindingEntryWidget_C::PrimaryRemappingImage' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, PrimaryValueBackground) == 0x000310, "Member 'UInputBindingEntryWidget_C::PrimaryValueBackground' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, SecondaryActionIconWidget) == 0x000318, "Member 'UInputBindingEntryWidget_C::SecondaryActionIconWidget' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, SecondaryRemappingdButton) == 0x000320, "Member 'UInputBindingEntryWidget_C::SecondaryRemappingdButton' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, SecondaryRemappingImage) == 0x000328, "Member 'UInputBindingEntryWidget_C::SecondaryRemappingImage' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, SecondaryValueBackground) == 0x000330, "Member 'UInputBindingEntryWidget_C::SecondaryValueBackground' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, TitleBackground) == 0x000338, "Member 'UInputBindingEntryWidget_C::TitleBackground' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, ParentMenu) == 0x000340, "Member 'UInputBindingEntryWidget_C::ParentMenu' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, NextWidget) == 0x000348, "Member 'UInputBindingEntryWidget_C::NextWidget' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, PreviousWidget) == 0x000350, "Member 'UInputBindingEntryWidget_C::PreviousWidget' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, HoveredTint) == 0x000358, "Member 'UInputBindingEntryWidget_C::HoveredTint' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, HoveredTint_Semi) == 0x000380, "Member 'UInputBindingEntryWidget_C::HoveredTint_Semi' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, NormalTint) == 0x0003A8, "Member 'UInputBindingEntryWidget_C::NormalTint' has a wrong offset!");
static_assert(offsetof(UInputBindingEntryWidget_C, bIsRemappingPrimary) == 0x0003D0, "Member 'UInputBindingEntryWidget_C::bIsRemappingPrimary' has a wrong offset!");

}

