/*

Le programme dans ce fichier permet de faire des convertions entre 2 états.

*/

// Inclusion des librairies
#include <iostream>

#include "constantes.h"
#include "convertions.h"


int chiffre_caractere_a_entier(char caractere)
{
    int chiffre_entier = CODE_ERREUR;

    if (isdigit(caractere))
    {
        // L'index du chiffre dans CHIFFRES représente le nombre entier.
        chiffre_entier = CHIFFRES.find(caractere);
    }

    return chiffre_entier;
}
