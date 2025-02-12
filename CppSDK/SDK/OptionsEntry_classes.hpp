﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "BaseOptionsEntry_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsEntry.OptionsEntry_C
// 0x00C0 (0x0438 - 0x0378)
class UOptionsEntry_C final : public UBaseOptionsEntry_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_OptionsEntry_C;                     // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OptionValue_FadeOut;                               // 0x0380(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                GlobalHoveringDetection;                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_0;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OptionTitle;                                       // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OptionValue;                                       // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Slider_Gauge;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UArrowButton_C*                         Slider_LeftArrowBtn;                               // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UArrowButton_C*                         Slider_RightArrowBtn;                              // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                SliderElement;                                     // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             SliderSelection;                                   // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                          SliderValue;                                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          SliderValueFilter;                                 // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SliderValueFrame;                                  // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SliderValueHoveringDetection;                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SubEntryBtn;                                       // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SubEntryTitle;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBackground;                                   // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ValueBackground;                                   // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UValueCounter_C*                        ValueCounter;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ValueSelectionArrows;                              // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UArrowButton_C*                         VS_LeftArrowBtn;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UArrowButton_C*                         VS_RightArrowBtn;                                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bToggleCandidate;                                  // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CurrentHighlightStatus;                            // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_OptionsEntry(int32 EntryPoint);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Construct();
	void BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature();
	void BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature();
	void BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_14_OnUnhovered__DelegateSignature();
	void BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature();
	void BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature();
	void BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
	void BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_16_OnUnhovered__DelegateSignature();
	void BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature();
	void BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__SliderElement_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__SliderValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__Button_112_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SubEntryBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetValue(const class FText& OptionValue_0);
	void Set_Button_Type(bool IsSubEntry, const class FText& _Optionnal_SubEntryTitle, bool IsSlider_0);
	void SetSliderButton(bool IsSliderEntry);
	void HighlightEntry();
	void DownplayEntry();
	void Event_UpdateSliderValue(float Value, const class FText& textOverride);
	void Event_UpdateTextValue(const class FText& NewValue);
	void UpdateValueFont();
	void UpdateSliderBar();
	void RefreshEntry();
	void RefreshCounter();
	void ColorChangedEntries();
	void RefreshDisplay();
	void UpdateEnableStatus();
	void SetupCounter();
	void GetArrowBtn(bool Left, class UArrowButton_C** ArrowButton);
	void HandleSliderOnInput(bool bLeftPressed, int32 timeBasedMultiplier);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsEntry_C">();
	}
	static class UOptionsEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsEntry_C>();
	}
};
static_assert(alignof(UOptionsEntry_C) == 0x000008, "Wrong alignment on UOptionsEntry_C");
static_assert(sizeof(UOptionsEntry_C) == 0x000438, "Wrong size on UOptionsEntry_C");
static_assert(offsetof(UOptionsEntry_C, UberGraphFrame_OptionsEntry_C) == 0x000378, "Member 'UOptionsEntry_C::UberGraphFrame_OptionsEntry_C' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, OptionValue_FadeOut) == 0x000380, "Member 'UOptionsEntry_C::OptionValue_FadeOut' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, GlobalHoveringDetection) == 0x000388, "Member 'UOptionsEntry_C::GlobalHoveringDetection' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, GridPanel_0) == 0x000390, "Member 'UOptionsEntry_C::GridPanel_0' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, OptionTitle) == 0x000398, "Member 'UOptionsEntry_C::OptionTitle' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, OptionValue) == 0x0003A0, "Member 'UOptionsEntry_C::OptionValue' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, Slider_Gauge) == 0x0003A8, "Member 'UOptionsEntry_C::Slider_Gauge' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, Slider_LeftArrowBtn) == 0x0003B0, "Member 'UOptionsEntry_C::Slider_LeftArrowBtn' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, Slider_RightArrowBtn) == 0x0003B8, "Member 'UOptionsEntry_C::Slider_RightArrowBtn' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, SliderElement) == 0x0003C0, "Member 'UOptionsEntry_C::SliderElement' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, SliderSelection) == 0x0003C8, "Member 'UOptionsEntry_C::SliderSelection' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, SliderValue) == 0x0003D0, "Member 'UOptionsEntry_C::SliderValue' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, SliderValueFilter) == 0x0003D8, "Member 'UOptionsEntry_C::SliderValueFilter' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, SliderValueFrame) == 0x0003E0, "Member 'UOptionsEntry_C::SliderValueFrame' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, SliderValueHoveringDetection) == 0x0003E8, "Member 'UOptionsEntry_C::SliderValueHoveringDetection' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, SubEntryBtn) == 0x0003F0, "Member 'UOptionsEntry_C::SubEntryBtn' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, SubEntryTitle) == 0x0003F8, "Member 'UOptionsEntry_C::SubEntryTitle' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, TitleBackground) == 0x000400, "Member 'UOptionsEntry_C::TitleBackground' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, ValueBackground) == 0x000408, "Member 'UOptionsEntry_C::ValueBackground' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, ValueCounter) == 0x000410, "Member 'UOptionsEntry_C::ValueCounter' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, ValueSelectionArrows) == 0x000418, "Member 'UOptionsEntry_C::ValueSelectionArrows' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, VS_LeftArrowBtn) == 0x000420, "Member 'UOptionsEntry_C::VS_LeftArrowBtn' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, VS_RightArrowBtn) == 0x000428, "Member 'UOptionsEntry_C::VS_RightArrowBtn' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, bToggleCandidate) == 0x000430, "Member 'UOptionsEntry_C::bToggleCandidate' has a wrong offset!");
static_assert(offsetof(UOptionsEntry_C, CurrentHighlightStatus) == 0x000431, "Member 'UOptionsEntry_C::CurrentHighlightStatus' has a wrong offset!");

}

