#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int facto(int n) {
   if(n <= 1)
      return 1;
   return n * facto(n-1);
}

void f(int a, double b=2.1, char c='a') {
   cout << a << b << c << endl;
}

int main() {
   f('c');
   f(3,    , 'c');
   f(3, 2.1, 'c');
   f(3, 2.1);

   cout << facto(5) << endl;
   cout << facto(1200000) << endl;

   return EXIT_SUCCESS;
}