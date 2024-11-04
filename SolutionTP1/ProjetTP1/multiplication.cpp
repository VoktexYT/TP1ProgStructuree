/*

Ce programme fait la multiplication entre 2 vecteurs entiers.

*/

// Inclusion des libraries
#include <iostream>
#include <vector>

#include "addition.h"
#include "constantes.h"
#include "netoyage.h"
#include "multiplication.h"
#include "UtilitairesVecteur.h"


// Déclaration des prototypes de fonctions
void multiplication_chiffre(int chiffreNombre1, int chiffreNombre2, int& retenue, std::vector<int>& intermediaire);
bool verification_multiplication_zero(std::vector<int> nombre1, std::vector<int> nombre2);


std::vector<int> multiplication(std::vector<int> nombre1, std::vector<int> nombre2)
{
    if (verification_multiplication_zero(nombre1, nombre2))
    {
        return VECTEUR_ZERO;
    }

    // Commencer par les unités
    inverser(nombre1);
    inverser(nombre2);

    int nombreZero = 0;
    int retenue = 0;
    std::vector<int> resultat;

    // Récupérer les chiffres du premier nombre
    for (int indexNombre2=0; indexNombre2<nombre2.size(); indexNombre2++)
    {
        int chiffreNombre2 = nombre2.at(indexNombre2);

        // Remplir le vecteur de zéros (1 zéro = dizaine, 2 zéros = centaine, etc..)
        std::vector<int> intermediaire(nombreZero, 0);

        // Récupérer les chiffres du deuxième nombre
        for (int indexNombre1=0; indexNombre1<nombre1.size(); indexNombre1++)
        {
            int chiffreNombre1 = nombre1.at(indexNombre1);

            multiplication_chiffre(chiffreNombre1, chiffreNombre2, retenue, intermediaire);
        }

        // Ajouter la retenue à la fin de la multiplication intermédiaire
        if (retenue > 0)
        {
            intermediaire.push_back(retenue);
            retenue = 0;
        }

        // Netoyer le vecteur intermédiaire
        inverser(intermediaire);
        egaliser_taille_vecteur(intermediaire, resultat);

        // Additioner les intermédiaires
        resultat = addition(intermediaire, resultat);

        nombreZero++;
    }

    netoyage_vecteur_nombre(resultat, true);
    
    return resultat;
}


/**
 * Vérifie si la mutiplication est nécessaire. Il n'est pas nécessaire de faire le calcul si
 * la multiplication se fait avec 0.
 * 
 * @param {std::vector<int>} nombre1 Le premier vecteur nombre.
 * @param {std::vector<int>} nombre2 Le deuxième vecteur nombre.
 * @return {bool} Retourne "true" si un des deux nombres est 0, sinon "false".
 * @author Ubert Guertin
 * 
 * nombre1 = {2}
 * nombre2 = {0}
 * 
 * = true
 * 
 * nombre1 = {3}
 * nombre2 = {1}
 * 
 * = false
 */
bool verification_multiplication_zero(std::vector<int> nombre1, std::vector<int> nombre2)
{
    // Un nombre multiplié par 0 donne toujours 0 et vice versa.
    bool premierNombreEstZero = (nombre1.size() < 2 && vecteur_a_entier(nombre1) == 0);
    bool deuxiemeNombreEstZero = (nombre2.size() < 2 && vecteur_a_entier(nombre2) == 0);
    return (premierNombreEstZero || deuxiemeNombreEstZero);
}


/**
 * Faire la multiplication manuellement entre 2 chiffres.
 * 
 * @param {int} chiffre1 Le premier chiffre à multiplier.
 * @param {int} chiffre2 Le deuxième chiffre à multiplier.
 * @param {int&} retenue La référence vers la retenue.
 * @param {std::vector<int>&} La référence vers le vecteur entier "résultat".
 * @return {void}
 * @author Ubert Guertin
 * 
 * chiffre1 = 2
 * chiffre2 = 9
 * retenue = 1
 * 
 * calcule = chiffre1 * chiffre2 + retenue
 *         = 2 * 9 + 1
 *         = 19
 *         = 9 + 1r
 */
void multiplication_chiffre(int chiffre1, int chiffre2, int& retenue, std::vector<int>& resultat)
{
    int produit = chiffre1 * chiffre2 + retenue;
    int unite = produit;

    // Vérifie s'il y a une retenue à faire
    if (produit >= BASE)
    {
        unite = produit % BASE;
        retenue = (produit - unite) / BASE;
    }

    else
    {
        retenue = 0;
    }

    resultat.push_back(unite);
}
