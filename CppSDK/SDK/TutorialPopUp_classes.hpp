﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialPopUp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TutorialPopUp.TutorialPopUp_C
// 0x0030 (0x0290 - 0x0260)
class UTutorialPopUp_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        RBMenuButton;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         Text;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              EventOnClicked;                                    // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_TutorialPopUp(int32 EntryPoint);
	void BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	void Construct();
	void Initialize(const class FText& Text_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TutorialPopUp_C">();
	}
	static class UTutorialPopUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTutorialPopUp_C>();
	}
};
static_assert(alignof(UTutorialPopUp_C) == 0x000008, "Wrong alignment on UTutorialPopUp_C");
static_assert(sizeof(UTutorialPopUp_C) == 0x000290, "Wrong size on UTutorialPopUp_C");
static_assert(offsetof(UTutorialPopUp_C, UberGraphFrame) == 0x000260, "Member 'UTutorialPopUp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTutorialPopUp_C, Background) == 0x000268, "Member 'UTutorialPopUp_C::Background' has a wrong offset!");
static_assert(offsetof(UTutorialPopUp_C, RBMenuButton) == 0x000270, "Member 'UTutorialPopUp_C::RBMenuButton' has a wrong offset!");
static_assert(offsetof(UTutorialPopUp_C, Text) == 0x000278, "Member 'UTutorialPopUp_C::Text' has a wrong offset!");
static_assert(offsetof(UTutorialPopUp_C, EventOnClicked) == 0x000280, "Member 'UTutorialPopUp_C::EventOnClicked' has a wrong offset!");

}

