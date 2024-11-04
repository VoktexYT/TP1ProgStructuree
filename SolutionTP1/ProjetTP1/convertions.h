#pragma once


/**
 * Converti un caratère (chiffre) en type entier.
 *
 * @param {char} caractere Un caractère à convertir
 * @return {int} Retourne la convertion de "char" en "int" d'un caractère
 *               ou un code d'erreur si le caractère est invalide.
 * @author Ubert Guertin
 *
 * caractere = '1'
 * = 1
 *
 * caractere = '$'
 * = CODE_ERREUR
 */
int chiffre_caractere_a_entier(char chiffre);