#include "app/Application.h"
#include "ui/mainwindow/MainWindow.h"

#include <QApplication>
#include <iostream>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

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
