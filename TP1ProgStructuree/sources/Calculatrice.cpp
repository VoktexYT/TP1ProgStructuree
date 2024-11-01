#include "Calculatrice.h"
#include "../includes/addition.h"
#include "../includes/soustraction.h"
#include "../includes/multiplication.h"
#include "../includes/divisionModulo.h"
#include "UtilitairesVecteur.h"
#include "constantes.h"

#include <vector>
#include <iostream>




std::vector<int> calculer(std::vector<int> nombre1, char operateur, std::vector<int> nombre2, bool erreur)
{
    egaliser_taille_vecteur(nombre1, nombre2);

    std::vector<int> resultat;

    return {};

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
        resultat = divisionModulo(nombre1, nombre2);
        break;
    case MODULO:
        resultat = divisionModulo(nombre1, nombre2);
        break;
    case EXPOSANT:
        // resultat = exposa(nombre1, nombre2);
        break;
    
    
    default:
        break;
    }

    inverser(resultat);

    std::cout << "=" << std::endl;

    afficher_entier_vecteur(resultat);

    return {};
}

