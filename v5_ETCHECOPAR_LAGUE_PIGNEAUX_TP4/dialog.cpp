#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->SBVitesseDefil, SIGNAL(valueChanged(int)), this, SLOT(reglageVitesse()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::reglageVitesse()
{
    _leLecteurVue->changerVitesse(ui->SBVitesseDefil->value());
    // Enregistre la vitesse (configurée dans la spin box SBVitesseDefil) dans le lecteur vue.
}

LecteurVue* Dialog::getLecteurVue()
{
    return _leLecteurVue;
}

void Dialog::setLecteurVue(LecteurVue *w)
{
    _leLecteurVue = w;
}
