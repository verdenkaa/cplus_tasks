#include "mainwindow.h"
#include <QPainter>
#include <QEasingCurve>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setFixedSize(300, 200);

    //маршрут
    path = {
        {50, 50}, {100, 50}, {150, 50}, {200, 50}, {210, 50}, {250, 50}, // Верхняя
        {250, 80}, {250, 110}, {250, 140}, // Правая
        {210, 140}, {200, 140}, {50, 140}, // Нижняя
    };

    currentPos = path[0];
    electronColor = Qt::blue;

    animation = new QVariantAnimation(this);
    animation->setDuration(10000);
    animation->setLoopCount(-1);
    animation->setEasingCurve(QEasingCurve::InOutQuad); // Плавное движение

    for (int i = 0; i < path.size(); i++) {
        double progress = static_cast<double>(i) / (path.size() - 1);
        animation->setKeyValueAt(progress, path[i]);
    }

    connect(animation, &QVariantAnimation::valueChanged, this, &MainWindow::updatePosition);
    animation->start();
}

void MainWindow::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // Рисуем схему
    painter.drawLine(50, 50, 100, 50);
    painter.drawLine(150, 50, 200, 50);
    painter.drawLine(210, 50, 250, 50);

    painter.drawRect(100, 40, 50, 20); // Резистор

    painter.setPen(QPen(Qt::black, 3));
    painter.drawLine(200, 40, 200, 60);
    painter.drawLine(210, 40, 210, 60);

    painter.setPen(QPen(Qt::black, 1));
    painter.drawLine(250, 50, 250, 80);
    painter.drawLine(250, 110, 250, 140);

    painter.drawLine(50, 140, 200, 140);
    painter.drawLine(210, 140, 250, 140);

    painter.setPen(QPen(Qt::black, 3));
    painter.drawLine(200, 130, 200, 150);
    painter.drawLine(210, 130, 210, 150);

    painter.setPen(QPen(Qt::black, 1));
    painter.drawLine(50, 50, 50, 140);

    // Выключатель
    painter.drawLine(250, 86, 275, 95);

    //точки
    painter.setPen(QPen(Qt::black, 2));
    painter.drawEllipse(247, 80, 6, 6);
    painter.drawEllipse(247, 104, 6, 6);

    //электрон
    painter.setBrush(electronColor);
    painter.drawEllipse(currentPos, 6, 6);
}

void MainWindow::updatePosition(const QVariant &value) {
    currentPos = value.toPointF();

    // Изменение цвета
    if (currentPos.x() >= 100 && currentPos.x() <= 150 && currentPos.y() == 50) {
        electronColor = Qt::red; // Резистор
    } else if (currentPos.x() >= 200 && currentPos.x() <= 210 && (currentPos.y() == 50 || currentPos.y() == 140)){
        electronColor = Qt::green; // Транзистор
    } else {
        electronColor = Qt::blue; // Обычный участок
    }

    update();
}
