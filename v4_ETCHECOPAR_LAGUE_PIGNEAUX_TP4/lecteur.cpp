#include "lecteur.h"

Lecteur::Lecteur()
{
    _numDiaporamaCourant = 0;   // =  le lecteur est vide
}

void Lecteur::premiereImage()
{
    (*this)._posImageCourante=0;
}

void Lecteur::avancer()
{
    unsigned int indiceR;
        indiceR=(*this)._posImageCourante;
        if (indiceR<nbImages()-1)
        {
            (*this)._posImageCourante=indiceR+1;
        }
        else
        {
            (*this)._posImageCourante=0;
        }
}

void Lecteur::reculer()
{
    unsigned int indiceR;
        indiceR=(*this)._posImageCourante;
        if (indiceR>0)
        {
            (*this)._posImageCourante=indiceR-1;
        }
        else
        {
            (*this)._posImageCourante = nbImages()-1;
        }
}

void Lecteur::changerDiaporama(unsigned int pNumDiaporama)
{
    // s'il y a un diaporama courant, le vider, puis charger le nouveau Diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama(); // charge le diaporama courant
    }

}

void Lecteur::chargerDiaporama()
{
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    Image* imageACharger;
    imageACharger = new Image(3, "personne", "pinocchio", ":/v2/cartesDisney/Disney_29.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "personne", "Cendrillon", ":/v2/cartesDisney/Disney_2.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(4, "animal", "Mickey", ":/v2/cartesDisney/Disney_19.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(1, "animal", "Bambi", ":/v2/cartesDisney/Disney_3.gif");
    _diaporama.push_back(imageACharger);

     // trier le contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
     // A FAIRE
    for(unsigned int i = 0 ; i < nbImages()-1 ; i++)
    {
        for(unsigned int j = 0 ; j < nbImages()-1-i ; j++)
        {
            if (_diaporama[j]->getRang()>_diaporama[j+1]->getRang())
            {
                Image* saladier=_diaporama[j];
                _diaporama[j]=_diaporama[j+1];
                _diaporama[j+1]=saladier;
            }
        }
    }

     _posImageCourante=0;

     cout << "Diaporama num. " << numDiaporamaCourant() << " selectionne. " << endl;
     cout << nbImages() << " images chargees dans le diaporama" << endl;

}

void Lecteur::viderDiaporama()
{
    if (nbImages () > 0)
    {
        unsigned int taille = nbImages();
        for (unsigned int i = 0; i < taille ; i++)
        {
            _diaporama.pop_back(); /* Removes the last element in the vector,
                                      effectively reducing the container size by one.
                                      AND deletes the removed element */
        }
     _posImageCourante=0;
    }
    cout << nbImages() << " images restantes dans le diaporama." << endl;

}

void Lecteur::afficher()
{
    /* affiche les information sur le lecteur :
     * 1) vide (si num. de diaporama = 0) OU BIEN  numéro de diaporama affiché
     * 2) Si un diaporama courant est chargé (num. de diaporama > 0), affiche l'image courante OU BIEN 'diaporama vide'
     *     si ce diaporama n'a aucun image */
    if (numDiaporamaCourant() == 0)
    {
        cout << "Lecteur vide" << endl;
    }
    else
    {
        cout << "Diaporama num. " << numDiaporamaCourant() << endl;

        if (nbImages() == 0)
        {
            cout << "Diaporama vide" << endl;
        }
        else
        {
            cout << "Image courante : ";
            imageCourante()->afficher();
        }
    }
}

unsigned int Lecteur::nbImages()
{
    return _diaporama.size();
}

Image *Lecteur::imageCourante()
{
    return (*this)._diaporama[(*this)._posImageCourante];
}

unsigned int Lecteur::numDiaporamaCourant()
{
    return (*this)._numDiaporamaCourant;
}
