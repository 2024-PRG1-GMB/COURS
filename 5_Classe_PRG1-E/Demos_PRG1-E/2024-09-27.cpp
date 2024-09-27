#include <iostream>
#include <cstdlib>
#include <array>
#include <compare>

using namespace std;

void plus1(int* ptr) {
   *ptr = *ptr + 1;
   cout << "ptr     : " <<  ptr << endl;
   cout << "&ptr    : " << &ptr << endl;
   cout << "&*ptr   : " << *ptr << endl;
}

void plus1(int& ref) {
   ref = ref + 1;
   cout << "ref     : " <<  ref << endl;
   cout << "&ref    : " << &ref << endl;
}

int main() {

   int valeur = 5;

   cout << "valeur  : " <<  valeur << endl;
   cout << "adresse : " << &valeur << endl;

   plus1(&valeur);
   plus1(valeur); // afficher ...

   cout << "valeur  : " <<  valeur << endl;
   cout << "adresse : " << &valeur << endl;

   // comment changer une constante
   const int CSTE = 12;
   int* ptr = (int*)&CSTE;

   cout << "CSTE  : " <<  CSTE << endl;
   cout << "*ptr  : " << *ptr << endl;
   *ptr = 15;
   cout << "CSTE  : " <<  CSTE << endl;
   cout << "*ptr  : " << *ptr << endl;
   const int& ref_CONST = CSTE;
   const int& ref_VAL   = valeur;


   return EXIT_SUCCESS;
}