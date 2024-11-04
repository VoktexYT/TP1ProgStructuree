#pragma once


/**
 * Converti un carat�re (chiffre) en type entier.
 *
 * @param {char} caractere Un caract�re � convertir
 * @return {int} Retourne la convertion de "char" en "int" d'un caract�re
 *               ou un code d'erreur si le caract�re est invalide.
 * @author Ubert Guertin
 *
 * caractere = '1'
 * = 1
 *
 * caractere = '$'
 * = CODE_ERREUR
 */
int chiffre_caractere_a_entier(char chiffre);