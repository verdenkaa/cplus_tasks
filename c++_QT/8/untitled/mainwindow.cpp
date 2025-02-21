#include "mainwindow.h"
#include <QPainter>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setFixedSize(500, 500);
}

void MainWindow::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.setPen(Qt::blue);
    painter.setBrush(Qt::blue);

    for (const QPoint &point : points) {
        painter.drawEllipse(point, 5, 5);

        // координаты
        QString coordText = QString("(%1, %2)").arg(point.x()).arg(point.y());
        painter.setPen(Qt::black);
        painter.drawText(point + QPoint(8, -8), coordText);
        painter.setPen(Qt::blue);
    }
}

void MainWindow::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        points.append(event->pos()); // Добавляем точку
    } else if (event->button() == Qt::RightButton) {
        points.clear(); // Очищаем список точек
    }
    update(); // Перерисовываем окно
}
