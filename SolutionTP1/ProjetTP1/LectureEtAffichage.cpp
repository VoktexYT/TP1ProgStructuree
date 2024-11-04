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


void afficher(std::vector<int> vecteur)
{
    for (int i=vecteur.size()-1; i>=0; i--)
    {
        std::cout << vecteur.at(i);

        // Exécuté à tous les x chiffres
        if (i % FREQUENCE_ESPACEMENT == 0)
        {
            std::cout << " ";
        }
    }
}


bool lire_premier_nombre_et_operateur(std::vector<int> &nombre1, char &operateur)
{
    nombre1 = VECTEUR_VIDE;

    while (true)
    {
        // Récupère un caractère et l'ajoute à "nombre1" si c'est un chiffre.
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

        // Vérifie si le caractère spécial est un opérateur
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
    nombre2 = VECTEUR_VIDE;

    while (true)
    {
        // Récupère un caractère et l'ajoute à "nombre1" si c'est un chiffre.
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

        // Vérifie si le caractère spécial est un égale.
        else
        {
            return caractere == EGALE && nombre2.size() > 0;
        }
    }

    return false;
}
