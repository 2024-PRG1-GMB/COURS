#include <iostream>
#include <cstdlib>
#include <array>
#include <compare>

using namespace std;

int main() {

   int a = 2;
   if (a >= 3) {
      cout << "oui";
      cout << "c'est bien";
   } else
      cout << "dommage";
   cout << endl;
/*
   cout << "saisie de a : ";
   cin >> a;
   cout << "a : " << a << endl;

   cout << "avant" << endl;

   cout << "saisie de a : ";
   cin >> a;
   cout << "a : " << a << endl;

   cout << "apres" << endl;
*/

   int i = 12;
   if (int i=10; i < 100) {
      i *= 2;
      cout << i << endl;
   }

   {
      int i=10;
      if (i < 100) {
         i *= 2;
         cout << i << endl;
      }
   }

   cout << i << endl;

   if (a % 2 == 0)
      cout << "pair";
   else
      cout << "impair";

   {
      int i=2, j=3, k=1;
      // min (i, j)
      cout << (i < j ? i : j) << endl;


      // min (i, j, k)
      cout << (i < j ? (i < k ? i : k) : (j < k ? j : k) ) << endl;
      cout << (i < j ? i < k ? i : k : j < k ? j : k ) << endl;

      cout << "chaine" << "string"s << endl;

      cout << "maison" << (i>1 ? "s"s : ""s);
      cout << ("maison"s + (i>1 ? "s" : ""));
      cout << endl;
   }

   {
      // convertir valeur hexa en décimal
      char car = 'u';
      if (car >= '0' and car <= '9')
         cout << car - '0' << endl;

      switch (car) {
         case 'a' : cout << 10 << endl; break;
         case 'c' : cout << 12 << endl; break;
         case 'd' : cout << 13 << endl; break;
         case 'e' : cout << 14 << endl; break;
         case 'f' : cout << 15 << endl; break;
         default : cout << "erreur" << endl;
      }

      // lundi = 1, ... dimanche 7
      int jour = 2;
      switch (jour) {
         case 1 :
         case 2 :
         case 3 :
         case 4 :
         case 5 : cout << "semaine" << endl; break;
         case 6 :
         case 7 : cout << "week-end" << endl; break;
      }
   }

   return EXIT_SUCCESS;
}