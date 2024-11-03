/*

Ce fichier contient le programme permettant de netoyer un vecteur nombre

*/

// Inclusion des librairies
#include <vector>

#include "UtilitairesVecteur.h"

/**
 * Fait un netoyage dans un vecteur nombre.
 * 
 * @param {std::vector<int>&} vecteur La réference du vecteur nombre.
 * @param {bool} inverserDébut Cet argument permet de d'inverser le vecteur si true.
 * @return {void}
 * @author Ubert Guertin
 * 
 * vecteur = {0, 0, 3, 0, 3}
 *         = {3, 0, 3, 0, 0}
 *         = {3, 0, 3}
 */
void netoyage_vecteur_nombre(std::vector<int>& vecteur, bool inverserDebut)
{
    if (inverserDebut)
    {
        inverser(vecteur);
    }

    rogner_zeros_inutiles(vecteur);
    inverser(vecteur);
}
