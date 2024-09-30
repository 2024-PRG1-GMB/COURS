#include <iostream>
#include <cstdlib>
#include <compare>

using namespace std;


int main() {

   /*
   int x;
   cout << "saissie de x : ";
   cin >> x;
   cout << "x : " << x << endl;

   cout << "avant" << endl;
   cout << "saissie de x : ";
   cin >> x;
   cout << "x : " << x << endl;

   cout << "apres" << endl;
*/

   int a = 2, b = 1, c = 4;

   if(a == 1)
      cout << "ici" << endl;
   else if (int c=3; b == 2)
      cout << "ici" << endl;
   else
      cout << "ici" << endl;

   if (a < b)
      if (a < c)
         cout << "oui";

   if (a < b and a < c)
         cout << "oui";

   // ternaire : question ? vrai : faux
   // min (a, b, c);
   int min_ab  = a < b ? a : b;
   int min_abc = a < b ? a < c ? a : c : b < c ? b : c;




   return EXIT_SUCCESS;
}