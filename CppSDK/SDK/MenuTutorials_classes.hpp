﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuTutorials

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "OPP_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MenuTutorials.MenuTutorials_C
// 0x0098 (0x03A0 - 0x0308)
class UMenuTutorials_C final : public URBMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Border;                                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                focusAnchor;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            popupAnchor;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Tutorial_Text;                                     // 0x0340(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	EMenuPlacement                                Popup_Placement;                                   // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               backgroundMaterial;                                // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitialized;                                     // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_369[0x3];                                      // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           focusTargetParams;                                 // 0x036C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           focusCurrentParams;                                // 0x037C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          needsFocusEffect;                                  // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38D[0x3];                                      // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         fadeValue;                                         // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394[0x4];                                      // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Popup_Anchor_Info;                                 // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MenuTutorials(int32 EntryPoint);
	void Destruct();
	void OnMenuConfirm();
	void HideMenu();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnMenuOpenChanged_Event_0(bool bIsOpen);
	void Event_OnPush();
	void Construct();
	void Finished_FAE44480483B6DD5E75A0BA71A890721();
	void Finished_5E4AE732454933DB073342A872BDF217();
	void Initialize(const class FText& TutorialText, class UWidget* popUpAnchorInfo, EMenuPlacement popupPlacement, class UWidget* focusAnchorInfo, bool showBorder);
	class UUserWidget* OnGetUserMenuContent_0();
	void SetAnchorInfo(class UWidget* anchorInfo, class UCanvasPanelSlot* Slot_0);
	void Refresh(const class FText& TutorialText, class UWidget* popUpAnchorInfo, EMenuPlacement popupPlacement, class UWidget* focusAnchorInfo, bool showBorder);
	void isShowingTutorial(bool* isShowingTutorial_0);
	void MenuTutorials_AutoGenFunc();
	void UpdateMaterialParams(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MenuTutorials_C">();
	}
	static class UMenuTutorials_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenuTutorials_C>();
	}
};
static_assert(alignof(UMenuTutorials_C) == 0x000008, "Wrong alignment on UMenuTutorials_C");
static_assert(sizeof(UMenuTutorials_C) == 0x0003A0, "Wrong size on UMenuTutorials_C");
static_assert(offsetof(UMenuTutorials_C, UberGraphFrame) == 0x000308, "Member 'UMenuTutorials_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, FadeOut) == 0x000310, "Member 'UMenuTutorials_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, FadeIn) == 0x000318, "Member 'UMenuTutorials_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, Background) == 0x000320, "Member 'UMenuTutorials_C::Background' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, Border) == 0x000328, "Member 'UMenuTutorials_C::Border' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, focusAnchor) == 0x000330, "Member 'UMenuTutorials_C::focusAnchor' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, popupAnchor) == 0x000338, "Member 'UMenuTutorials_C::popupAnchor' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, Tutorial_Text) == 0x000340, "Member 'UMenuTutorials_C::Tutorial_Text' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, Popup_Placement) == 0x000358, "Member 'UMenuTutorials_C::Popup_Placement' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, backgroundMaterial) == 0x000360, "Member 'UMenuTutorials_C::backgroundMaterial' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, IsInitialized) == 0x000368, "Member 'UMenuTutorials_C::IsInitialized' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, focusTargetParams) == 0x00036C, "Member 'UMenuTutorials_C::focusTargetParams' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, focusCurrentParams) == 0x00037C, "Member 'UMenuTutorials_C::focusCurrentParams' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, needsFocusEffect) == 0x00038C, "Member 'UMenuTutorials_C::needsFocusEffect' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, fadeValue) == 0x000390, "Member 'UMenuTutorials_C::fadeValue' has a wrong offset!");
static_assert(offsetof(UMenuTutorials_C, Popup_Anchor_Info) == 0x000398, "Member 'UMenuTutorials_C::Popup_Anchor_Info' has a wrong offset!");

}
