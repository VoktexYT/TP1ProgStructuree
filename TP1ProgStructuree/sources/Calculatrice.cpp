#include "Calculatrice.h"
#include "../includes/addition.h"
#include "../includes/soustraction.h"
#include "../includes/multiplication.h"
#include "../includes/divisionModulo.h"
#include "UtilitairesVecteur.h"
#include "constantes.h"

#include <vector>
#include <iostream>


void reajuster_taille_vecteur(std::vector<int>& n1, std::vector<int>& n2)
{
    int grandeur_vecteur_nombre1 = n1.size();
    int grandeur_vecteur_nombre2 = n2.size();

    if (grandeur_vecteur_nombre1 > grandeur_vecteur_nombre2)
    {
        inverser(n2);

        grandeur_vecteur_nombre1 -= grandeur_vecteur_nombre2;

        for (int i=0; i<grandeur_vecteur_nombre1; i++)
        {
            n2.push_back(0);
        }

        inverser(n2);
    }

    else if (grandeur_vecteur_nombre2 > grandeur_vecteur_nombre1)
    {
        inverser(n1);

        grandeur_vecteur_nombre2 -= grandeur_vecteur_nombre1;

        for (int i=0; i<grandeur_vecteur_nombre2; i++)
        {
            n1.push_back(0);
        }

        inverser(n1);
    }


}

std::vector<int> calculer(std::vector<int> nombre1, char operateur, std::vector<int> nombre2, bool erreur)
{
    rogner_zeros_inutiles(nombre1);
    rogner_zeros_inutiles(nombre2);

    reajuster_taille_vecteur(nombre1, nombre2);

    afficher_entier_vecteur(nombre1);
    std::cout << operateur << std::endl;
    afficher_entier_vecteur(nombre2);

    inverser(nombre1);
    inverser(nombre2);

    int taille_max_vecteur = nombre1.size();

    std::vector<int> resultat;


    switch (operateur)
    {
    case ADDITION:
        resultat = addition(nombre1, nombre2);
        break;
    case SOUSTRACTION:
        resultat = soustraction(nombre1, nombre2);
        break;
    case MULTIPLICATION:
    case MULTIPLICATION_2:
    case MULTIPLICATION_3:
        resultat = multiplication(nombre1, nombre2);
        break;
    case DIVISION:
        resultat = divisionModulo(nombre1, nombre2);
        break;
    case MODULO:
        resultat = divisionModulo(nombre1, nombre2);
        break;
    case EXPOSANT:
        // resultat = exposa(nombre1, nombre2);
        break;
    
    
    default:
        break;
    }

    inverser(resultat);

    std::cout << "=" << std::endl;

    afficher_entier_vecteur(resultat);

    return {};
}

