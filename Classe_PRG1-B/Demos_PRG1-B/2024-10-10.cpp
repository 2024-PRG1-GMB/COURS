#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int facto(int n) {
   if(n<=1)
      return 1;
   return n * facto(n-1);
}

int addition_de(int entier, double reel, bool positif = true);

int main() {

//   cout << fatto(5) << endl;
//   cout << facto(2398273409875) << endl;

   cout << addition_de(2, 2.3, false)  << endl;
   cout << addition_de(2, 2.3, true)   << endl;
   cout << addition_de(2, 2.3)         << endl;
   cout << addition_de(1, 2.3)         << endl;

   return EXIT_SUCCESS;
}

int addition_de(int entier, double reel, bool positif) {
   return (entier + reel) * (positif ? +1 : -1);
}
