#include <iostream>
#include <cstdlib>
#include <compare>

using namespace std;


int main() {

   for (int i=0; i<10; ++i) {
      cout << i << endl;
   }

   for (int i=0; i<10; i++) {
      cout << i << endl;
   }

   int a = 12;
   while (a > 0) {
      cout << a--;
      cout << endl;
   }

   a = 10;
   do {
      cout << a--;
      cout << endl;
   } while (a > 0);

   a = 2;
   int b = 3;
   if (a == 2, b < 10)
      cout << "oui" << endl;

   if (a == 2 and b < 10)
      cout << "oui" << endl;

   if (a == 2 or b < 10)
      cout << "oui" << endl;

   int c, d;
   c = 4, 5;         // c <= 4, 5 à la trappe
   d = (4, 5);       // 4 à la trappe, d <= 5

   return EXIT_SUCCESS;
}