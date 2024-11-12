#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

   int i = 1;

   switch(i) {
      case 0 : cout << 0;
      case 1 : cout << 1;
      default : cout << "autre";
      case 2 : cout << 2; break;
      case 3 : cout << 3;
   }

   return EXIT_SUCCESS;
}


