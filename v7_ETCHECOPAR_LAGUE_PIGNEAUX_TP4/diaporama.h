#ifndef DIAPORAMA_H
#define DIAPORAMA_H

#include <iostream>
#include "image.h"
#include <vector>
using namespace std;

class Diaporama
{
public:
    Diaporama(unsigned int pidDiaporama,
              string ptitreDiaporama, unsigned int pvitesseDefilement);
    unsigned int getIdDiaporama();
    string getTitreDiaporama();
    unsigned int getVitesseDefilement();
    void chargerDiapo(Image*);
    void trier();
    void enleverImage();
    unsigned int nbImages();
    Image *imageCourante(unsigned int);
    void afficher();

private:
    unsigned int _idDiaporama;
    string _titreDiaporama;
    unsigned int _vitesseDefilement;
    vector <Image*> _diaporama;
};

#endif // DIAPORAMA_H
