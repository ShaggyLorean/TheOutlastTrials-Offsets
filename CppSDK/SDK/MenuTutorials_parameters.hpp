﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuTutorials

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MenuTutorials.MenuTutorials_C.ExecuteUbergraph_MenuTutorials
// 0x00C8 (0x00C8 - 0x0000)
struct MenuTutorials_C_ExecuteUbergraph_MenuTutorials final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bIsOpen)>                 K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsOpen;                        // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B[0x5];                                       // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0078(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URBMenuManager*                         CallFunc_GetMenuManager_ReturnValue;               // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials) == 0x000008, "Wrong alignment on MenuTutorials_C_ExecuteUbergraph_MenuTutorials");
static_assert(sizeof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials) == 0x0000C8, "Wrong size on MenuTutorials_C_ExecuteUbergraph_MenuTutorials");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, EntryPoint) == 0x000000, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::EntryPoint' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000048, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000050, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000058, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000060, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, CallFunc_IsValid_ReturnValue_1) == 0x000069, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, K2Node_CustomEvent_bIsOpen) == 0x00006A, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::K2Node_CustomEvent_bIsOpen' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000070, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, K2Node_Event_MyGeometry) == 0x000078, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, K2Node_Event_InDeltaTime) == 0x0000B0, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, CallFunc_GetMenuManager_ReturnValue) == 0x0000B8, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::CallFunc_GetMenuManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_ExecuteUbergraph_MenuTutorials, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000C0, "Member 'MenuTutorials_C_ExecuteUbergraph_MenuTutorials::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function MenuTutorials.MenuTutorials_C.Tick
// 0x003C (0x003C - 0x0000)
struct MenuTutorials_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuTutorials_C_Tick) == 0x000004, "Wrong alignment on MenuTutorials_C_Tick");
static_assert(sizeof(MenuTutorials_C_Tick) == 0x00003C, "Wrong size on MenuTutorials_C_Tick");
static_assert(offsetof(MenuTutorials_C_Tick, MyGeometry) == 0x000000, "Member 'MenuTutorials_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Tick, InDeltaTime) == 0x000038, "Member 'MenuTutorials_C_Tick::InDeltaTime' has a wrong offset!");

// Function MenuTutorials.MenuTutorials_C.OnMenuOpenChanged_Event_0
// 0x0001 (0x0001 - 0x0000)
struct MenuTutorials_C_OnMenuOpenChanged_Event_0 final
{
public:
	bool                                          bIsOpen;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MenuTutorials_C_OnMenuOpenChanged_Event_0) == 0x000001, "Wrong alignment on MenuTutorials_C_OnMenuOpenChanged_Event_0");
static_assert(sizeof(MenuTutorials_C_OnMenuOpenChanged_Event_0) == 0x000001, "Wrong size on MenuTutorials_C_OnMenuOpenChanged_Event_0");
static_assert(offsetof(MenuTutorials_C_OnMenuOpenChanged_Event_0, bIsOpen) == 0x000000, "Member 'MenuTutorials_C_OnMenuOpenChanged_Event_0::bIsOpen' has a wrong offset!");

// Function MenuTutorials.MenuTutorials_C.Initialize
// 0x0050 (0x0050 - 0x0000)
struct MenuTutorials_C_Initialize final
{
public:
	class FText                                   TutorialText;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                popUpAnchorInfo;                                   // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMenuPlacement                                popupPlacement;                                    // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                focusAnchorInfo;                                   // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          showBorder;                                        // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37[0x1];                                       // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuTutorials_C_Initialize) == 0x000008, "Wrong alignment on MenuTutorials_C_Initialize");
static_assert(sizeof(MenuTutorials_C_Initialize) == 0x000050, "Wrong size on MenuTutorials_C_Initialize");
static_assert(offsetof(MenuTutorials_C_Initialize, TutorialText) == 0x000000, "Member 'MenuTutorials_C_Initialize::TutorialText' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, popUpAnchorInfo) == 0x000018, "Member 'MenuTutorials_C_Initialize::popUpAnchorInfo' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, popupPlacement) == 0x000020, "Member 'MenuTutorials_C_Initialize::popupPlacement' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, focusAnchorInfo) == 0x000028, "Member 'MenuTutorials_C_Initialize::focusAnchorInfo' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, showBorder) == 0x000030, "Member 'MenuTutorials_C_Initialize::showBorder' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, Temp_bool_Variable) == 0x000031, "Member 'MenuTutorials_C_Initialize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, Temp_byte_Variable) == 0x000032, "Member 'MenuTutorials_C_Initialize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, Temp_byte_Variable_1) == 0x000033, "Member 'MenuTutorials_C_Initialize::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'MenuTutorials_C_Initialize::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, CallFunc_BooleanAND_ReturnValue) == 0x000035, "Member 'MenuTutorials_C_Initialize::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, K2Node_Select_Default) == 0x000036, "Member 'MenuTutorials_C_Initialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000038, "Member 'MenuTutorials_C_Initialize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000040, "Member 'MenuTutorials_C_Initialize::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Initialize, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000048, "Member 'MenuTutorials_C_Initialize::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");

