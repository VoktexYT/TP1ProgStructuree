#include "Calculatrice.h"
#include "addition.h"
#include "soustraction.h"
#include "multiplication.h"
#include "divisionModulo.h"
#include "exposant.h"
#include "UtilitairesVecteur.h"
#include "constantes.h"

#include <vector>
#include <iostream>



std::vector<int> calculer(std::vector<int> nombre1, char operateur, std::vector<int> nombre2, bool& erreur)
{
    egaliser_taille_vecteur(nombre1, nombre2);
    erreur = false;
    std::vector<int> resultat;

    switch (operateur)
    {
    case ADDITION:
        resultat = addition(nombre1, nombre2);
        break;
    case SOUSTRACTION:
        resultat = soustraction(nombre1, nombre2);
        break;
    case MULTIPLICATION:
    case MULTIPLICATION_2:
    case MULTIPLICATION_3:
        resultat = multiplication(nombre1, nombre2);
        break;
    case DIVISION:
    case MODULO:
        resultat = divisionModulo(nombre1, nombre2, operateur == DIVISION);
        if (resultat == CODE_ERREUR_DIV_MOD)
        {
            erreur = true;
        }
        break;
    case EXPOSANT:
        resultat = exposant(nombre1, nombre2);
        break;
    
    
    default:
        break;
    }

    inverser(resultat);

    return resultat;
}

