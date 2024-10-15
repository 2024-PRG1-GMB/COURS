#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int MIN = 0;
const int MAX = 0;

int global;

void f(bool reset = false) {

   static int compteur;

   if (reset)
      compteur=0;

   compteur++;
   cout << "appel #" << compteur << endl;
}

int& creer_int(int valeur) {
   static int retour = valeur;
   return retour;
}

int fonction(int param) {
   cout << param++;
   return param;
}

int main() {

   int local = creer_int(12);

   for (int i=0; i<10; ++i)
      f();

      f(true);

      return EXIT_SUCCESS;
}
