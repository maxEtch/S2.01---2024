#include "lecteurvue.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LecteurVue w;
    w.show();
    return a.exec();
}
