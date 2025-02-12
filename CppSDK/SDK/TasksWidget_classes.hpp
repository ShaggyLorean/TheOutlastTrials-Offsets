﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TasksWidget

#include "Basic.hpp"

#include "OPP_structs.hpp"
#include "OPP_classes.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TasksWidget.TasksWidget_C
// 0x00B8 (0x03D8 - 0x0320)
class UTasksWidget_C final : public URBTasksWidget
{
public:
	class UTextBlock*                             CategoryTitle;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           GroupList;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             GroupScrollBox;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RefreshTimeBox;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RefreshTimeText;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             StampCapReachedText;                               // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTaskButton_C*                          TaskButton;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTaskButton_C*                          TaskButton_1;                                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTaskButton_C*                          TaskButton_2;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTaskButton_C*                          TaskButton_3;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTaskButton_C*                          TaskButton_4;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTaskButton_C*                          TaskButton_130;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTaskButton_C*                          TaskButton_272;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTaskCategoryButton_C*                  TaskCategoryButton;                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTaskCategoryButton_C*                  TaskCategoryButton_1;                              // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTaskCategoryButton_C*                  TaskCategoryButton_2;                              // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTaskCategoryButton_C*                  TaskCategoryButton_3;                              // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTaskCategoryButton_C*                  TaskCategoryButton_4;                              // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           TaskList;                                          // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             TasksScrollBox;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimerImage;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   LastFocusedTaskId;                                 // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ShowTasks(class FName GroupID);
	void OnCategoryFocused(class FName GroupID);
	void RefreshTasks();
	void OnTaskClicked(const struct FRBTaskMenuEntry& Entry);
	void OnTaskFocused(const struct FRBTaskMenuEntry& Entry);
	void UpdateRefreshTime();
	void Event_Refresh();
	void Event_Build();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Build();
	class UWidget* NavToSelectedGroup(EUINavigation Navigation_0);
	void GetSelectedGroupWidget(class UTaskCategoryButton_C** selectedCategoryWidget);
	class UWidget* NavToLastTaskGroup(EUINavigation Navigation_0);
	class UWidget* NavToFirstTaskGroup(EUINavigation Navigation_0);
	class UWidget* NavToFirstTask(EUINavigation Navigation_0);
	class UWidget* NavToLastTask(EUINavigation Navigation_0);
	class UWidget* NavToLastFocusedTask(EUINavigation Navigation_0);
	void UpdateCapTextVisibility();
	void ScrollToSelectedGroup();
	void ScrollToSelectedTask();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TasksWidget_C">();
	}
	static class UTasksWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTasksWidget_C>();
	}
};
static_assert(alignof(UTasksWidget_C) == 0x000008, "Wrong alignment on UTasksWidget_C");
static_assert(sizeof(UTasksWidget_C) == 0x0003D8, "Wrong size on UTasksWidget_C");
static_assert(offsetof(UTasksWidget_C, CategoryTitle) == 0x000320, "Member 'UTasksWidget_C::CategoryTitle' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, GroupList) == 0x000328, "Member 'UTasksWidget_C::GroupList' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, GroupScrollBox) == 0x000330, "Member 'UTasksWidget_C::GroupScrollBox' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, LineImage) == 0x000338, "Member 'UTasksWidget_C::LineImage' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, RefreshTimeBox) == 0x000340, "Member 'UTasksWidget_C::RefreshTimeBox' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, RefreshTimeText) == 0x000348, "Member 'UTasksWidget_C::RefreshTimeText' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, StampCapReachedText) == 0x000350, "Member 'UTasksWidget_C::StampCapReachedText' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskButton) == 0x000358, "Member 'UTasksWidget_C::TaskButton' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskButton_1) == 0x000360, "Member 'UTasksWidget_C::TaskButton_1' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskButton_2) == 0x000368, "Member 'UTasksWidget_C::TaskButton_2' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskButton_3) == 0x000370, "Member 'UTasksWidget_C::TaskButton_3' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskButton_4) == 0x000378, "Member 'UTasksWidget_C::TaskButton_4' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskButton_130) == 0x000380, "Member 'UTasksWidget_C::TaskButton_130' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskButton_272) == 0x000388, "Member 'UTasksWidget_C::TaskButton_272' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskCategoryButton) == 0x000390, "Member 'UTasksWidget_C::TaskCategoryButton' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskCategoryButton_1) == 0x000398, "Member 'UTasksWidget_C::TaskCategoryButton_1' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskCategoryButton_2) == 0x0003A0, "Member 'UTasksWidget_C::TaskCategoryButton_2' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskCategoryButton_3) == 0x0003A8, "Member 'UTasksWidget_C::TaskCategoryButton_3' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskCategoryButton_4) == 0x0003B0, "Member 'UTasksWidget_C::TaskCategoryButton_4' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TaskList) == 0x0003B8, "Member 'UTasksWidget_C::TaskList' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TasksScrollBox) == 0x0003C0, "Member 'UTasksWidget_C::TasksScrollBox' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, TimerImage) == 0x0003C8, "Member 'UTasksWidget_C::TimerImage' has a wrong offset!");
static_assert(offsetof(UTasksWidget_C, LastFocusedTaskId) == 0x0003D0, "Member 'UTasksWidget_C::LastFocusedTaskId' has a wrong offset!");

}

