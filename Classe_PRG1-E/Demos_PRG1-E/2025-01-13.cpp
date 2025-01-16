#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

//------------------------------------------------------------
int main() {

   try {
      int i = 12;
      throw i;
   }
   catch (float i) {
      cout << i << endl;
   }
   catch (int i) {
      cout << i << endl;
   }

   //            0123456789012
   string str = "Hello, World!";
   cout << "str[15]"    << str[15]      << endl;
   cout << "str.at(15)" << str.at(15) << endl;
   return EXIT_SUCCESS;
}