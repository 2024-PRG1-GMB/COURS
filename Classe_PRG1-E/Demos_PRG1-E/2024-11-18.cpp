#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <span>
#include <string>


using namespace std;

void afficher(const int* tab, size_t taille) {
   cout << "fonction afficher tableau C" << endl;
   for (size_t i=0; i<taille; ++i) {
      cout << &tab[i] << " " << tab[i] << endl;
   }
   cout << "dans la fonction" << endl;
   cout << "taille de tab : " << sizeof(tab) << endl;
}

void afficher(span<const int> sp) {
   cout << "fonction span<int>" << endl;
   for (size_t i=0; i<sp.size(); ++i) {
      cout << &sp[i] << " " << sp[i] << endl;
   }
   cout << "dans la fonction" << endl;
   cout << "taille de tab : " << sizeof(sp) << endl;
}
int main() {

   int tab[10] = {1, 2, 3, 4, 5, 6};

   cout << "tab" << " " << tab << endl;
   for (size_t i=0; i<10; ++i) {
      cout << &tab[i] << " " << tab[i] << endl;
   }
   cout << endl;

   afficher(tab, 2);
   afficher(span(tab, 100));

   cout << "taille de tab : " << sizeof(tab) << endl;

   string chaine = "bonjour";
   for (char& ref_c : chaine) {
      ref_c = toupper(ref_c);
      cout << ref_c << ", ";
   }
   cout << chaine << endl;

   // matrice
   using Ligne = vector<char>;
//   Ligne ligne = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

   using Matrice = array<Ligne, 2>;
   Matrice jeu = {
         {{'a', 'b', 'c'}, {'a', 'b', 'c'}}
   };

   vector<vector<int>> test = {
         {1, 2, 3},
         {1},
         {1, 4, 5, 6, 7}
   };

   for (size_t ligne=0; ligne<test.size(); ++ligne) {
//      for (size_t colonne=0; colonne<test.at(ligne).size(); ++colonne) {
//         cout << test.at(ligne).at(colonne) << " ";
//      }
      afficher(span(test.at(ligne)));
      cout << endl;
   }

   for (vector<int>& ligne : test) {
      for (int i : ligne)
         cout << i << " ";
      cout << endl;
   }

   return EXIT_SUCCESS;
}


