﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PolicyDocumentMenuWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C
// 0x0030 (0x0348 - 0x0318)
class UPolicyDocumentMenuWidget_C final : public URBPolicyDocumentMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URBMenuButton_C*                        AcceptBtn;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ContentTextBlock;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             DocumentScrollBox;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bCanClose;                                         // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_339[0x3];                                      // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BaseMultiplier;                                    // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpeedAccumulator;                                  // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PolicyDocumentMenuWidget(int32 EntryPoint);
	void Event_OnFocusMenu();
	void Event_OnPush();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void Event_MenuConfirm_Pressed();
	void BndEvt__PolicyDocumentMenuWidget_AcceptBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	void Event_Setup(const class FString& Content);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PolicyDocumentMenuWidget_C">();
	}
	static class UPolicyDocumentMenuWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPolicyDocumentMenuWidget_C>();
	}
};
static_assert(alignof(UPolicyDocumentMenuWidget_C) == 0x000008, "Wrong alignment on UPolicyDocumentMenuWidget_C");
static_assert(sizeof(UPolicyDocumentMenuWidget_C) == 0x000348, "Wrong size on UPolicyDocumentMenuWidget_C");
static_assert(offsetof(UPolicyDocumentMenuWidget_C, UberGraphFrame) == 0x000318, "Member 'UPolicyDocumentMenuWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPolicyDocumentMenuWidget_C, AcceptBtn) == 0x000320, "Member 'UPolicyDocumentMenuWidget_C::AcceptBtn' has a wrong offset!");
static_assert(offsetof(UPolicyDocumentMenuWidget_C, ContentTextBlock) == 0x000328, "Member 'UPolicyDocumentMenuWidget_C::ContentTextBlock' has a wrong offset!");
static_assert(offsetof(UPolicyDocumentMenuWidget_C, DocumentScrollBox) == 0x000330, "Member 'UPolicyDocumentMenuWidget_C::DocumentScrollBox' has a wrong offset!");
static_assert(offsetof(UPolicyDocumentMenuWidget_C, bCanClose) == 0x000338, "Member 'UPolicyDocumentMenuWidget_C::bCanClose' has a wrong offset!");
static_assert(offsetof(UPolicyDocumentMenuWidget_C, BaseMultiplier) == 0x00033C, "Member 'UPolicyDocumentMenuWidget_C::BaseMultiplier' has a wrong offset!");
static_assert(offsetof(UPolicyDocumentMenuWidget_C, SpeedAccumulator) == 0x000340, "Member 'UPolicyDocumentMenuWidget_C::SpeedAccumulator' has a wrong offset!");

}

