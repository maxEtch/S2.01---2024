#include "lecteurvue.h"
#include "dialog.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{    
    QApplication a(argc, argv);
    Dialog *d = new Dialog();
    LecteurVue w; // Vue contenant le diaporama

    // faire pointer la fenêtre de dialogue vers la vue et inversement
    d->setLecteurVue(&w);
    w.setDialog(d);
    w.show();
    return a.exec();
}