// Function MenuTutorials.MenuTutorials_C.OnGetUserMenuContent_0
// 0x0020 (0x0020 - 0x0000)
struct MenuTutorials_C_OnGetUserMenuContent_0 final
{
public:
	class UUserWidget*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UTutorialPopUp_C*                       CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuTutorials_C_OnGetUserMenuContent_0) == 0x000008, "Wrong alignment on MenuTutorials_C_OnGetUserMenuContent_0");
static_assert(sizeof(MenuTutorials_C_OnGetUserMenuContent_0) == 0x000020, "Wrong size on MenuTutorials_C_OnGetUserMenuContent_0");
static_assert(offsetof(MenuTutorials_C_OnGetUserMenuContent_0, ReturnValue) == 0x000000, "Member 'MenuTutorials_C_OnGetUserMenuContent_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_OnGetUserMenuContent_0, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MenuTutorials_C_OnGetUserMenuContent_0::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_OnGetUserMenuContent_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MenuTutorials_C_OnGetUserMenuContent_0::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function MenuTutorials.MenuTutorials_C.SetAnchorInfo
// 0x0070 (0x0070 - 0x0000)
struct MenuTutorials_C_SetAnchorInfo final
{
public:
	class UWidget*                                anchorInfo;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       Slot_0;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              CallFunc_GetCachedGeometry_ReturnValue;            // 0x0014(0x0038)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_GetAbsoluteSize_ReturnValue;              // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_PixelPosition;            // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_ViewportPosition;         // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuTutorials_C_SetAnchorInfo) == 0x000008, "Wrong alignment on MenuTutorials_C_SetAnchorInfo");
static_assert(sizeof(MenuTutorials_C_SetAnchorInfo) == 0x000070, "Wrong size on MenuTutorials_C_SetAnchorInfo");
static_assert(offsetof(MenuTutorials_C_SetAnchorInfo, anchorInfo) == 0x000000, "Member 'MenuTutorials_C_SetAnchorInfo::anchorInfo' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_SetAnchorInfo, Slot_0) == 0x000008, "Member 'MenuTutorials_C_SetAnchorInfo::Slot_0' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_SetAnchorInfo, CallFunc_GetViewportScale_ReturnValue) == 0x000010, "Member 'MenuTutorials_C_SetAnchorInfo::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_SetAnchorInfo, CallFunc_GetCachedGeometry_ReturnValue) == 0x000014, "Member 'MenuTutorials_C_SetAnchorInfo::CallFunc_GetCachedGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_SetAnchorInfo, CallFunc_GetAbsoluteSize_ReturnValue) == 0x00004C, "Member 'MenuTutorials_C_SetAnchorInfo::CallFunc_GetAbsoluteSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_SetAnchorInfo, CallFunc_LocalToViewport_PixelPosition) == 0x000054, "Member 'MenuTutorials_C_SetAnchorInfo::CallFunc_LocalToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_SetAnchorInfo, CallFunc_LocalToViewport_ViewportPosition) == 0x00005C, "Member 'MenuTutorials_C_SetAnchorInfo::CallFunc_LocalToViewport_ViewportPosition' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_SetAnchorInfo, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000064, "Member 'MenuTutorials_C_SetAnchorInfo::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");

// Function MenuTutorials.MenuTutorials_C.Refresh
// 0x0038 (0x0038 - 0x0000)
struct MenuTutorials_C_Refresh final
{
public:
	class FText                                   TutorialText;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                popUpAnchorInfo;                                   // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMenuPlacement                                popupPlacement;                                    // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                focusAnchorInfo;                                   // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          showBorder;                                        // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MenuTutorials_C_Refresh) == 0x000008, "Wrong alignment on MenuTutorials_C_Refresh");
static_assert(sizeof(MenuTutorials_C_Refresh) == 0x000038, "Wrong size on MenuTutorials_C_Refresh");
static_assert(offsetof(MenuTutorials_C_Refresh, TutorialText) == 0x000000, "Member 'MenuTutorials_C_Refresh::TutorialText' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Refresh, popUpAnchorInfo) == 0x000018, "Member 'MenuTutorials_C_Refresh::popUpAnchorInfo' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Refresh, popupPlacement) == 0x000020, "Member 'MenuTutorials_C_Refresh::popupPlacement' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Refresh, focusAnchorInfo) == 0x000028, "Member 'MenuTutorials_C_Refresh::focusAnchorInfo' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_Refresh, showBorder) == 0x000030, "Member 'MenuTutorials_C_Refresh::showBorder' has a wrong offset!");

