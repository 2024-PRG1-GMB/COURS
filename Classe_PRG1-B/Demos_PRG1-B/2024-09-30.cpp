#include <iostream>
#include <cstdlib>
#include <compare>

using namespace std;


int main() {

   /*
   int x;
   cout << "saissie de x : ";
   cin >> x;
   cout << "x : " << x << endl;

   cout << "avant" << endl;
   cout << "saissie de x : ";
   cin >> x;
   cout << "x : " << x << endl;

   cout << "apres" << endl;
*/

   int a = 2, b = 1, c = 4;

   if(a == 1)
      cout << "ici" << endl;
   else if (int c=3; b == 2)
      cout << "ici" << endl;
   else
      cout << "ici" << endl;

   if (a < b)
      if (a < c)
         cout << "oui";

   if (a < b and a < c)
         cout << "oui";

   // ternaire : question ? vrai : faux
   // min (a, b, c);
   int min_ab  = a < b ? a : b;
   int min_abc = a < b ? a < c ? a : c : b < c ? b : c;

   // switch
   // convertir un chiffre Hex => Decimal
   char car = '1';
   int valeur;
   if (car >= '0' and car <= '9')
      valeur = car - '0';

   if (double pi = 3.13; pi > 3.0 )
      cout << "ben oui";

   // switch (expression)
   car = 'b';
   switch(car) {
      case 'a' : valeur = 10; cout << valeur << endl; break;
      case 'b' : valeur = 11; cout << valeur << endl; break;
      case 'c' : valeur = 12; cout << valeur << endl; break;
      case 'd' : valeur = 13; cout << valeur << endl; break;
      case 'e' : valeur = 14; cout << valeur << endl; break;
      case 'f' : valeur = 15; cout << valeur << endl; break;
   }

   // lundi = 1, .. dimanche = 7
   int jour = 2;
   int cas = 2;
   switch (jour) {
      case 1 ... 4 :
      case 5 : cout << "jour de semaine"; break;
      case 6 :
      case 7 : cout << "week-end";  break;
      default : cout << "connais pas .." << endl;
   }

   return EXIT_SUCCESS;
}