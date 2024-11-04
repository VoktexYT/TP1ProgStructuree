/*

Ce fichier contient le programme permettant de netoyer un vecteur nombre

*/

// Inclusion des librairies
#include <vector>

#include "UtilitairesVecteur.h"


void netoyage_vecteur_nombre(std::vector<int>& vecteur, bool inverserDebut)
{
    if (inverserDebut)
    {
        inverser(vecteur);
    }

    rogner_zeros_inutiles(vecteur);
    inverser(vecteur);
}