// Function MenuTutorials.MenuTutorials_C.isShowingTutorial
// 0x0001 (0x0001 - 0x0000)
struct MenuTutorials_C_isShowingTutorial final
{
public:
	bool                                          isShowingTutorial_0;                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MenuTutorials_C_isShowingTutorial) == 0x000001, "Wrong alignment on MenuTutorials_C_isShowingTutorial");
static_assert(sizeof(MenuTutorials_C_isShowingTutorial) == 0x000001, "Wrong size on MenuTutorials_C_isShowingTutorial");
static_assert(offsetof(MenuTutorials_C_isShowingTutorial, isShowingTutorial_0) == 0x000000, "Member 'MenuTutorials_C_isShowingTutorial::isShowingTutorial_0' has a wrong offset!");

// Function MenuTutorials.MenuTutorials_C.UpdateMaterialParams
// 0x0110 (0x0110 - 0x0000)
struct MenuTutorials_C_UpdateMaterialParams final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsZero2D_ReturnValue;                     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue_1;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue_1;           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue_2;            // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              CallFunc_GetTickSpaceGeometry_ReturnValue;         // 0x0050(0x0038)(ConstParm, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetLocalSize_ReturnValue;                 // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_PixelPosition;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_ViewportPosition;         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue_2;           // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue_3;            // 0x00DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue_1;       // 0x00E4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DVector2D_ReturnValue;      // 0x00EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x00FC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuTutorials_C_UpdateMaterialParams) == 0x000008, "Wrong alignment on MenuTutorials_C_UpdateMaterialParams");
static_assert(sizeof(MenuTutorials_C_UpdateMaterialParams) == 0x000110, "Wrong size on MenuTutorials_C_UpdateMaterialParams");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, DeltaTime) == 0x000000, "Member 'MenuTutorials_C_UpdateMaterialParams::DeltaTime' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_GetViewportScale_ReturnValue) == 0x000004, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_GetViewportSize_ReturnValue) == 0x000008, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000010, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_IsZero2D_ReturnValue) == 0x000011, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_IsZero2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_BooleanOR_ReturnValue) == 0x000012, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000014, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_LinearColorLerp_ReturnValue) == 0x000018, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_GetViewportSize_ReturnValue_1) == 0x000028, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_GetViewportSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_GetViewportScale_ReturnValue_1) == 0x000030, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_GetViewportScale_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_BreakVector2D_X) == 0x000034, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_BreakVector2D_Y) == 0x000038, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_GetViewportSize_ReturnValue_2) == 0x00003C, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_GetViewportSize_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_BreakVector2D_X_1) == 0x000044, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_BreakVector2D_Y_1) == 0x000048, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00004C, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_GetTickSpaceGeometry_ReturnValue) == 0x000050, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_GetTickSpaceGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000088, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_GetLocalSize_ReturnValue) == 0x000090, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_GetLocalSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_GetSize_ReturnValue) == 0x000098, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x0000A0, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x0000A8, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_LocalToViewport_PixelPosition) == 0x0000B0, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_LocalToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_LocalToViewport_ViewportPosition) == 0x0000B8, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_LocalToViewport_ViewportPosition' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_BreakVector2D_X_2) == 0x0000C0, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_BreakVector2D_Y_2) == 0x0000C4, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x0000C8, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000D0, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x0000D4, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_GetViewportScale_ReturnValue_2) == 0x0000D8, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_GetViewportScale_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_GetViewportSize_ReturnValue_3) == 0x0000DC, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_GetViewportSize_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_Divide_Vector2DFloat_ReturnValue_1) == 0x0000E4, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_Divide_Vector2DFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_Divide_Vector2DVector2D_ReturnValue) == 0x0000EC, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_Divide_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_BreakVector2D_X_3) == 0x0000F4, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, CallFunc_BreakVector2D_Y_3) == 0x0000F8, "Member 'MenuTutorials_C_UpdateMaterialParams::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(MenuTutorials_C_UpdateMaterialParams, K2Node_MakeStruct_LinearColor) == 0x0000FC, "Member 'MenuTutorials_C_UpdateMaterialParams::K2Node_MakeStruct_LinearColor' has a wrong offset!");

}

