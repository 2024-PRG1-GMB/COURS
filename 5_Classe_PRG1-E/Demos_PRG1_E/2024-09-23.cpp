#include <iostream>
#include <cstdlib>
#include <array>
#include <string>
#include <iomanip>

using namespace std;

int fonction () {
   cout << "dans ma fonction ..." << endl;
   return 42;
}

int main() {
   int x;
   int y;

   cout << x << " " << y << endl;

   x = y = 42;

   cout << x << " " << y << endl;

   cout << fonction() << endl;

   42;

   cout << (5.0 * 2.0) << endl;
   cout << (5   * 2  ) << endl;
   cout << (5.0 * 2  ) << endl;

   int nbre = 7;

   cout <<   nbre           << endl;
   cout << ++nbre           << endl;
   cout << nbre++   << nbre << endl;

   const int i = -7;
//   cout << (++i * --i) << endl;

   cout << -i << i << endl;

   cout << boolalpha << (i == -7) << endl;

   cout << setprecision(20) << 10.0 / 3.0 << endl;
   cout << (10.0 / 3.0 == 3.333) << endl;

   string mot1 = "maison";
   string mot2 = "mais";

   cout << (mot1 < mot2) << endl;

   return EXIT_SUCCESS;
}