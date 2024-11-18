#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

using namespace std;

double      f(signed char) { cout << "Fonction no 1"; return 0.; }
signed char f(int&)        { cout << "Fonction no 2"; return 0 ; }
int         f(const int&)  { cout << "Fonction no 3"; return 0 ; }
float       f(unsigned)    { cout << "Fonction no 4"; return 0 ; }
unsigned    f(double)      { cout << "Fonction no 5"; return 0 ; }
float       f(float&)      { cout << "Fonction no 6"; return 0.; }

int main() {

   cout << boolalpha << numeric_limits<char>::is_signed << endl;
   f('a');

   return EXIT_SUCCESS;
}
