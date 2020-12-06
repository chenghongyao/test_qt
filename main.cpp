#include <iostream>
#include <QApplication>
#include <QtCore>
#include <QMainWindow>
// #include <qt5/QtCore>

int main(int argc, char** argv)  {
    QApplication app(argc,argv);
	QMainWindow mainWindow;
	mainWindow.show();
    return app.exec();
}
