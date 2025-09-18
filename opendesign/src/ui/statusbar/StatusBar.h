#pragma once

namespace ui::statusbar {

void ResetStatusBarStateForTesting();

bool OnStatusBarAutoMergeButton();

bool AutoMergeEnabled();

int RefreshCount();

void InitializeStatusBarCommands();

}  // namespace ui::statusbar
