#include <iostream>
#include <cstdlib>
#include <array>
#include <iomanip>

using namespace std;

int fonction() {
   cout << "dans ma fonction .." << endl;
   return 23;
}

int main() {

   /*
   cout << "avant .." << endl;

   int i=1;
   i = i + 1;
   23;
   i;

   cout << "après .." << endl;

   fonction();

   cout << setprecision(20) << 10.0 / 3.0 << endl;

*/
   int a = 5;
   //      (5=>)6   (6=>)7
   cout << ++a << ++a << endl;
   //      7(=>8)   8(=>9)
   cout << a++ << a++ << endl;

   //9=>10
   ++a; // ou a++;

   a = 5;
   cout << (a = a++ + 2) << endl;

   const int b = 3;
   cout << -b << "  " << +b << endl;

   cout << boolalpha << (10.0 / 3.0 == 3.3333333) << endl;

   //Afficher un message de bienvenue
   cout << ...

   // Saisir le terme de Wallis
   cin <<


   3.	Vérifier si le terme saisi est correct
4.	Si correcte
1.	Calculer l'approximation de Wallis
2.	Afficher le résultat
5.	Sinon (terme incorrect)
1.	afficher un message d'erreur
6.	afficher un message de fin de programme

   return EXIT_SUCCESS;
}