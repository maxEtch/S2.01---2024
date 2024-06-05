#ifndef LECTEUR_H
#define LECTEUR_H
#include "image.h"
#include <vector>
#include "database.h"
#include "diaporama.h"

typedef vector<Image*> _diaporama;   // Structure de données contenant les infos sur les images

class Lecteur
{
public:
    Lecteur();
    void premiereImage();       // affecte à _posImageCourante 0
    void avancer();             // incrémente _posImageCourante, modulo nbImages()
    void reculer();             // décrémente _posImageCourante, modulo nbImages()
    void changerDiaporama(unsigned int pNumDiaporama);    // permet de choisir un diaporama, 0 si aucun diaporama souhaité
    void afficher();            // affiche les informations sur lecteur-diaporama et image courante
    unsigned int nbImages();    // affiche la taille de _diaporama
    Image* imageCourante();     // retourne le pointeur vers l'image courante
    unsigned int numDiaporamaCourant();

private:
    unsigned _numDiaporamaCourant;   // numéro du diaporama courant, par défaut 0
    unsigned int _posImageCourante;  /* position, dans le diaporama,
                                        de l'image courante.
                                        Indéfini quand diaporama vide.
                                        Démarre à 0 quand diaporama non vide */
private:
    void chargerDiaporama(unsigned int pNumDiaporama);    // charge dans _diaporama les images du _numDiaporamaCourant
    void viderDiaporama();
    Database *mydb;
    Diaporama *mondiapo;
};

#endif // LECTEUR_H
