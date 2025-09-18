#include "compat/mfc/Dialogs.h"

#include "framework/FunctionRegistry.h"

namespace compat::mfc {
namespace {
const framework::FunctionRegistration on_init_registration{
    "compat::mfc::OnInitDialog", []() {
        Dialog dialog{"Sample"};
        OnInitDialog(dialog);
    }};

const framework::FunctionRegistration end_dialog_registration{
    "compat::mfc::EndDialog", []() {
        Dialog dialog{"Sample"};
        OnInitDialog(dialog);
        EndDialog(dialog, 42);
    }};
}  // namespace

bool OnInitDialog(Dialog& dialog) {
    if (!dialog.initialized) {
        dialog.initialized = true;
        dialog.result = 0;
        return true;
    }
    return false;
}

void EndDialog(Dialog& dialog, int result) {
    dialog.result = result;
    dialog.initialized = false;
}

}  // namespace compat::mfc
