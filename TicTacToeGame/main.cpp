#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    glutInit(&argc, argv);
    glutCreateWindow("2");
    Widget w;
    w.show();
    return a.exec();
}
