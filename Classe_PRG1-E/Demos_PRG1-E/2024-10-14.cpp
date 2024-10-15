#include <iostream>
#include <cstdlib>

using namespace std;


int f(int a, bool reset=false) {
   static int compteur;

   if (reset)
      compteur = 0;

   cout << ++compteur << endl;
   return compteur;
}


string& init(int valeur) {
   string chaine = to_string(valeur);
   return chaine;
}

int main() {

   int& variable = init(12);

   for (int i=0; i<5; ++i)
      f(5);
   cout << "compteur : " << f(5) << endl;

   for (int i=0; i<5; ++i)
      f(5, true);
   cout << "compteur : " << f(5) << endl;

   return EXIT_SUCCESS;
}
