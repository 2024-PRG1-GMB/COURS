#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

using namespace std;

void f1 (int* t, size_t taille) {
   cout << "dans la fonction" << endl;
   cout << "taille : " << sizeof(t) << endl;
}

//int& f2() {
//   int valeur = 2;
//   return valeur;
//}

int main() {

//   int t[5] = {0, 1, 2, 3, 4};
//   for (size_t i=0; i<5; ++i)
//      cout << t[i] << " " << &t[i] << endl;
//   cout << t << " " << &t << " " << &t[0] << endl;
//
//   cout << "taille : " << sizeof(t) << endl;
//   f1(t, 5);
//
//   cout << endl;
//
//   array<int, 5> a  {0, 1, 2, 3, 4};;
//   for (size_t i=0; i<5; ++i)
//      cout << a[i] << " " << &a[i] << endl;
//   cout << " " << &a << " " << &a[0] << endl;
//
//   size_t taille;
//   cin >> taille;
//
//   int tab1[taille];
////   array<int, taille> a1;

//   tab1 = t;
//   a1 = a;

   string chaine = "bonjour";
   for (char& c : chaine) {
      c = toupper(c);
   }

   // ligne
   using Ligne = string;

   // collection de lignes
   using Page = vector<Ligne>;
   Page lignes(80);

   // livre
   using Livre = vector<Page>;

   Livre livre;

   for (const Page& p : livre)
      afficher(p);

   cout << chaine << endl;
   return EXIT_SUCCESS;
}
