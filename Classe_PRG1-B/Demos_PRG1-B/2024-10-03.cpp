#include <iostream>
#include <cstdlib>
#include <compare>

using namespace std;

int main() {

   for (int jour = 1; jour<=7; ++jour) {
      switch (jour) {
         case 1 : cout << "lundi"    << endl; break;
         case 2 : cout << "mardi"    << endl; break;
         case 3 : cout << "mercredi" << endl; break;
         default : cout << "default" << endl;
      }
      cout << endl;
      ++jour;
   }

   cout << endl;

   for (char c='a'; c<'d'; ++c) {
      bool sortir = false;
      for (int i = 0; i < 9; ++i) {
         cout << c << i << " ";
         if (i == 5) {
            sortir = true;
            break;
         }
      }
      cout << endl;
      if (sortir)
         break;
   }

   for (char c='a'; c<'d'; ++c) {
      for (int i = 0; i < 9; ++i) {
         cout << c << i << " ";
         if (i == 5) {
            goto DEHORS;
         }
      }
      cout << endl;
   }

   DEHORS:

   return EXIT_SUCCESS;
}