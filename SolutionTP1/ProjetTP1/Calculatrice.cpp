/*

Ce fichier est le point de liaison entre l'utilisateur et les differentes fonctions
d'opération.

 */

// Inclusion des libraries
#include <iostream>
#include <vector>

#include "addition.h"
#include "Calculatrice.h"
#include "constantes.h"
#include "divisionModulo.h"
#include "exposant.h"
#include "multiplication.h"
#include "soustraction.h"
#include "UtilitairesVecteur.h"


/**
 * Exécute le calcul de nombre1 avec nombre2 par rapport à l'opérateur choisie.
 * 
 * @param {std::vector<int>} nombre1 Le vecteur qui représente le premier nombre.
 * @param {char} operateur L'opérateur permettant de choisir le type de calcul.
 * @param {std::vector<int>} nombre2 Le vecteur qui représente le deuxième nombre.
 * @return {std::vector<int>} Le résulat du calcul.
 * @author Ubert Guertin
 * 
 */
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
            resultat = division_modulo(nombre1, nombre2, operateur == DIVISION);
            erreur = resultat == CODE_ERREUR_DIV_MOD;
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

