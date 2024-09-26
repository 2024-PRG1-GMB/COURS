#include <iostream>
#include <cstdlib>
#include <compare>

using namespace std;

bool fonction() {
   cout << "coucou" << endl;
   return true;
}

int fct(int a) {
   cout << "fct ; " << a << endl;
   return a;
}

int main() {

   int i = 2;
   cout << (i+=3 < 2) << endl;

   int valeur = 1234;
   string chaine1 = "maison";
   string chaine2 = "mais";

   //chaine1 -= "on";
   cout << chaine1 << endl;

   cout << endl;
   // pointeurs
   int  var = 12;
   int* ptr = &var;

   cout << "valeur de var  = " <<  var << endl;
   cout << "adresse de var = " << &var << endl;

   cout << "valeur de ptr  = " <<  ptr << endl;
   cout << "adresse de ptr = " << &ptr << endl;
   cout << "valeur pointee = " << *ptr << endl;

   *ptr = 2;
   cout << "valeur de var  = " <<  var << endl;
   cout << "valeur pointee = " << *ptr << endl;


   const int cste     = 15;
   int       variable = 12;

   int* ptr_sur_var         = &variable;      // ptr sur la variable => droit RW
// int* ptr_sur_var         = &cste;          // ptr sur la variable => droit RW
   const int* ptr_sur_cste1 = &variable;      // ptr sur la variable => droit R
   const int* ptr_sur_cste2 = &cste;          // ptr sur la variable => droit R
   const int* ptr_sur_cste3 = &cste;          // ptr sur la variable => droit R
              ptr_sur_cste3 = &variable;

   return EXIT_SUCCESS;
}