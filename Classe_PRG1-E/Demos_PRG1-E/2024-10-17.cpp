#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

   {
      unsigned int i = -27;
      cout << i << endl;
      return EXIT_SUCCESS;
   }

   //   {
//      int i=200;
//      cin >> i;
//      cout << "valeur : " << i<< endl;
//      return EXIT_SUCCESS;
//   }

   {
      int valeur = 200;
      do {
         cout << "valeur [10-20] : ";
         cin  >> valeur;
      } while (valeur < 10 or valeur > 20);
      cout << "valeur : " << valeur << endl;
   }


   return EXIT_SUCCESS;
/*
   string prenom;
   cout << "votre prenom : ";
//   cin  >> prenom;
   getline(cin, prenom);
   cout << prenom;
*/
   string s = "a123a.4";
   int i = stoi(s);
   cout << i << endl;

   cout << "des trucs : ";
   char c =cin.get();
   cin.get(c).get(c).get(c);

   return EXIT_SUCCESS;

   int  v1;
   char car;

   cout << "presser ENTER pour continuer";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   cout << "v1 : ";
   cin  >> v1;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   cout << "presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');


   cout << "salut" << endl;
   return EXIT_SUCCESS;



}


