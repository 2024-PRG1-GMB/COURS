#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <iomanip>
#include <numeric>

using namespace std;


int main() {

   char tabCar[10] = "coucou";
   tabCar[6] = 'U';
//   char* chaine = "coucou";
//   chaine[2] = 'U';

   cout << (const void*)"coucou" << endl;
   cout << (const void*)"coucou" << endl;
   cout << tabCar << endl;
   cout << (const void*)tabCar << endl;

   string s1;
   s1.assign("oui").assign("non");

   string toto = "0123456789";
   cout << toto[14] << endl;
   cout << *(toto.data() + 14) << endl;
//   toto[1] = 'R';


   toto.substr(3, 4).assign("oui");
   cout << toto << endl;
   return EXIT_SUCCESS;
}


