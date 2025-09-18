#pragma once

namespace ui::printpreview {

void ResetPreviewStateForTesting();

void ConfigurePreview(int total_pages, int current_page = 0);

bool OnCommandPrintPreviewNextPage();

bool OnCommandPrintPreviewPreviousPage();

bool OnCommandPrintPreviewRatio1();

bool OnCommandPrintPreviewRatio2();

bool OnUpdateUiPrintPreviewPreviousPage();

bool OnUpdateUiPrintPreviewNextPage();

int CurrentPage();

int TotalPages();

double CurrentRatio();

void InitializePrintPreviewCommands();

}  // namespace ui::printpreview
