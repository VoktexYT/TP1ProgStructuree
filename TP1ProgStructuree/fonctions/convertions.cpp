/*

Ce fichier permet de faire des convertions entre 2 états.

*/

// Inclusion des librairies
#include <iostream>

#include "constantes.h"
#include "convertions.h"


/**
 * Converti un caratère (chiffre) en type entier.
 * 
 * @param {char} caractere Un caractere à convertir
 * @return {int} Retourne la convertion de char en int d'un caractere
 * 
 * caractere = '1'
 * = 1
 * 
 * caractere = '$'
 * = CODE_ERREUR
 */
int chiffre_caractere_a_entier(char caractere)
{
    int chiffre_entier = CODE_ERREUR;

    if (isdigit(caractere))
    {
        chiffre_entier = CHIFFRES.find(caractere);
    }

    return chiffre_entier;
}
