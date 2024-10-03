#include <iostream>
#include <cstdlib>

using namespace std;

/*
double sinus(double x) {
   // bcp de calculs ...
   goto ICI;
   return 0.5;
}
 */
int main() {

//   double y = sinus(30);

   int i=0;
   while (i<10) {
      cout << ++i;
      if (i>4) {
         ++i;
         continue;
      }
   }

   cout << endl;
   for (int i=0; i<20; ++i) {
      if(i%2) continue;
      cout << i << " ";
   }

   for (int i=0; i<20; i+=2) {
      cout << i << " ";
   }

   for (int i=0; i<20; i+=2) {
      cout << i << " ";
   }

   cout << endl;

   for (char car ='a'; car<'d'; ++car) {
      bool sortir = false;
      for (int ligne =0; ligne<7; ++ligne) {
         cout << car << ligne << " ";
         if (ligne == 4) {
            sortir = true;
            break;
         }
      }
      cout << endl;
      if (sortir)
         break;
   }


   // avec goto
   for (char car ='a'; car<'d'; ++car) {
      for (int ligne =0; ligne<7; ++ligne) {
         cout << car << ligne << " ";
         if (ligne == 4) {
            goto DEHORS;
         }
      }
      cout << endl;
   }

   DEHORS:

   return EXIT_SUCCESS;
}