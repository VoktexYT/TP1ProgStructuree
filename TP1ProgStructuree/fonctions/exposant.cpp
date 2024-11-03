/*

Ce programme permet de faire un exposant avec 2 vecteurs de nombres

*/

// Inclusion des librairies
#include <iostream>
#include <vector>

#include "netoyage.h"
#include "multiplication.h"
#include "soustraction.h"
#include "UtilitairesVecteur.h"


/**
 * Calcule l'exposant manuellement entre 2 vecteurs de nombres.
 * 
 * @param {std::vector<int>} nombre1 Le premier vecteur qui représente un nombre.
 * @param {std::vector<int>} nombre2 Le deuxième vecteur qui représente un nombre.
 * @return {std::vector<int>} Retourne l'exponentiation des deux vecteurs nombres
 * @author Ubert Guertin
 * 
 * nombre1 = {2}
 * nombre2 = {3}
 * 
 * calcul = nombre1 ^ nombre2
 *        = {8}
 */
std::vector<int> exposant(std::vector<int> nombre1, std::vector<int> nombre2)
{
    // Un nombre exposant 0 est toujours égale à 1.
    if (vecteur_a_entier(nombre2) == 0)
    {
        return {1};
    }

    // Un nombre exposant 1 est toujours égale à lui-même.
    if (vecteur_a_entier(nombre2) == 1)
    {
        return nombre1;
    }

    std::vector<int> resultat = nombre1;
    std::vector<int> decrinmentation = {1};

    netoyage_vecteur_nombre(nombre2, true);

    // Faire la multiplication tant que l'exposant est supérieur à 1.
    while (nombre2.size() > 1 || vecteur_a_entier(nombre2) > 1)
    {
        resultat = multiplication(nombre1, resultat);
        
        egaliser_taille_vecteur(nombre2, decrinmentation);
        nombre2 = soustraction(nombre2, decrinmentation);

        netoyage_vecteur_nombre(resultat, true);
    }

    return resultat;
}
