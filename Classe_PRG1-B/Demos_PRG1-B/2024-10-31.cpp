#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

enum class Jour {LUNDI=1, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE};

string nomJour(Jour jour) {

   static  const vector<string> JOUR = {"LUNDI"s, "MARDI"s, "MERCREDI"s, "JEUDI"s, "VENDREDI"s, "SAMEDI"s, "DIMANCHE"s};
   return JOUR[size_t(jour)];

   switch (jour) {
      case Jour::LUNDI    : return "LUNDI";
      case Jour::MARDI    : return "MARDI";
      case Jour::MERCREDI : return "MERCREDI";
      case Jour::JEUDI    : return "JEUDI";
      case Jour::VENDREDI : return "VENDREEI";
      case Jour::SAMEDI   : return "SAMEDI";
      case Jour::DIMANCHE : return "DIMANCHE";
   }
}


int main() {

   float reel = 123456789;

   int entier = 1e300;

   setprecision(20);
   cout << fixed;

   cout << 123456789 << endl;
   cout << reel      << endl;
   cout << entier    << endl;

   cout << int(Jour::LUNDI) << endl;

   return EXIT_SUCCESS;
}
