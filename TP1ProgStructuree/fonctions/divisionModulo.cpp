#include <vector>
#include <iostream>

#include "divisionModulo.h"
#include "constantes.h"
#include "UtilitairesVecteur.h"
#include "soustraction.h"
#include "addition.h"


std::vector<int> divisionModulo(std::vector<int> nombre1, std::vector<int> nombre2, bool estUneDivision)
{
    std::vector<int> entierNombre1 = nombre1;
    std::vector<int> entierNombre2 = nombre2;

    inverser(entierNombre1);
    inverser(entierNombre2);

    rogner_zeros_inutiles(entierNombre1);
    rogner_zeros_inutiles(entierNombre2);


    if (entierNombre1.size() == 1 && entierNombre1.at(0) == 0)
    {
        return {0};
    }

    if (entierNombre2.size() == 1 && entierNombre2.at(0) == 0)
    {
        return CODE_ERREUR_DIV_MOD;
    }

    std::vector<int> compteur = {0};
    std::vector<int> inc1 = {1};

    while (premier_vecteur_plus_grand_que_deuxieme(nombre2, nombre1, true))
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
