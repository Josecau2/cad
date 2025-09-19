#include "ui/mainwindow/MainWindow.h"

#include <QApplication>
#include <QLabel>
#include <QMenuBar>
#include <QStatusBar>
#include <QToolBar>
#include <QVBoxLayout>
#include <string>

#include "framework/CommandBus.h"

namespace ui {

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    setupUI();
    setWindowTitle("OpenDesign CAD");
    resize(1200, 800);
}

void MainWindow::setupUI() {
    setupRibbon();
    setupStatusBar();

    // Central widget placeholder
    auto* centralWidget = new QWidget;
    setCentralWidget(centralWidget);
}

void MainWindow::setupRibbon() {
    // File menu
    auto* fileMenu = menuBar()->addMenu("&File");
    auto* newAction = fileMenu->addAction("&New", this, []() {
        // TODO: implement new document
    });
    auto* openAction = fileMenu->addAction("&Open", this, []() {
        // TODO: implement open
    });
    auto* saveAction = fileMenu->addAction("&Save", this, []() {
        // TODO: implement save
    });
    fileMenu->addSeparator();
    fileMenu->addAction("E&xit", this, &QWidget::close);

    // Edit menu
    auto* editMenu = menuBar()->addMenu("&Edit");
    auto* undoAction = editMenu->addAction("&Undo", this, []() {
        // TODO: implement undo
    });
    auto* redoAction = editMenu->addAction("&Redo", this, []() {
        // TODO: implement redo
    });
    editMenu->addSeparator();
    auto* cutAction = editMenu->addAction("&Cut", this, []() {
        // TODO: implement cut
    });
    auto* copyAction = editMenu->addAction("C&opy", this, []() {
        // TODO: implement copy
    });
    auto* pasteAction = editMenu->addAction("&Paste", this, []() {
        // TODO: implement paste
    });
    auto* deleteAction = editMenu->addAction("&Delete", this, []() {
        // TODO: implement delete
    });

    // Home toolbar
    auto* homeToolBar = addToolBar("Home");
    auto* centerAction = homeToolBar->addAction("Center");
    auto* editShapeAction = homeToolBar->addAction("Edit Shape");
    auto* groupAction = homeToolBar->addAction("Group");
    auto* mirrorAction = homeToolBar->addAction("Mirror");
    auto* moveAction = homeToolBar->addAction("Move");
    auto* rotateAction = homeToolBar->addAction("Rotate");
    auto* ungroupAction = homeToolBar->addAction("Ungroup");

    // View toolbar
    auto* viewToolBar = addToolBar("View");
    auto* presentationViewAction = viewToolBar->addAction("Presentation View");

    // Layout toolbar
    auto* layoutToolBar = addToolBar("Layout");
    auto* displaySettingsAction = layoutToolBar->addAction("Display Settings");

    // Connect actions to CommandBus
    connect(centerAction, &QAction::triggered, this, []() {
        framework::commands::ExecuteCommand(std::string("ribbon.home.edit.center"));
    });
    connect(editShapeAction, &QAction::triggered, this, []() {
        framework::commands::ExecuteCommand(std::string("ribbon.home.edit.edit_shape"));
    });
    connect(groupAction, &QAction::triggered, this, []() {
        framework::commands::ExecuteCommand(std::string("ribbon.home.edit.group"));
    });
    connect(mirrorAction, &QAction::triggered, this, []() {
        framework::commands::ExecuteCommand(std::string("ribbon.home.edit.mirror"));
    });
    connect(moveAction, &QAction::triggered, this, []() {
        framework::commands::ExecuteCommand(std::string("ribbon.home.edit.move"));
    });
    connect(rotateAction, &QAction::triggered, this, []() {
        framework::commands::ExecuteCommand(std::string("ribbon.home.edit.rotate"));
    });
    connect(ungroupAction, &QAction::triggered, this, []() {
        framework::commands::ExecuteCommand(std::string("ribbon.home.edit.ungroup"));
    });
}

void MainWindow::setupStatusBar() {
    statusBar()->showMessage("Ready");
    statusBar()->addPermanentWidget(new QLabel("Zoom: 100%"));
    statusBar()->addPermanentWidget(new QLabel("Units: mm"));
    statusBar()->addPermanentWidget(new QLabel("Tool: Select"));
    statusBar()->addPermanentWidget(new QLabel("Selection: 0"));
}

}  // namespace ui