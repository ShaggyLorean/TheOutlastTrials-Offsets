﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialMenu_Slider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "OPP_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialMenu_Slider.SocialMenu_Slider_C
// 0x0218 (0x0480 - 0x0268)
class USocialMenu_Slider_C final : public URBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         EditingBox;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                HoveringDetection;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UArrowButton_C*                         LeftArrowButton;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UArrowButton_C*                         RightArrowButton;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           SliderBarDisplay;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                SliderValue;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Value;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(float Value)>   OnValueUpdated;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bEnabled;                                          // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            EnabledIcon;                                       // 0x02D0(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            DisabledIcon;                                      // 0x0358(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            EnabledZeroValueIcon;                              // 0x03E0(0x0088)(Edit, BlueprintVisible)
	float                                         CurrentValue;                                      // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUpdateValue;                                      // 0x046C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUpdatePlus;                                       // 0x046D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHovered;                                          // 0x046E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F[0x1];                                      // 0x046F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LastAnalogValue;                                   // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastInitialLRInputTimestamp;                       // 0x0474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastLRInputPressedTimestamp;                       // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SocialMenu_Slider(int32 EntryPoint);
	void BndEvt__SocialMenu_Slider_RightArrowButton_K2Node_ComponentBoundEvent_14_OnUnhovered__DelegateSignature();
	void BndEvt__SocialMenu_Slider_RightArrowButton_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature();
	void BndEvt__SocialMenu_Slider_LeftArrowButton_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature();
	void BndEvt__SocialMenu_Slider_LeftArrowButton_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature();
	void Construct();
	void Event_InputSourceChanged(bool bIsGamepad);
	void BndEvt__SocialMenu_Slider_RightArrowButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__SocialMenu_Slider_LeftArrowButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__SocialMenu_Slider_HoveringDetection_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SocialMenu_Slider_HoveringDetection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SliderValue_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value_0);
	void Setup();
	void SetEnabled(bool bInEnabled);
	void SetValue(float Value_0);
	void SetValueText();
	void OnValueChanged(float CurrentValue_0);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void SetHovered(bool bInHovered);
	void RefreshDisplay();
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void HandleSliderOnInput(bool bLeftPressed, int32 timeBasedMultiplier);
	void GetArrowButton(bool Left, class UArrowButton_C** NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialMenu_Slider_C">();
	}
	static class USocialMenu_Slider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialMenu_Slider_C>();
	}
};
static_assert(alignof(USocialMenu_Slider_C) == 0x000008, "Wrong alignment on USocialMenu_Slider_C");
static_assert(sizeof(USocialMenu_Slider_C) == 0x000480, "Wrong size on USocialMenu_Slider_C");
static_assert(offsetof(USocialMenu_Slider_C, UberGraphFrame) == 0x000268, "Member 'USocialMenu_Slider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, Background) == 0x000270, "Member 'USocialMenu_Slider_C::Background' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, EditingBox) == 0x000278, "Member 'USocialMenu_Slider_C::EditingBox' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, HoveringDetection) == 0x000280, "Member 'USocialMenu_Slider_C::HoveringDetection' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, Icon) == 0x000288, "Member 'USocialMenu_Slider_C::Icon' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, LeftArrowButton) == 0x000290, "Member 'USocialMenu_Slider_C::LeftArrowButton' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, RightArrowButton) == 0x000298, "Member 'USocialMenu_Slider_C::RightArrowButton' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, SliderBarDisplay) == 0x0002A0, "Member 'USocialMenu_Slider_C::SliderBarDisplay' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, SliderValue) == 0x0002A8, "Member 'USocialMenu_Slider_C::SliderValue' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, Value) == 0x0002B0, "Member 'USocialMenu_Slider_C::Value' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, OnValueUpdated) == 0x0002B8, "Member 'USocialMenu_Slider_C::OnValueUpdated' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, bEnabled) == 0x0002C8, "Member 'USocialMenu_Slider_C::bEnabled' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, EnabledIcon) == 0x0002D0, "Member 'USocialMenu_Slider_C::EnabledIcon' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, DisabledIcon) == 0x000358, "Member 'USocialMenu_Slider_C::DisabledIcon' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, EnabledZeroValueIcon) == 0x0003E0, "Member 'USocialMenu_Slider_C::EnabledZeroValueIcon' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, CurrentValue) == 0x000468, "Member 'USocialMenu_Slider_C::CurrentValue' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, bUpdateValue) == 0x00046C, "Member 'USocialMenu_Slider_C::bUpdateValue' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, bUpdatePlus) == 0x00046D, "Member 'USocialMenu_Slider_C::bUpdatePlus' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, bHovered) == 0x00046E, "Member 'USocialMenu_Slider_C::bHovered' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, LastAnalogValue) == 0x000470, "Member 'USocialMenu_Slider_C::LastAnalogValue' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, LastInitialLRInputTimestamp) == 0x000474, "Member 'USocialMenu_Slider_C::LastInitialLRInputTimestamp' has a wrong offset!");
static_assert(offsetof(USocialMenu_Slider_C, LastLRInputPressedTimestamp) == 0x000478, "Member 'USocialMenu_Slider_C::LastLRInputPressedTimestamp' has a wrong offset!");

}
