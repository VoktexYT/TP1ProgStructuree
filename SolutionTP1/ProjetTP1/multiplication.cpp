/*

Ce programme fait la multiplication entre 2 vecteurs de nombres

*/

// Inclusion des libraries
#include <iostream>
#include <vector>

#include "addition.h"
#include "constantes.h"
#include "netoyage.h"
#include "multiplication.h"
#include "UtilitairesVecteur.h"


// Appelle de fonctions
void multiplication_chiffre(int chiffreNombre1, int chiffreNombre2, int& retenue, std::vector<int>& intermediaire);
bool verification_multiplication_zero(std::vector<int> nombre1, std::vector<int> nombre2);


/**
 * Fait la multiplication manuellement entre 2 vecteurs de nombres.
 * 
 * @param {std::vector<int>} nombre1 Le premier vecteur représente le premier nombre.
 * @param {std::vector<int>} nombre2 Le deuxième vecteur représente le deuxième nombre.
 * @return {std::vector<int>} Retourne le produit de la multiplication.
 * @author Ubert Guertin
 * 
 * nombre1 = {2, 5, 4}
 * nombre2 = {3, 0, 1}
 * 
 * calcule = nombre1 * nombre2
 *         = {7, 6, 4, 5, 4}
 */
std::vector<int> multiplication(std::vector<int> nombre1, std::vector<int> nombre2)
{
    if (verification_multiplication_zero(nombre1, nombre2))
    {
        return VECTEUR_ZERO;
    }

    // Commencer par les unites
    inverser(nombre1);
    inverser(nombre2);

    int nombreZero = 0;
    int retenue = 0;
    std::vector<int> resultat;

    for (int indexNombre2=0; indexNombre2<nombre2.size(); indexNombre2++)
    {
        int chiffreNombre2 = nombre2.at(indexNombre2);

        // Remplir le vecteur de zero (1 zero = dizaine, 2 zero = centaine, etc..)
        std::vector<int> intermediaire(nombreZero, 0);

        for (int indexNombre1=0; indexNombre1<nombre1.size(); indexNombre1++)
        {
            int chiffreNombre1 = nombre1.at(indexNombre1);

            multiplication_chiffre(chiffreNombre1, chiffreNombre2, retenue, intermediaire);
        }

        // Ajouter la retenue à la fin de la multiplication intermediaire
        if (retenue > 0)
        {
            intermediaire.push_back(retenue);
            retenue = 0;
        }

        inverser(intermediaire);
        egaliser_taille_vecteur(intermediaire, resultat);

        resultat = addition(intermediaire, resultat);

        nombreZero++;
    }

    netoyage_vecteur_nombre(resultat, true);
    
    return resultat;
}


/**
 * Vérifie si la mutiplication est nécessaire. Il n'ai pas nécessaire de faire le calcul si
 * la multiplication se faire par 0
 * 
 * @param {std::vector<int>} nombre1 Le premier vecteur nombre.
 * @param {std::vector<int>} nombre2 Le deuxième vecteur nombre.
 * @return {bool} Retourne true si un des deux nombres est zéro, sinon false.
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
    // Un nombre multiplié par 0 donne toujours 0.
    // 0 multiplié par un nombre donne toujours 0.
    bool premierNombreEstZero = (nombre1.size() < 2 && vecteur_a_entier(nombre1) == 0);
    bool deuxiemeNombreEstZero = (nombre2.size() < 2 && vecteur_a_entier(nombre2) == 0);
    return (premierNombreEstZero || deuxiemeNombreEstZero);
}


/**
 * Fait la multiplication manuellement entre 2 chiffres.
 * 
 * @param {int} chiffre1 Le premier chiffre a multiplier.
 * @param {int} chiffre2 Le deuxième chiffre a multiplier.
 * @param {int&} retenue La référence vers la retenue.
 * @param {std::vector<int>&} La référence vers le vecteur résultat.
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
