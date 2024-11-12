#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <iomanip>
#include <numeric>

using namespace std;

struct Date {
   int jour;
   int mois;
   int annee;

   bool f() { cout << "ici"; return true; };
};

const vector<string> JOUR = {"LUNDI"s, "MARDI"s, "MERCREDI"s, "JEUDI"s, "VENDREDI"s, "SAMEDI"s, "DIMANCHE"s};
enum class Jour {LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE};

int main() {

   float reel = 123456789;

   float reel = 123456789; // 1.234567  89  e8

   cout << setprecision(10);
   cout << 123456789 << endl << reel << endl;

   cout << numeric_limits<float>::max() << endl;

   cout << int(Jour::LUNDI) << endl;
   cout << JOUR[size_t(Jour::LUNDI)] << endl;

   Date date = {31, 10, 2024};

   enum Saison {PRINTEMPS=1, ETE, AUTOMNE=1, HIVER};
   Saison s1 = Saison(12);
   cout << PRINTEMPS << " " << ETE << " " << AUTOMNE << " " << HIVER << endl;
   cout << s1 << endl;

   return EXIT_SUCCESS;
}


