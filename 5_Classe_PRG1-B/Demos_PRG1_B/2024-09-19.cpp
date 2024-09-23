#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
   cout << "il fait beau dans ma maison" << endl;

   string msg = "coucou";
   cout << msg << endl;

//   cout << msg.at(0) << msg.at(1) << msg.at(12) << endl;
   // exception out_of_range à cause du msg.at(12)

   const long int valeur = 1 + 3;
   cout << "valeur  : " <<  valeur        << endl;
   cout << "adresse : " << &valeur        << endl;
   cout << "Bytes   : " << sizeof(valeur) << endl;

   char car = 'a';
   cout << car << (char)97 << endl;
   cout << (const void*)"abcd" << endl;
   cout << (const void*)"abcd";

   string chaine;
   cout << endl;

   bool maBoule = 'a';
   cout << boolalpha << maBoule << endl;

   cout << sizeof(bool)*8 << endl;

   return EXIT_SUCCESS;
}

