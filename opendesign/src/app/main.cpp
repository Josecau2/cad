#include "app/Application.h"
#include "ui/mainwindow/MainWindow.h"
#include "branch_map/BranchMapStubs.h"

#include <QApplication>
#include <iostream>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    // Ensure branch map function stubs are registered
    branch_map::ensure_branch_map_registrations();

    app::Application application;
    application.initialize();

    ui::MainWindow window;
    window.show();

    application.run();

    std::cout << "OpenDesign running with " << application.commandCount()
              << " commands registered." << std::endl;

    int result = app.exec();

    application.shutdown();

    return result;
}
