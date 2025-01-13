#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
int f(int v) {
   cout << "f(" << v << ")" << endl;
   if( v == 0)
      throw 1;
   if( v < 0)
      throw "pas content";
   return v;
}
//------------------------------------------------------------
int main() {

   try {
      cout << "avant" << endl;
      f(-2);
      cout << "apres" << endl;
   }
//   cout << "au milieu" << endl;
   catch (int i) {
      cout << "== 0" << endl;
   }
   catch (const char* e) {
      cout << "< 0" << endl;
   }

   f(3);
   f(-2);
   vector v {1, 2, 3};
   cout << v.at(5);


   return EXIT_SUCCESS;
}