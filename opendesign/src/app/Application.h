#pragma once

#include <string>

#include "compat/mfc/Ribbon.h"
#include "framework/CommandBus.h"
#include "io/Settings.h"
#include "ui/html/HtmlUI.h"

namespace app {

class Application {
public:
    Application();

    void initialize();

    void run();

    void shutdown();

    bool isRunning() const;

    std::size_t commandCount() const;

    bool ribbonSimplified() const;

private:
    bool running_ = false;
};

}  // namespace app
