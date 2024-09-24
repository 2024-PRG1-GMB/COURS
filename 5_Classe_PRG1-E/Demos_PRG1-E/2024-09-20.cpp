#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main() {

   // déaclarer
   // operateur = d'initialisation
   int valeur = 12'000'000'000'000;

   cout << "valeur : " << valeur             << endl;
   cout << "taille : " << sizeof(valeur)*8   << endl;

   cout << "float  : " << sizeof(float)*8    << endl;
   cout << "double : " << sizeof(double)*8   << endl;

   // operateur = d'affectation
   valeur = 15;

   char a = 'a'; // probablement 97 ;)
   cout << (int)a << (char)97 << endl;

   cout << (2 + 2) << (2.1 + 2.1) << endl << (double(2) + int(2.1)) << endl;

   char car = 'a';
   cout << car << endl;

   string chaine = "jkdbfgklsjdbfgkjdsfbn";
   cout << chaine.size() << chaine.length() << sizeof(chaine) << endl;
  cout << "|" << chaine << "|" << endl;

   chaine = "ljdfbgkjdnnglkdjngédlfkgnàd";
   cout << sizeof(int*) << endl;

   bool maBoule = 1./3 - 0.33333;
   cout << boolalpha << maBoule << endl;
   cout << 1./3 - 0.33333 << endl;

   cout << sizeof(bool) << endl;

   cout << setprecision(20) << 1.0  / 0.3  << endl;
   cout << setprecision(20) << 1.0f / 0.3f << endl;

   cout << (const void*)"bonjour" << endl;
   cout << (const void*)("bonjour"+1) << endl;
   cout << "bonjour"+10000000 << endl;
   cout << "bonjour"-1 << endl;

   return EXIT_SUCCESS;
}
