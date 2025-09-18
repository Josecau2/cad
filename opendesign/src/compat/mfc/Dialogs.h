#pragma once

#include <string>

namespace compat::mfc {

struct Dialog {
    std::string title;
    bool initialized = false;
    int result = 0;
};

bool OnInitDialog(Dialog& dialog);

void EndDialog(Dialog& dialog, int result);

}  // namespace compat::mfc
