#include "convertions.h"
#include "constantes.h"

#include <iostream>



int chiffre_caractere_a_entier(char chiffre)
{
    for (int i=0; i<CHIFFRES.size(); i++)
    {
        if (chiffre == CHIFFRES.at(i))
        {
            return i;
        }
    }

    std::cout << "Erreur: l'argument 'chiffre' devrait être compris entre '0' et '9'." << std::endl;
    
    return -1;
}
