#include "dock.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QToolBar>


Dock::Dock(int &thick, int &opt, QWidget *parent)
    : QDockWidget(parent, Qt::FramelessWindowHint)
    , thickness{thick}
    , option{opt}
    , menuBar{new QMenuBar(this)}
    , plumeMenu{new QMenu("Перо", this)}
    , brushMenu{new QMenu("Кисть", this)}
    , figureMenu{new QMenu("Фигуры", this)}
    , eraserMenu{new QMenu("Стереть", this)}
    , colorMenu{new QMenu("Цвета", this)}
    , textMenu{new QMenu("Текст", this)}
{

    this->resize(180, 40);
    this->setWindowTitle("Инструменты");

    this->plumeMenu->setIcon(QIcon(":/icons/icons/plume.png"));
        QAction *plume = new QAction(QIcon(":/icons/icons/plume.png"), "перо", this);
        QAction *thin = new QAction(QIcon(":/icons/icons/thin.png"), "тонкий", this);
        QAction *middle = new QAction(QIcon(":/icons/icons/middle.png"),"средний", this);
        QAction *bold = new QAction(QIcon(":/icons/icons/bold.png"),"толстый", this);
        this->plumeMenu->addAction(plume);
        this->plumeMenu->addAction(thin);
        this->plumeMenu->addAction(middle);
        this->plumeMenu->addAction(bold);     
        connect(thin, SIGNAL(triggered()), this, SLOT(setThin()));
        connect(middle, SIGNAL(triggered()), this, SLOT(setMiddle()));
        connect(bold, SIGNAL(triggered()), this, SLOT(setBold()));
        connect(plume, SIGNAL(triggered()), this, SLOT(setPlume()));
    this->menuBar->addMenu(this->plumeMenu);

    this->brushMenu->setIcon(QIcon(":/icons/icons/brush.png"));
        this->brushMenu->addAction(thin);
        this->brushMenu->addAction(middle);
        this->brushMenu->addAction(bold);
    this->menuBar->addMenu(this->brushMenu);

    this->figureMenu->setIcon(QIcon(":/icons/icons/figure.png"));
        QAction *rec      = new QAction(QIcon(":/icons/icons/rectangle.png"), "прямоугольник" ,this);
        QAction *triangle = new QAction(QIcon(":/icons/icons/triangle.png"), "треугольник",this);
        figureMenu->addActions(QList<QAction*> () << rec << triangle);
        connect(rec, SIGNAL(triggered()), this, SLOT(setRectangle()));
        connect(triangle, SIGNAL(triggered()), this, SLOT(setTriangle()));
    this->menuBar->addMenu(this->figureMenu);

    this->eraserMenu->setIcon(QIcon(":/icons/icons/eraser.png"));
        QAction *clearAll       = new QAction(QIcon(":/icons/icons/clear.png"), "Очистить всё", this);
        QAction *selectErase    = new QAction(QIcon(":/icons/icons/eraser.png"), "ластик", this);
        eraserMenu->addActions(QList<QAction*>() << clearAll << selectErase);
    this->menuBar->addMenu(this->eraserMenu);

    this->colorMenu->setIcon(QIcon(":/icons/icons/color.png"));

    this->menuBar->addMenu(this->colorMenu);

    this->textMenu->setIcon(QIcon(":/icons/icons/text.png"));

    this->menuBar->addMenu(this->textMenu);

    this->setWidget(this->menuBar);
    this->setFloating(true);
    this->setContentsMargins(10,10,10,10);

}

void Dock::setThin()
{
    this->thickness = 3;
}

void Dock::setMiddle()
{
    this->thickness = 6;
}

void Dock::setBold()
{
    this->thickness = 9;
}

void Dock::setTriangle()
{
    this->option = 102;
}

void Dock::setRectangle()
{
    this->option = 103;
}

void Dock::setPlume()
{
    this->option = 100;
}
