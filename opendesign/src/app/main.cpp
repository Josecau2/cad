#include "app/Application.h"

#include <iostream>

int main() {
    app::Application application;
    application.initialize();
    application.run();
    std::cout << "OpenDesign running with " << application.commandCount()
              << " commands registered." << std::endl;
    application.shutdown();
    return 0;
}
