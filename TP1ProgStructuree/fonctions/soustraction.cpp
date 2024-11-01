#include <vector>
#include <iostream>

#include "soustraction.h"
#include "UtilitairesVecteur.h"

//   12
//   05

//  -12
std::vector<int> soustraction(std::vector<int> nombre1, std::vector<int> nombre2)
{
            std::cout << " --- " << std::endl;
    inverser(nombre1);
    inverser(nombre2);

    // std::cout << vecteur_a_entier(nombre1) << " / " << vecteur_a_entier(nombre2) << std::endl;
    int entier_vec_nombre1 = vecteur_a_entier(nombre1);
    int entier_vec_nombre2 = vecteur_a_entier(nombre2);
    
    std::cout << "$$" << std::endl;
    
    std::cout << entier_vec_nombre1 << std::endl;
    std::cout << entier_vec_nombre2 << std::endl;

    afficher_entier_vecteur(nombre1);
    afficher_entier_vecteur(nombre2);

    std::cout << "$$" << std::endl;

    int retenu = 0;
    std::vector<int> resultat;

    if (entier_vec_nombre1 > entier_vec_nombre2)
    {
        for (int i=0; i<nombre1.size(); i++)
        {
            int chiffre_index_n1 = nombre1.at(i);
            int chiffre_index_n2 = nombre2.at(i);

            int difference = chiffre_index_n1 - chiffre_index_n2 - retenu;

            if (difference < 0)
            {
                retenu = 1;
                difference *= -1;
            }

            else
            {
                retenu = 0;
            }

            std::cout << difference << std::endl;
            resultat.push_back(difference);   
        }
    }
            std::cout << " --- " << std::endl;
    
    return resultat;
}
