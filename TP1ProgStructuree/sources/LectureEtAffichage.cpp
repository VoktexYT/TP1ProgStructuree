/*

Les fonctions dans ce fichier permettent de lire et afficher les nombres dans le terminal.

*/

// Inclusion des librairies
#include <vector>
#include <iostream>

#include "constantes.h"
#include "convertions.h"
#include "LectureEtAffichage.h"
#include "UtilitairesVecteur.h"


/**
 * Afficher un vecteur entier avec un espacement tous les FREQUENCE_ESPACEMENT chiffres.
 * 
 * @param {std::vector<int>} vecteur Le vecteur qui représente un nombre.
 * @return {void}
 * @author Ubert Guertin
 * 
 * vec = {1, 2, 3, 4, 5, 6, 7, 8, 9}
 * FREQUENCE_ESPACEMENT = 3
 * 
 * = 123 456 789
 */
void afficher(std::vector<int> vecteur)
{
    for (int i=vecteur.size()-1; i>=0; i--)
    {
        std::cout << vecteur.at(i);

        // Executé à tous les x chiffres
        if (i % FREQUENCE_ESPACEMENT == 0)
        {
            std::cout << " ";
        }
    }
}


/**
 * Lire l'entré de l'utilisateur et s'arrêter losqu'un opérateur est détecté.
*/
bool lire_premier_nombre_et_operateur(std::vector<int> &nombre1, char &operateur)
{
    nombre1 = {};

    while (true)
    {
        char caractere;
        std::cin >> caractere;

        if (isdigit(caractere))
        {
            int chiffre = chiffre_caractere_a_entier(caractere);

            if (chiffre != CODE_ERREUR)
            {
                nombre1.push_back(chiffre);
            }
        }

        else
        {
            for (int i=0; i<OPERATEURS.size(); i++)
            {
                operateur = OPERATEURS[i];

                if (caractere == operateur && nombre1.size() > 0)
                {
                    return true;
                }
            }

            return false;
        }
    }

    return false;
}

bool lire_deuxieme_nombre(std::vector<int> &nombre2)
{
    nombre2 = {};

    while (true)
    {
        char caractere;
        std::cin >> caractere;

        if (isdigit(caractere))
        {
            int chiffre = chiffre_caractere_a_entier(caractere);

            if (chiffre != CODE_ERREUR)
            {
                nombre2.push_back(chiffre);
            }
        }

        else
        {
            return caractere == EGALE && nombre2.size() > 0;
        }
    }

    return false;
}
