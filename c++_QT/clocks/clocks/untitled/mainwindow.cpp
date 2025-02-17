#include <QtGui>
#include "mainwindow.h"

Clock::Clock (QWidget *parent) : QWidget (parent) {
    QTimer *timer = new QTimer(this); // строка была ниже
    connect (timer, SIGNAL (timeout()), this, SLOT (update()));
    timer->start(1000);
    setWindowTitle (tr("Clock"));
    resize (200, 200);

}

void Clock::update() {
    time = QTime::currentTime();
    strTime = time.toString("hh:mm:ss");
    setWindowTitle (strTime);
    emit timeChanged (strTime);
    QWidget::update();
}


void Clock::paintEvent (QPaintEvent*) { static const QPoint hourHand [3] = {
        QPoint (7, 8),
        QPoint (-7, 8),
        QPoint (0, -60)
    };
    static const QPoint minuteHand [3] ={
        QPoint (7, 8),
        QPoint (-7, 8),
        QPoint (0, -85)
    };
    static const QPoint secondHand [3] ={
        QPoint (1, 4),
        QPoint (-1, 4),
        QPoint (0, -90)
    };
    QColor hourColor (127, 0, 127);
    QColor minuteColor (0, 127, 127, 190);
    QColor secondColor (100, 100, 0, 150);


    int side = qMin (width(), height());
    QPainter painter (this);
    painter.setRenderHint (QPainter::Antialiasing);
    QFont font = painter.font();
    font.setPointSizeF (side/20);
    painter.setFont (font);
    painter.drawText (QRectF(0, height()/2, width(), side/2),
                     Qt::AlignCenter, strTime );
    painter.translate (width()/2, height () / 2);
    painter.scale (side / 200.0, side / 200.0);
    painter.setPen (Qt::NoPen);
    painter.setBrush (hourColor);
    painter.save();
    painter.rotate(30.0* ((time.hour() + time.minute() / 60.0)));
    painter.drawConvexPolygon(hourHand, 3);
    painter.restore();



    painter.setPen (hourColor);
    for (int i = 0; i < 12; ++i) {
        painter.drawLine (88, 0, 96, 0);
        painter.rotate (30.0);
    }
    painter.setPen (Qt::NoPen);
    painter.setBrush (minuteColor);
    painter.save();
    painter.save();
    painter.rotate(6.0 * (time.minute() + time.second() / 60.0));
    painter.drawConvexPolygon(minuteHand, 3);
    painter.restore();
    painter.setPen (secondColor);
    painter.rotate( 6.0 * time.second() );
    painter.drawConvexPolygon(secondHand, 3);
    painter.restore();



    painter.setPen(minuteColor);
    for (int j=0; j < 80; ++j) { // Изменить количество делений
        if ((j % 5) != 0)
            painter.rotate (6.0);
        painter.drawLine (92, 0, 96, 0);}
}



