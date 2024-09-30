#include <iostream>
#include <cstdlib>
#include <compare>

using namespace std;

bool fonction() {
   cout << "coucou" << endl;
   return true;
}

int main() {

   string chaine1 = "maison";
   string chaine2 = "mais";

   cout << (int)'Z' << " " << (int)'a' << endl;

   cout << (chaine1 < chaine2) << endl;

   int a = 12;
   int b = 21;

   auto result = a <=> b;

   if (result < 0)
      cout << "a is less than b" << endl;
   else if (result == 0)
      cout << "a is equal than b" << endl;
   else
      cout << "a is greater than b" << endl;


   2==1 and fonction();


   cout <<      'A' << " - " <<      'a' << endl;
   cout << (int)'A' << " - " << (int)'a' << endl;

   cout << (int)char('A' + 200) << endl;

   cout << ("toto" < "maison") << endl;
   cout << "message" + 2 << endl;


   cout << "chaine" << endl;
   cout << (void*)"chaine"     << endl;
   cout << (void*)("chaine"+0) << endl;
   cout << (void*)("chaine"+1) << endl;

   string chaine = "chaine";
   cout << chaine << endl;
   cout << (void*)&chaine        << endl;
   cout << (void*)(chaine.at(0)) << endl;
   cout << (void*)(chaine.at(1)) << endl;

   cout << (chaine1 + chaine2) << endl;
//   cout << ("salut" + "bonjour") << endl;


   cout << "|" << chaine << "|" << endl;
   cout << chaine.at(2) << endl; // en lecture
   cout << chaine[2]    << endl;

   chaine.at(2) = 'A'; // en ecriture
   chaine[2]    = 'A';
   cout << "|" << chaine << "|" << endl;

   return EXIT_SUCCESS;
}