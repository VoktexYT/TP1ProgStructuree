#include "LectureEtAffichage.h"
#include "constantes.h"
#include "UtilitairesVecteur.h"
#include "convertions.h"

#include <vector>
#include <iostream>


void afficher(std::vector<int> resultat)
{

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

                if (caractere == operateur)
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
            return caractere == EGALE;
        }
    }

    return false;
}
