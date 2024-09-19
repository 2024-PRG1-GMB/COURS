#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {

   //            0123456789 123456789 123456"
   string msg = "il fait beau dans ma maison";

   cout << msg << endl;
   cout << msg.at(0) << msg.at(1) << endl;

   int valeur = 12;
   // taille mémoire
   // operations possibles
   // codage

    const int ma_constante = 2;

   valeur = 13;
   // ma_constante = 2; // pas possible - constante

   cout << "contenu : " <<  valeur << endl;
   cout << "adresse : " << &valeur << endl;

   {
      // dans un bloc
      int valeur = 15;
   }



   return EXIT_SUCCESS;
}
