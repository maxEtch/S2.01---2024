#include "lecteurvue.h"
#include "dialog.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LecteurVue w; // Vue contenant le diaporama
    Dialog *d = new Dialog();

    // faire pointer la fenêtre de dialogue vers la vue et inversement
    d->setLecteurVue(&w);
    w.setDialog(d);

    // Afficher la vue
    w.show();
    return a.exec();
}
