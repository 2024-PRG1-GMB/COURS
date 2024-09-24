#include <iostream>
#include <cstdlib>
#include <compare>

using namespace std;

int main() {

   int a = 12;
   int b = 21;

   auto result = a <=> b;

   if (result < 0)
      cout << "a is less than b" << endl;
   else if (result == 0)
      cout << "a is equal than b" << endl;
   else
      cout << "a is greater than b" << endl;

   return EXIT_SUCCESS;
}