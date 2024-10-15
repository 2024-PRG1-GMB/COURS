#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

bool estBissextile(int annee) {
   return (annee % 400 == 0 or (annee % 4 == 0) and (annee % 100 != 0));
}

bool estChaud(int temperature) {
   // est chaud
   return temperature > 30;

   //
   if (temperature > 30)
      return true;
   else
      return false;
}

int nbreJours(int mois, int annee) {
   switch(mois) {
      case 1 : return 31;
      case 2 : return 28 + estBissextile(annee);
      case 3 : return 31;
      case 4 : return 30;
      default : return -1;
   }
}

int main() {

   int mois = 6;
   int nbreJour;

   cout << nbreJours(4) << endl;

   return EXIT_SUCCESS;
}
