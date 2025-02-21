#include "mainwindow.h"
#include <QPainter>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setFixedSize(300, 200);  // Фиксированный размер окна
}

void MainWindow::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);



    painter.drawLine(50, 50, 100, 50); // верхняя линия
    painter.drawLine(150, 50, 200, 50);
    painter.drawLine(210, 50, 250, 50);

    painter.drawRect(100, 40, 50, 20); // резистор

    painter.setPen(QPen(Qt::black, 3)); // транзистор
    painter.drawLine(200, 40, 200, 60);
    painter.drawLine(210, 40, 210, 60);

    painter.setPen(QPen(Qt::black, 1)); // правая линия
    painter.drawLine(250, 50, 250, 80);
    painter.drawLine(250, 110, 250, 140);

    painter.drawLine(50, 140, 200, 140);
    painter.drawLine(210, 140, 250, 140);

    painter.setPen(QPen(Qt::black, 3));
    painter.drawLine(200, 130, 200, 150);
    painter.drawLine(210, 130, 210, 150);

    painter.setPen(QPen(Qt::black, 1));
    painter.drawLine(50, 50, 50, 140);


    //выключатель
    painter.drawLine(250, 86, 275, 95);

    //точки
    painter.setPen(QPen(Qt::black, 2));
    painter.drawEllipse(247, 80, 6, 6);
    painter.drawEllipse(247, 104, 6, 6);
}
