#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[]) {
    QApplication app (argc, argv);
    Clock clock;
    clock.show();
    return app.exec();
}

