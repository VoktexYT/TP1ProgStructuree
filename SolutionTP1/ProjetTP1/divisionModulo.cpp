/*

Ce fichier permet de faire une division et un modulo entre 2 vecteurs

*/

// Inclusion des librairies
#include <iostream>
#include <vector>

#include "addition.h"
#include "constantes.h"
#include "divisionModulo.h"
#include "netoyage.h"
#include "soustraction.h"
#include "UtilitairesVecteur.h"


/**
 * Fait la division et le modulo manuellement entre 2 vecteurs de nombre.
 * 
 * @param {std::vector<int>} nombre1 Le premier vecteur représente le premier nombre.
 * @param {std::vector<int>} nombre2 Le deuxième vecteur représente le deuxième nombre.
 * @param {bool} estUneDivision Cet argument permet de d'effectuer une division si true
 *                              ou un modulo si false.
 * @return {std::vector<int>} Retourne le quotient de la division ou du modulo.
 * @author Ubert Guertin
 * 
 * nombre1 = {1, 5}
 * nombre2 = {0, 3}
 * 
 * estUneDivision = true
 * calcule = nombre1 / nombre2
 *         = {5}
 * 
 * estUneDivision = false
 * calcule = nombre1 % nombre2
 *         = {0}
 */
std::vector<int> division_modulo(std::vector<int> nombre1, std::vector<int> nombre2, bool estUneDivision)
{
    // Netoyage des 2 nombres.
    std::vector<int> nombre1Copie = nombre1;
    std::vector<int> nombre2Copie = nombre2;

    netoyage_vecteur_nombre(nombre1Copie, false);
    netoyage_vecteur_nombre(nombre2Copie, false);

    // Zero divisé par quelque chose est toujours égale à zéro.
    if (nombre1Copie.size() == 1 && nombre1Copie.at(0) == 0)
    {
        return VECTEUR_ZERO;
    }

    // Un nombre divisé par zéro donne : ZeroDivisionError
    if (nombre2Copie.size() == 1 && nombre2Copie.at(0) == 0)
    {
        return CODE_ERREUR_DIV_MOD;
    }


    std::vector<int> compteur = VECTEUR_ZERO;
    std::vector<int> incrementation = VECTEUR_UN;

    // Soustraction des deux nombres jusqu'à que nombre1 soit plus petit que nombre2
    // while (nombre1 >= nombre2)
    while (premier_vecteur_plus_grand_que_deuxieme(nombre1, nombre2, true))
    {
        nombre1 = soustraction(nombre1, nombre2);

        egaliser_taille_vecteur(nombre1, nombre2);
        
        egaliser_taille_vecteur(compteur, incrementation);
        
        compteur = addition(compteur, incrementation);
    }

    if (estUneDivision)
    {
        return compteur;
    }

    netoyage_vecteur_nombre(nombre1, true);

    return nombre1;
    
}
