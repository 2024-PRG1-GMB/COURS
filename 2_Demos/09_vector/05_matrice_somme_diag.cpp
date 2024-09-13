//---------------------------------------------------------
// Demo           : 05_matrice_somme_diag
// Fichier        : 05_matrice_somme_diag.cpp
// Auteur(s)      : (C) BREGUET Guy-Michel
// Date           : 02 - 2022-12-19
// But            : déterminer la somme des éléments diagonaux d'une matrice
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

//---------------------------------------------------------
// types de données
using Data    = int;
using Vecteur = vector<Data>;
using Matrice = vector<Vecteur>;

//---------------------------------------------------------
// fonctions auxiliaires
ostream& operator<<(ostream& os, const Vecteur& v);
ostream& operator<<(ostream& os, const Matrice& m);

//---------------------------------------------------------
bool estCarree(const Matrice& m);
bool sommesElementsDiagonaux(const Matrice& matrice,
                                   int&     sommeGD,  // diag \ gauche-droite
                                   int&     sommeDG); // diag / droite-gauche
void test(const Matrice& m);  // fonction de test

//---------------------------------------------------------
int main() {

   Matrice m1;
   Matrice m2 = {{1, 2, 3},
                 {4, 5, 6},
                 {7, 8, 9}};
   Matrice m3 = {{1, 2, 3},
                 {4, 5},
                 {7, 8, 9}};
   Matrice m4 = {{1, 2, 3},
                 {4, 5, 6}};

   test(m1);
   test(m2);
   test(m3);
   test(m4);

   return EXIT_SUCCESS;
}

//---------------------------------------------------------
bool estCarree(const Matrice& m) {
   if (m.empty())
      return true;
   for (Matrice::size_type i=0; i<m.size(); ++i) {
      if (m[i].size() != m.size())
         return false;
   }
   return true;
}

//---------------------------------------------------------
bool sommesElementsDiagonaux(const Matrice& matrice,
                                   int&     sommeGD,
                                   int&     sommeDG) {

   if (!estCarree(matrice))
      return false;

   const Matrice::size_type TAILLE = matrice.size();
   sommeGD = sommeDG = 0;
   for (size_t i = 0; i < TAILLE; ++i) {
      sommeGD += matrice[i][i];
      sommeDG += matrice[i][TAILLE - i - 1];
   }

   return true;
}

//---------------------------------------------------------
void test(const Matrice& m) {
   int sommeDG = 0,
       sommeGD = 0;
   cout << m << endl;
   const bool carree = sommesElementsDiagonaux(m, sommeDG, sommeGD);
   if (carree) {
      cout << "somme DG : " << sommeDG << endl;
      cout << "somme GD : " << sommeGD << endl;
   }
   else
      cout << "/!\\ la matrie n'est pas carrée" << endl;
   cout << endl;
}

//---------------------------------------------------------
ostream& operator<<(ostream& os, const Vecteur& v) {
   os << "[";
   for (Matrice::size_type i=0; i<v.size(); ++i) {
      if (i)
         os << ", ";
      os << v[i];
   }

   os << "]";
   return os;
}

//---------------------------------------------------------
ostream& operator<<(ostream& os, const Matrice& m) {
   if (m.empty())
      os << "[]";
   for (Matrice::size_type i=0; i<m.size(); ++i) {
      os << m[i] << endl;
   }
   return os;
}

//      []
//      somme DG : 0
//      somme GD : 0
//
//      [1, 2, 3]
//      [4, 5, 6]
//      [7, 8, 9]
//
//      somme DG : 15
//      somme GD : 15
//
//      [1, 2, 3]
//      [4, 5]
//      [7, 8, 9]
//
//      /!\ la matrie n'est pas carrée
//
//      [1, 2, 3]
//      [4, 5, 6]
//
//      /!\ la matrie n'est pas carrée
//
//      Program ended with exit code: 0
