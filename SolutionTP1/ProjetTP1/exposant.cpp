/*

Le programme dans ce fichier permet de faire un exposant entre 2 vecteurs entiers.

*/

// Inclusion des librairies
#include <iostream>
#include <vector>

#include "constantes.h"
#include "netoyage.h"
#include "multiplication.h"
#include "soustraction.h"
#include "UtilitairesVecteur.h"


std::vector<int> exposant(std::vector<int> nombre1, std::vector<int> nombre2)
{
    // Un nombre exposant 0 est toujours égale à 1.
    if (vecteur_a_entier(nombre2) == 0)
    {
        return VECTEUR_UN;
    }

    // Un nombre exposant 1 est toujours égale à lui-même.
    if (vecteur_a_entier(nombre2) == 1)
    {
        return nombre1;
    }

    std::vector<int> resultat = nombre1;
    std::vector<int> decrinmentation = VECTEUR_UN;

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
