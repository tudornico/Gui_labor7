#include "my_ui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    My_UI w;
    w.show();
    return a.exec();
}
