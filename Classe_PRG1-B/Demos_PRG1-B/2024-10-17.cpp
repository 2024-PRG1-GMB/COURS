#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

int main() {

   int valeur;
   do {
      cout << "Entrez un entier > 0 : ";
      cin >> valeur;
   } while (valeur <= 0);
   cout << "Valeur = " << valeur << endl;


//   unsigned int i = -20;
//   cout << i << endl;

//     int valeur = 200;
//   cout << "valeur : " << valeur << endl;
//   cin  >> valeur;
//   cin.clear();
//   cin.ignore(numeric_limits<streamsize>::max(), '\n');
//   cout << "valeur : " << valeur << endl;
//
//   cout << "presser ENTER pour quitter";
//   cin.ignore(numeric_limits<streamsize>::max(), '\n');
//   cout << "fini ...";
//
//   return EXIT_SUCCESS;
//
//   do {
//      cout << "valeur [10-20] : ";
//      erreur = (cin  >> valeur);
//      erreur = cin.fail();
//      cin.clear();
//      cin.ignore(numeric_limits<streamsize>::max(), '\n');
//   } while (erreur or valeur < 10 or valeur > 20);
//
//   cout << "valeur : " << valeur << endl;
//
//   // vider le flux
//   while (cin.get() != '\n');

   return EXIT_SUCCESS;
}
