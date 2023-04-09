#include "board.h"

Board::Board()
{
    this->resize(1000,600);
    this->move(100, 100);
    this->setWindowIcon(QIcon(":/icons/icons/windowIcon.png"));
    this->setWindowTitle(" Перо");

    this->thickness = 3;
    QPalette pl;
    pl.setColor(QPalette::Window, QColor(100, 200, 150));
    this->setAutoFillBackground(true);
    this->setPalette(pl);

    this->setMouseTracking(true);
    flag = 0;

    this->option = Option::plume;
    dock = new Dock(this->thickness, option, this);

}

void Board::paintEvent(QPaintEvent*)
{
    if(vecPen.size() == 0) return;

    QPainter p(this);

    switch (this->option) {
        case Option::plume:
            p.setPen(QPen(Qt::white, this->thickness, Qt::SolidLine));

            for (int i = 0; i < infRec.size(); ++i)
            {
                p.drawRect(infRec[i].start.x(), infRec[i].start.y(), infRec[i].end.x()-infRec[i].start.x(), infRec[i].end.y()-infRec[i].start.y());
            }
            for (int i = 1; i < inf.size(); ++i)
            {
                if(inf[i-1].flag==1)
                    continue;
                p.setPen(QPen(vecPen[i-1]));
                p.drawLine(inf[i-1].pos.x(), inf[i-1].pos.y(), inf[i].pos.x(), inf[i].pos.y());
            }
            break;

        case Option::brush:
            break;

        case Option::triangle:
            break;

        case Option::rectangle:
            int i;
            for (i = 1; i < inf.size(); ++i)
            {
                if(inf[i-1].flag==1)
                    continue;
                p.setPen(QPen(vecPen[i-1]));
                p.drawLine(inf[i-1].pos.x(), inf[i-1].pos.y(), inf[i].pos.x(), inf[i].pos.y());
            }

            p.setPen(QPen(Qt::white, this->thickness, Qt::SolidLine));
            for (i = 0; i < infRec.size(); ++i)
            {
                p.drawRect(infRec[i].start.x(), infRec[i].start.y(), infRec[i].end.x()-infRec[i].start.x(), infRec[i].end.y()-infRec[i].start.y());
            }
            p.drawRect(startPoint.x(), startPoint.y(), rect.pos.x()-startPoint.x(), rect.pos.y()-startPoint.y());
            break;
    }

}

void Board::mouseMoveEvent(QMouseEvent *event)
{
    if(!flag)
        return;

    this->pos = event->pos();
    ContactInform cf;
    cf.pos = this->pos;
    cf.flag = 0;

    if(this->option == Option::plume)
        inf.append(cf);

    if(this->option == Option::rectangle)
        rect = cf;

    vecPen.push_back(QPen(Qt::white, this->thickness, Qt::SolidLine));
    this->update();
}

void Board::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton){
        flag=1;
        if(this->option == Option::rectangle)
            startPoint = e->pos();
    }
}

void Board::mouseReleaseEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        flag=0;
        if(inf.size()>0)
            inf[inf.size()-1].flag=1;

        ContactInformRect fRect;
        fRect.start = startPoint;
        fRect.end = rect.pos;
        fRect.flag = 1;
        infRec.push_back(fRect);
    }
    if(e->button() == Qt::RightButton)
    {
        if(inf.size()>0)
            inf.remove(inf.size()-1);
        if(inf.size()>0)
            inf[inf.size()-1].flag=1;
        this->update();
    }
}
