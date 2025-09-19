#include "ui/printpreview/PrintPreview.h"

#include <algorithm>
#include <mutex>

#include "framework/CommandBus.h"
#include "framework/FunctionRegistry.h"

namespace ui::printpreview {
namespace {
struct PreviewState {
    int page = 0;
    int total_pages = 1;
    double ratio = 1.0;
};

PreviewState& state() {
    static PreviewState preview;
    return preview;
}

std::mutex& state_mutex() {
    static std::mutex mutex;
    return mutex;
}
}  // namespace

void ensureCommandsRegistered();

void ResetPreviewStateForTesting() {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(state_mutex());
    PreviewState& preview = state();
    preview.page = 0;
    preview.total_pages = 1;
    preview.ratio = 1.0;
}

void ConfigurePreview(int total_pages, int current_page) {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(state_mutex());
    PreviewState& preview = state();
    preview.total_pages = std::max(1, total_pages);
    preview.page = std::clamp(current_page, 0, preview.total_pages - 1);
    preview.ratio = std::clamp(preview.ratio, 0.5, 4.0);
}

bool OnCommandPrintPreviewNextPage() {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(state_mutex());
    PreviewState& preview = state();
    if (preview.page + 1 >= preview.total_pages) {
        return false;
    }
    ++preview.page;
    return true;
}

bool OnCommandPrintPreviewPreviousPage() {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(state_mutex());
    PreviewState& preview = state();
    if (preview.page == 0) {
        return false;
    }
    --preview.page;
    return true;
}

bool OnCommandPrintPreviewRatio1() {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(state_mutex());
    PreviewState& preview = state();
    preview.ratio = 1.0;
    return true;
}

bool OnCommandPrintPreviewRatio2() {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(state_mutex());
    PreviewState& preview = state();
    preview.ratio = 2.0;
    return true;
}

bool OnUpdateUiPrintPreviewPreviousPage() {
    std::lock_guard<std::mutex> lock(state_mutex());
    return state().page > 0;
}

bool OnUpdateUiPrintPreviewNextPage() {
    std::lock_guard<std::mutex> lock(state_mutex());
    const PreviewState& preview = state();
    return preview.page + 1 < preview.total_pages;
}

int CurrentPage() {
    std::lock_guard<std::mutex> lock(state_mutex());
    return state().page;
}

int TotalPages() {
    std::lock_guard<std::mutex> lock(state_mutex());
    return state().total_pages;
}

double CurrentRatio() {
    std::lock_guard<std::mutex> lock(state_mutex());
    return state().ratio;
}

void InitializePrintPreviewCommands() {
    ensureCommandsRegistered();
}

void ensureCommandsRegistered() {
    static std::once_flag flag;
    std::call_once(flag, []() {
        framework::commands::RegisterCommand("print.preview.next", []() {
            OnCommandPrintPreviewNextPage();
        });
        framework::commands::RegisterCommand("print.preview.previous", []() {
            OnCommandPrintPreviewPreviousPage();
        });
        framework::commands::RegisterCommand("print.preview.ratio1", []() {
            OnCommandPrintPreviewRatio1();
        });
        framework::commands::RegisterCommand("print.preview.ratio2", []() {
            OnCommandPrintPreviewRatio2();
        });
    });
}

}  // namespace ui::printpreview

namespace {
const framework::FunctionRegistration next_page_registration{
    "ui::printpreview::OnCommandPrintPreviewNextPage", []() {
        ui::printpreview::ResetPreviewStateForTesting();
        ui::printpreview::ConfigurePreview(3);
        ui::printpreview::OnCommandPrintPreviewNextPage();
    }};

const framework::FunctionRegistration previous_page_registration{
    "ui::printpreview::OnCommandPrintPreviewPreviousPage", []() {
        ui::printpreview::ResetPreviewStateForTesting();
        ui::printpreview::ConfigurePreview(3, 1);
        ui::printpreview::OnCommandPrintPreviewPreviousPage();
    }};

const framework::FunctionRegistration ratio_one_registration{
    "ui::printpreview::OnCommandPrintPreviewRatio1", []() {
        ui::printpreview::ResetPreviewStateForTesting();
        ui::printpreview::OnCommandPrintPreviewRatio1();
    }};

const framework::FunctionRegistration ratio_two_registration{
    "ui::printpreview::OnCommandPrintPreviewRatio2", []() {
        ui::printpreview::ResetPreviewStateForTesting();
        ui::printpreview::OnCommandPrintPreviewRatio2();
    }};

const framework::FunctionRegistration update_prev_registration{
    "ui::printpreview::OnUpdateUiPrintPreviewPreviousPage", []() {
        ui::printpreview::ResetPreviewStateForTesting();
        ui::printpreview::ConfigurePreview(2, 1);
        ui::printpreview::OnUpdateUiPrintPreviewPreviousPage();
    }};

const framework::FunctionRegistration update_next_registration{
    "ui::printpreview::OnUpdateUiPrintPreviewNextPage", []() {
        ui::printpreview::ResetPreviewStateForTesting();
        ui::printpreview::ConfigurePreview(2, 0);
        ui::printpreview::OnUpdateUiPrintPreviewNextPage();
    }};
}  // namespace
