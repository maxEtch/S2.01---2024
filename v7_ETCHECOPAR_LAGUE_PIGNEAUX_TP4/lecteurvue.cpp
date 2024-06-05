#include "lecteurvue.h"
#include "ui_lecteurvue.h"

#include "dialog.h"

#include <QDebug>
#include <QTimer>

#include "QMessageBox"

#include "lecteur.h"
#include "image.h"

LecteurVue::LecteurVue(int v, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
    , _vitesse(v)

{

    ui->setupUi(this);
    ui->bArreterDiapo->setEnabled(false);
    ui->bLancerDiapo->setEnabled(false);
    ui->actionVitesse->setEnabled(false);
    ui->actionEnlever_diaporama->setEnabled(false);
    ui->bPrecedent->setEnabled(false);
    ui->bSuivant->setEnabled(false);


    connect(ui ->bLancerDiapo, SIGNAL(clicked()),this, SLOT(lancerDiapo()));
    connect(ui ->bArreterDiapo, SIGNAL(clicked()),this, SLOT(arreterDiapo()));
    connect(ui ->bPrecedent, SIGNAL(clicked()),this, SLOT(precedent()));
    connect(ui ->bSuivant, SIGNAL(clicked()),this, SLOT(suivant()));
    connect(ui->actionCharger_diaporama,SIGNAL(triggered()), this, SLOT(chargerLeDiapo()));
    connect(ui->actionVitesse,SIGNAL(triggered()), this, SLOT(vitesseDefilement()));
    connect(ui->actionEnlever_diaporama,SIGNAL(triggered()), this, SLOT(viderLeDiapo()));
    connect(ui->actionAide,SIGNAL(triggered()), this, SLOT(aide()));

}

// Fonction délai pour attendre 2 secondes
inline void delay(int millisecondsWait)
{
    QEventLoop loop;
    QTimer t;
    t.connect(&t, &QTimer::timeout, &loop, &QEventLoop::quit);
    t.start(millisecondsWait);
    loop.exec();
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::lancerDiapo()
{
    qDebug() << tr("le diapo se lance") << Qt::endl;
    modeAutomatique();

    // Sélection de la première image
    LeLecteur->premiereImage();
    Image *image = LeLecteur->imageCourante();
    QString imageAffichee = QString::fromStdString(image->getChemin());
    QString imageTitre = QString::fromStdString(image->getTitre());
    ui->lTitre->setText(imageTitre);
    ui->lImage->setPixmap(QPixmap(imageAffichee));

    while (true)
    {
        delay(2300-(300*getVitesse()));
        // Si le diapo est arrêté, (l'arrêter rend le bouton Arrêter diapo inutilisable).
        if (!(ui->bArreterDiapo->isEnabled()))
        {
            break;
        }
        // Image suivante
        LeLecteur->avancer();
        Image *image = LeLecteur->imageCourante();
        ui->lTitre->setText(QString::fromStdString(image->getTitre()));
        ui->lImage->setPixmap(QPixmap(QString::fromStdString(image->getChemin())));
    }
}

void LecteurVue::chargerLeDiapo()
{
    qDebug() << "L'utilisateur charge le diaporama";
    ui->actionEnlever_diaporama->setEnabled(true);
    LeLecteur->changerDiaporama(1);
    Image *image = LeLecteur->imageCourante();
    QString imageAffichee = QString::fromStdString(image->getChemin());
    QString imageTitre = QString::fromStdString(image->getTitre());
    ui->lTitre->setText(imageTitre);
    ui->lImage->setPixmap(QPixmap(imageAffichee));
    modeManuel();

}

void LecteurVue::viderLeDiapo()
{
    qDebug() << "L'utilisateur vide le diaporama";
    modeManuel();

}

void LecteurVue::arreterDiapo()
{
     qDebug() << tr("le diapo s'arrête") << Qt::endl;
     modeManuel();
}

void LecteurVue::suivant()
{
    LeLecteur->avancer();
    Image *image = LeLecteur->imageCourante();

    ui->lTitre->setText(QString::fromStdString(image->getTitre()));
    ui->lImage->setPixmap(QPixmap(QString::fromStdString(image->getChemin())));
    modeManuel();
}

void LecteurVue::precedent()
{
    LeLecteur->reculer();
    Image *image = LeLecteur->imageCourante();

    ui->lTitre->setText(QString::fromStdString(image->getTitre()));
    ui->lImage->setPixmap(QPixmap(QString::fromStdString(image->getChemin())));
    modeManuel();
}

void LecteurVue::aide()
{
    qDebug() << "J'affiche le A Propos de" << Qt::endl;
    QMessageBox msgBox;
    msgBox.setText("Version : 7 \n "
                   "Date de dernière modification : 06/06/2024 \n "
                   "Auteur : ETCHECOPAR Maxime, LAGÜE Théo, PIGNEAUX Loris");
    msgBox.exec();
}

void LecteurVue::modeAutomatique()
{
    ui->lMode->setText("Mode Automatique");
    ui->bLancerDiapo->setEnabled(false);
    ui->bArreterDiapo->setEnabled(true);

}

void LecteurVue::modeManuel()
{
    ui->lMode->setText("Mode Manuel");
    ui->bLancerDiapo->setEnabled(true);
    ui->bArreterDiapo->setEnabled(false);
    ui->bPrecedent->setEnabled(true);
    ui->bSuivant->setEnabled(true);

}

void LecteurVue::vitesseDefilement()
{
    dlg->show();
}

void LecteurVue::setDialog(Dialog * d)
{
    dlg = d;
}

void LecteurVue::changerVitesse(int nouvelleVitesse)
{
    _vitesse = nouvelleVitesse;
    qDebug() << "Nouvelle vitesse : " << _vitesse << Qt::endl;
}

int LecteurVue::getVitesse()
{
    return _vitesse;
}
