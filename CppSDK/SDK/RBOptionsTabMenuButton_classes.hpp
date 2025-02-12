﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBOptionsTabMenuButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "OPP_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RBOptionsTabMenuButton.RBOptionsTabMenuButton_C
// 0x00C8 (0x0350 - 0x0288)
class URBOptionsTabMenuButton_C final : public URBMenuTabButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             ButtonTxt;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Delimiter;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Highlight;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MainButton;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x02B8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                            SelectedTextColor;                                 // 0x02D0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            UnSelectedTextColor;                               // 0x02F8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            DisabledTextColor;                                 // 0x0320(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bHovered;                                          // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsLastTabElement;                                 // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_RBOptionsTabMenuButton(int32 EntryPoint);
	void BndEvt__RBOptionsTabMenuButton_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__RBOptionsTabMenuButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void Event_OnSelectedChanged();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Refresh();
	void Disable();
	void SetText(const class FText& Text);
	void SetHovered(bool bInHovered);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RBOptionsTabMenuButton_C">();
	}
	static class URBOptionsTabMenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URBOptionsTabMenuButton_C>();
	}
};
static_assert(alignof(URBOptionsTabMenuButton_C) == 0x000008, "Wrong alignment on URBOptionsTabMenuButton_C");
static_assert(sizeof(URBOptionsTabMenuButton_C) == 0x000350, "Wrong size on URBOptionsTabMenuButton_C");
static_assert(offsetof(URBOptionsTabMenuButton_C, UberGraphFrame) == 0x000288, "Member 'URBOptionsTabMenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URBOptionsTabMenuButton_C, NewAnimation) == 0x000290, "Member 'URBOptionsTabMenuButton_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(URBOptionsTabMenuButton_C, ButtonTxt) == 0x000298, "Member 'URBOptionsTabMenuButton_C::ButtonTxt' has a wrong offset!");
static_assert(offsetof(URBOptionsTabMenuButton_C, Delimiter) == 0x0002A0, "Member 'URBOptionsTabMenuButton_C::Delimiter' has a wrong offset!");
static_assert(offsetof(URBOptionsTabMenuButton_C, Highlight) == 0x0002A8, "Member 'URBOptionsTabMenuButton_C::Highlight' has a wrong offset!");
static_assert(offsetof(URBOptionsTabMenuButton_C, MainButton) == 0x0002B0, "Member 'URBOptionsTabMenuButton_C::MainButton' has a wrong offset!");
static_assert(offsetof(URBOptionsTabMenuButton_C, ButtonText) == 0x0002B8, "Member 'URBOptionsTabMenuButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(URBOptionsTabMenuButton_C, SelectedTextColor) == 0x0002D0, "Member 'URBOptionsTabMenuButton_C::SelectedTextColor' has a wrong offset!");
static_assert(offsetof(URBOptionsTabMenuButton_C, UnSelectedTextColor) == 0x0002F8, "Member 'URBOptionsTabMenuButton_C::UnSelectedTextColor' has a wrong offset!");
static_assert(offsetof(URBOptionsTabMenuButton_C, DisabledTextColor) == 0x000320, "Member 'URBOptionsTabMenuButton_C::DisabledTextColor' has a wrong offset!");
static_assert(offsetof(URBOptionsTabMenuButton_C, bHovered) == 0x000348, "Member 'URBOptionsTabMenuButton_C::bHovered' has a wrong offset!");
static_assert(offsetof(URBOptionsTabMenuButton_C, bIsLastTabElement) == 0x000349, "Member 'URBOptionsTabMenuButton_C::bIsLastTabElement' has a wrong offset!");

}

