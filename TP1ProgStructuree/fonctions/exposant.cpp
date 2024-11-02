#include <iostream>
#include <vector>

#include "multiplication.h"
#include "UtilitairesVecteur.h"
#include "soustraction.h"

std::vector<int> exposant(std::vector<int> nombre1, std::vector<int> nombre2)
{
    if (vecteur_a_entier(nombre2) == 0)
    {
        return {1};
    }

    if (vecteur_a_entier(nombre2) == 1)
    {
        return nombre1;
    }

    std::vector<int> resultat = nombre1;
    std::vector<int> decr1 = {1};

    inverser(nombre2);
    rogner_zeros_inutiles(nombre2);
    inverser(nombre2);

    while (nombre2.size() > 1 || vecteur_a_entier(nombre2) > 1)
    {
        resultat = multiplication(nombre1, resultat);
        
        inverser(resultat);
        rogner_zeros_inutiles(resultat);
        inverser(resultat);

        egaliser_taille_vecteur(nombre2, decr1);
        nombre2 = soustraction(nombre2, decr1);
    }

    return resultat;
}