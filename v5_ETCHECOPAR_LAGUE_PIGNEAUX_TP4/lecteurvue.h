#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include "lecteur.h"


QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class Dialog;
class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(int v=1, QWidget *parent = nullptr);
    ~LecteurVue();
    int getVitesse();
    void changerVitesse(int);
    void setDialog (Dialog * d);

public slots:
    void lancerDiapo();
    void arreterDiapo();
    void precedent();
    void suivant();
    void aide(); // "À propos de..." ouvre une boîte de message donnant des informations
    void modeAutomatique();
    void modeManuel();
    void chargerLeDiapo();
    void vitesseDefilement();
    void viderLeDiapo();


private:
    Ui::LecteurVue *ui;
    Dialog * dlg; // Boîte de dialogue permettant de régler la vitesse de défilement
    Lecteur* LeLecteur = new Lecteur();
    int _vitesse;
    QString rangImg;
    QString nbrImage;

};
#endif // LECTEURVUE_H
