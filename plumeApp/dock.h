#ifndef DOCK_H
#define DOCK_H


#include <QDockWidget>
#include <QWidget>
#include <QObject>
#include <QMenuBar>
#include <QMenu>


class Dock : public QDockWidget
{
    Q_OBJECT
public:
    Dock(int &thick, int &opt, QWidget *parent);

private slots:
    void setThin();
    void setMiddle();
    void setBold();
    void setTriangle();
    void setRectangle();
    void setPlume();

private:
    int         &thickness;
    int         &option;
    QMenuBar    *menuBar;
    QMenu       *plumeMenu;
    QMenu       *brushMenu;
    QMenu       *figureMenu;
    QMenu       *eraserMenu;
    QMenu       *colorMenu;
    QMenu       *textMenu;
};

#endif // DOCK_H
