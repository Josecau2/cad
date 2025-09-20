#pragma once

#include <QMainWindow>

namespace ui {

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow() override = default;

private:
    void setupUI();
    void setupRibbon();
    void setupStatusBar();
};

}  // namespace ui