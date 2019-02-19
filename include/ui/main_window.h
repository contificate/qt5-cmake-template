
#ifndef QTTEST_MAIN_WINDOW_H
#define QTTEST_MAIN_WINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget* parent = nullptr);

  ~MainWindow();

 private:
  Ui::MainWindow* ui;
};

#endif //QTTEST_MAIN_WINDOW_H
