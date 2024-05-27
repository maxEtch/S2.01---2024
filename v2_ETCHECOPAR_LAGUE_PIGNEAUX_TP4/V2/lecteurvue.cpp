#include "lecteurvue.h"
#include "ui_lecteurvue.h"

#include <QDebug>

#include "QMessageBox"

#include "lecteur.h"
#include "image.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{

    ui->setupUi(this);
    ui->bPrecedent->setEnabled(false);
    ui->bSuivant->setEnabled(false);
    ui->CBMode->setEnabled(false);
    ui->bLancerDiapo->setEnabled(false);
    ui->bArreterDiapo->setEnabled(false);


    connect(ui ->bLancerDiapo, SIGNAL(clicked()),this, SLOT(lancerDiapo()));
    connect(ui ->bArreterDiapo, SIGNAL(clicked()),this, SLOT(arreterDiapo()));
    connect(ui ->bPrecedent, SIGNAL(clicked()),this, SLOT(precedent()));
    connect(ui ->bSuivant, SIGNAL(clicked()),this, SLOT(suivant()));
    connect(ui->actionCharger_diaporama,SIGNAL(triggered()), this, SLOT(chargerLeDiapo()));
    connect(ui->actionEnlever_diaporama,SIGNAL(triggered()), this, SLOT(viderLeDiapo()));
    connect(ui->actionAide,SIGNAL(triggered()), this, SLOT(aide()));

    ui->bPrecedent->setEnabled(true);
    ui->bSuivant->setEnabled(true);
    ui->CBMode->setEnabled(true);
    ui->bLancerDiapo->setEnabled(true);
    ui->bArreterDiapo->setEnabled(true);


}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::lancerDiapo()
{
    qDebug() << tr("le diapo se lance") << Qt::endl;
}

void LecteurVue::chargerLeDiapo()
{
    qDebug() << "L'utilisateur charge le diaporama";
}

void LecteurVue::viderLeDiapo()
{
    qDebug() << "L'utilisateur vide le diaporama";
}

void LecteurVue::arreterDiapo()
{
     qDebug() << tr("le diapo s'arrête") << Qt::endl;
}

void LecteurVue::suivant()
{
    qDebug() << "Image suivante";
}

void LecteurVue::precedent()
{
    qDebug() << "Image precedente";
}

void LecteurVue::aide()
{
    qDebug() << "On affiche la fenetre de dialogue de à propos" << Qt::endl;

}

void LecteurVue::mode()
{

}


