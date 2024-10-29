#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

   double d = 4.35 * 100;
   double e = 435;
   cout << fixed << setprecision(20);
   cout <<        d  << endl;
   cout <<  round(d) << endl;
   cout <<        e  << endl;
   cout <<  round(e) << endl;
   return EXIT_SUCCESS;
}


