#include <iostream>
#include <cstdlib>
#include <compare>

using namespace std;

// fonction plus 1 par adresse
void plus1(int* adresse) {
   cout << "contenu de adresse  = " <<  adresse << endl;
   cout << "adresse de adresse  = " << &adresse << endl;
   cout << "valeur *adresse     = " << *adresse << endl;
   *adresse = *adresse + 1;
}

// fonction plus 1 par référence
void plus1(int& ref) {
   cout << "contenu de ref      = " <<  ref << endl;
   cout << "adresse de ref      = " << &ref << endl;
   ref = ref + 1;
}

int main() {

   // pointeurs
   int variable = 1;

   cout << "contenu de variable = " <<  variable << endl;
   cout << "adresse de variable = " << &variable << endl;

   plus1(&variable);

   cout << "contenu de variable = " <<  variable << endl;
   cout << "adresse de variable = " << &variable << endl;
   double reel = 3.14;
   cout << "Byte double " << sizeof(double) << endl;
   cout << "Byte int    " << sizeof(int) << endl;
   int* ptrMoche = (int*)&reel;
   cout << *ptrMoche << endl;

   // références
   int& ref = variable;
   cout << "contenu de variable = " <<  variable << endl;
   cout << "adresse de variable = " << &variable << endl;
   cout << "contenu de ref      = " <<  ref      << endl;
   cout << "adresse de ref      = " << &ref      << endl;

   plus1(variable);
   return EXIT_SUCCESS;
}