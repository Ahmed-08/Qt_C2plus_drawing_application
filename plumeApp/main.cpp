#include <QApplication>
#include <QtWidgets>
#include "board.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Board *draw = new Board();

    draw->show();

    return a.exec();
}
