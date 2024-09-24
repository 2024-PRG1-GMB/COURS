#include <iostream>
#include <cstdlib>
#include <array>
#include <compare>

using namespace std;

int main() {

   // chaine de caractères et strings
   char a = 'a' + 2; // 97 + 2 => 'c'
   //      'a'          'c'          97 + 2
   cout << 'a' << " " << a << " " << 'a' + 2 << endl;

   char car = 'a';
   cout << ++car << " " << car++ << endl;

   cout << (void*)"une chaine"      << endl;
   cout << (void*)&"une chaine"[0]  << endl;
   cout << (void*)("une chaine" + 2)<< endl;
   cout << "une chaine" + 2         << endl;

   const char* ptrChaine = "toto";
   char[10] tabChaine = "toto";
   ptrChaine[2] = 'A';

   "bonjour";
   cout << &"bonjour"[6] - "bonjour" << endl;
   cout << "chaine1" - "chaine1" << endl;

   string str1 = "toto"s;

   cout << str1[1] << str1.at(2) << endl;    // lecture
   str1[0] = 'T';                            // en écriture
   str1.at(1) = 'A';
   cout << str1 << endl;

   cout << "avant" << endl;
   str1[10] = 'T';            // pas d'exception
   cout << "pendant" << endl;
// str1.at(10) = 'A';         // out_of_range
   cout << "apres" << endl;

   // spaceship
   {
      int a = 12;
      int b = 21;

      auto result = a <=> b;

      if (result < 0)
         cout << "a is less than b" << endl;
      else if (result == 0)
         cout << "a is equal than b" << endl;
      else
         cout << "a is greater than b" << endl;
   }

   // pointeur
   cout << endl;

   int  entier   = 12;
   int* pointeur = &entier;

   cout << "contenu de entier   : " <<  entier     << endl;
   cout << "adresse de entier   : " << &entier     << endl;

   cout << "contenu de pointeur : " <<  pointeur   << endl;
   cout << "adresse de pointeur : " << &pointeur   << endl;
   cout << "valeur referencee   : " << *pointeur   << endl;


   return EXIT_SUCCESS;
}