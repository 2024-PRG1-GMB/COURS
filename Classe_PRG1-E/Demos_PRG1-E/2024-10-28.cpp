#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

   int valeur = 0xFFF; // 3*16^1 + 2*16^0
   cout << hex  << showbase << showpos << valeur << endl;
   cout << dec  << showbase << showpos << valeur << endl;


   return EXIT_SUCCESS;
}


