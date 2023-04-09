#ifndef BOARD_H
#define BOARD_H

#include "dock.h"
#include <QFrame>
#include <QPainter>
#include <QtMath>
#include <QMouseEvent>
#include <QDockWidget>

class Board : public QFrame
{
public:
    Board();
private:

    enum Option{plume=100, brush, triangle, rectangle};
    struct ContactInform
    {
        QPoint pos;
        int flag;
    };
    struct ContactInformRect
    {
        QPoint start;
        QPoint end;
        int flag;
    };
    void paintEvent(QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

    int                     flag;
    int                     thickness;
    int                     option;
    QPoint                  pos;
    QPoint                  startPoint;
    QVector<ContactInform>  inf;
    QVector<ContactInformRect>  infRec;
    QVector<QPen>           vecPen;
    ContactInform           rect;
    Dock                    *dock;
};

#endif // BOARD_H

