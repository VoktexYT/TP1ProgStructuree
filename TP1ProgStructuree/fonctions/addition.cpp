#include <vector>

#include "addition.h"
#include "UtilitairesVecteur.h"


std::vector<int> addition(std::vector<int> nombre1, std::vector<int> nombre2)
{
    // rogner_zeros_inutiles(nombre1);
    // rogner_zeros_inutiles(nombre2);

    inverser(nombre1);
    inverser(nombre2);

    std::vector<int> resultat;

    int retenu = 0;

    for (int i=0; i<nombre1.size(); i++)
    {
        int chiffre_index_n1 = nombre1.at(i);
        int chiffre_index_n2 = nombre2.at(i);

        int somme = chiffre_index_n1 + chiffre_index_n2 + retenu;

        if (somme >= 10)
        {
            retenu = 1;
            somme -= 10;
        }

        else
        {
            retenu = 0;
        }

        resultat.push_back(somme);   
    }

    if (retenu != 0)
    {
        resultat.push_back(retenu);
    }

    inverser(resultat);

    return resultat;
}
