#ifndef CLOCK_H
#define CLOCK_H

#include <QMainWindow>
#include <QTime>
#include <QString>
#include <QWidget>

class Clock : public QWidget
{
    Q_OBJECT
public:
    Clock(QWidget *parent = 0); // быдо Qwidget
protected:
    void paintEvent(QPaintEvent *event);
    QTime time;
    QString strTime;
signals:
    void timeChanged(const QString& s);
public slots:
    void update();
};
#endif // CLOCK_H
