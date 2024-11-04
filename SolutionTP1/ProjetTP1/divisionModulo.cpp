/*

Le programme dans ce fichier permet de faire une division et un modulo entre 2 vecteurs entiers.

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


std::vector<int> division_modulo(std::vector<int> nombre1, std::vector<int> nombre2, bool estUneDivision)
{
    // Netoyage des 2 nombres.
    std::vector<int> nombre1Copie = nombre1;
    std::vector<int> nombre2Copie = nombre2;

    netoyage_vecteur_nombre(nombre1Copie, false);
    netoyage_vecteur_nombre(nombre2Copie, false);

    // 0 divisé par quelque chose est toujours égale à 0.
    if (nombre1Copie.size() == 1 && nombre1Copie.at(0) == 0)
    {
        return VECTEUR_ZERO;
    }

    // Un nombre divisé par 0 donne : ZeroDivisionError
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

    // C'est un modulo
    netoyage_vecteur_nombre(nombre1, true);

    return nombre1;
    
}
