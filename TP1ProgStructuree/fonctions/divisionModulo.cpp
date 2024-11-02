#include <vector>
#include <iostream>

#include "divisionModulo.h"
#include "constantes.h"
#include "UtilitairesVecteur.h"
#include "soustraction.h"
#include "addition.h"


std::vector<int> divisionModulo(std::vector<int> nombre1, std::vector<int> nombre2, bool estUneDivision)
{
    int entierNombre1 = vecteur_a_entier(nombre1);
    int entierNombre2 = vecteur_a_entier(nombre2);

    if (entierNombre1 == 0)
    {
        return {0};
    }

    if (entierNombre2 == 0)
    {
        return CODE_ERREUR_DIV_MOD;
    }

    std::vector<int> compteur = {0};
    std::vector<int> inc1 = {1};

    while (vecteur_a_entier(nombre2) <= vecteur_a_entier(nombre1))
    {
        nombre1 = soustraction(nombre1, nombre2);
        egaliser_taille_vecteur(nombre1, nombre2);
        
        egaliser_taille_vecteur(compteur, inc1);
        compteur = addition(compteur, inc1);
    }

    if (estUneDivision)
    {
        return compteur;
    }

    else
    {
        inverser(nombre1);
        rogner_zeros_inutiles(nombre1);
        inverser(nombre1);
        return nombre1;
    }
}
