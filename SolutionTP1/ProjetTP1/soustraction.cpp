/*

Ce fichier contient le programme permettant de faire une soustraction entre 2 vecteurs nombres 

*/

// Inclusion des librairies
#include <iostream>
#include <vector>

#include "constantes.h"
#include "netoyage.h"
#include "soustraction.h"
#include "UtilitairesVecteur.h"


// Déclaration des prototypes de fonctions
int calcul_soustraction(int chiffre1, int chiffre2, int& retenue, int signe);
int recuperer_le_signe(bool nombre2PlusGrand);


std::vector<int> soustraction(std::vector<int> nombre1, std::vector<int> nombre2)
{
    bool nombre1PlusGrand = premier_vecteur_plus_grand_que_deuxieme(nombre1, nombre2, false);
    bool nombre2PlusGrand = premier_vecteur_plus_grand_que_deuxieme(nombre2, nombre1, false);

    inverser(nombre1);
    inverser(nombre2);

    // Déclaration de variables par défauts
    int retenu = 0;
    
    int tailleNombre = nombre1.size();
    
    int signe = recuperer_le_signe(nombre2PlusGrand);
 
    std::vector<int> resultat = VECTEUR_ZERO;


    if (nombre1PlusGrand || nombre2PlusGrand)
    {
        resultat.clear();

        // Effectuer la soustraction de chaque chiffre des deux nombres
        for (int i=0; i<tailleNombre; i++)
        {
            int chiffre1 = nombre1.at(i);
            int chiffre2 = nombre2.at(i);

            int difference = calcul_soustraction(chiffre1, chiffre2, retenu, signe);

            if (nombre2PlusGrand && i == tailleNombre-1)
            {
                // Inverser le signe de l'avant dernier chiffre dans le résultat, si il n'y a pas de différence.
                // Le chiffre -0 n'existe pas.
                if (!difference)
                {
                    resultat.at(i - 1) *= NEGATIF;
                }

                difference *= NEGATIF;
            }

            resultat.push_back(difference); 
        }

        netoyage_vecteur_nombre(resultat, false);
    }

    return resultat;
}

/**
  * Calcule la soustraction manuellement entre 2 chiffres.
 * 
 * @param {int} chiffre1 Le premier chiffre de la soustraction.
 * @param {int} chiffre2 Le deuxième chiffre de la soustraction.
 * @param {int&} retenue Un référence qui représente la retenue du calcul précédent.
 * @param {int} signe Un signe entre {POSITIF, NEGATIF}.
 * @return {int} différence La difference de la soustraction.
 * @author Ubert Guertin
 */
int calcul_soustraction(int chiffre1, int chiffre2, int& retenue, int signe)
{
    int difference = signe * (chiffre1 - chiffre2) - retenue;

    if (difference < 0)
    {
        retenue = 1;
        difference += BASE;
    }

    else
    {
        retenue = 0;
    }

    return difference;
}


/**
  * Récupérer le signe du résultat de la soustraction. Si le nombre2 est supérieur, le signe sera négatif.
 * 
 * @param {bool} nombre2PlusGrand Le bool pour savoir si le deuxieme nombre est le plus grand.
 * @return {int} Le signe du résultat de la soustraction.
 * @author Ubert Guertin
 */
int recuperer_le_signe(bool nombre2PlusGrand)
{
    int signe = POSITIF;

    if (nombre2PlusGrand)
    {
        signe = NEGATIF;
    }

    return signe;
}
