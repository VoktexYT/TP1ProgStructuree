#pragma once
// Biblioth�que fournissant des fonctions utilitaires pour l'utilisation de vecteurs d'entiers

#include <vector>


// Inverse l'ordre des valeurs dans le vecteur d'entiers donn�.
// Par exemple, si le vecteur contient { 1, 2, 3 } lors de l'appel,
// il contiendra { 3, 2, 1 } apr�s l'ex�cution de la fonction
void inverser(std::vector<int>& nombre);


// Enl�ve les z�ros inutiles au d�but d'un nombre repr�sent� sous la forme d'un vecteur invers�
// Par exemple, le vecteur invers� repr�sentant le nombre 123 est { 3, 2, 1 }
// Si des z�ros inutiles sont pr�sents dans le nombre (00123), le vecteur contient { 3, 2, 1, 0, 0 }
// Dans ce cas, nombre { 3, 2, 1 } apr�s l'ex�cution de la fonction
void rogner_zeros_inutiles(std::vector<int>& nombre);


void afficher_vecteur_int(std::vector<int> vec);

void afficher_entier_vecteur(std::vector<int> vec);

int vecteur_a_entier(std::vector<int> vec);

void reajuster_taille_vecteur(std::vector<int>& n1, std::vector<int>& n2);
