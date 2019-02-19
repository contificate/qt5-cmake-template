#include <ui/main_window.h>
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent), ui(new Ui::MainWindow) {
  // setup ui
	ui->setupUi(this);
}

MainWindow::~MainWindow() {
  delete ui;
}


