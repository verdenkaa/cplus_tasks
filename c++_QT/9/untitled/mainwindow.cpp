#include "mainwindow.h"
#include <QPainter>
#include <QMouseEvent>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setFixedSize(500, 500);
}

void MainWindow::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.setPen(currentColor);
    painter.setBrush(currentColor);

    for (const QPoint &point : points) {
        painter.drawEllipse(point, 5, 5);

        QString coordText = QString("(%1, %2)").arg(point.x()).arg(point.y());
        painter.setPen(Qt::black);
        painter.drawText(point + QPoint(8, -8), coordText);
        painter.setPen(currentColor);
    }
}

void MainWindow::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        points.append(event->pos());
    } else if (event->button() == Qt::RightButton) {
        points.clear();
    }
    update();
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    switch (event->key()) {
    case Qt::Key_1: currentColor = Qt::blue; break;
    case Qt::Key_2: currentColor = Qt::green; break;
    case Qt::Key_3: currentColor = Qt::red; break;
    case Qt::Key_4: currentColor = Qt::yellow; break;
    default: return;
    }
    update(); // Перерисовываем окно после смены цвета
}
