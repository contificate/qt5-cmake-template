#include <QApplication>
#include <ui/main_window.h>

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);

  MainWindow w;
  w.show();

  return app.exec();
}
