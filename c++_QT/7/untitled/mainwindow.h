#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVariantAnimation>

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent *event) override;
private slots:
    void updatePosition(const QVariant &value);
private:
    QVariantAnimation *animation;
    QVector<QPointF> path;
    QPointF currentPos;
    QColor electronColor;
};

#endif // MAINWINDOW_H
