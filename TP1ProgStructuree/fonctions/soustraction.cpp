/*

Ce fichier contient le programme permettant de faire une soustraction entre 2 vecteurs nombres 

*/

// Inclusion des librairies
#include <iostream>
#include <vector>

#include "soustraction.h"
#include "UtilitairesVecteur.h"


/**
 * Calcule la soustraction manuellement entre 2 vecteurs de nombres.
 * 
 * @param {std::vector<int>} nombre1 Le premier vecteur qui représente un nombre.
 * @param {std::vector<int>} nombre2 Le deuxième vecteur qui représente un nombre.
 * @return {std::vector<int>} Retourne la somme des deux vecteurs nombres
 * @author Ubert Guertin
 * 
 * nombre1 = {1, 4, 0}
 * nombre2 = {0, 2, 0}
 * 
 * calcul = nombre1 - nombre2
 *        = {1, 2, 0}
 */
std::vector<int> soustraction(std::vector<int> nombre1, std::vector<int> nombre2)
{


    bool nombre1PlusGrand = premier_vecteur_plus_grand_que_deuxieme(nombre1, nombre2, false);
    bool nombre2PlusGrand = premier_vecteur_plus_grand_que_deuxieme(nombre2, nombre1, false);

    inverser(nombre1);
    inverser(nombre2);

    int retenu = 0;
    std::vector<int> resultat;

    int signe = 1;

    if (nombre2PlusGrand)
    {
        signe = -1;
    }

    if (nombre1PlusGrand || nombre2PlusGrand)
    {
        for (int i=0; i<nombre1.size(); i++)
        {
            int chiffre_index_n1 = nombre1.at(i);
            int chiffre_index_n2 = nombre2.at(i);

            int difference = signe * (chiffre_index_n1 - chiffre_index_n2) - retenu;

            if (difference < 0)
            {
                retenu = 1;
                difference += 10;
            }

            else
            {
                retenu = 0;
            }

            if (nombre2PlusGrand && i == nombre1.size()-1)
            {
                if (difference == 0)
                {
                    resultat.at(i-1) *= -1;
                }

                else
                {
                    difference *= -1;
                }
            }

            resultat.push_back(difference); 
        }
        rogner_zeros_inutiles(resultat);
    }

    else
    {
        resultat = {0};
    }

    inverser(resultat);
    
    return resultat;
}
