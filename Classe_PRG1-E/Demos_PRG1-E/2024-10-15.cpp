#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

   string prenom;
   cout << "votre prenom : ";
   cin  >> prenom;
   cout << prenom;

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


