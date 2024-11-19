#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

using namespace std;

/*
//------------------------------------------------------------
int add (int a, double b) {
   return a + int(b);
}

//------------------------------------------------------------
double add (double a, int b) {
   return a + double(b);
}
*/

//------------------------------------------------------------
template<typename T1, typename T2>
T2 add (const T1& a, const T2& b) {
   return (T2)a + b;
}

template<typename T1, typename T2>
T2 sub (T1 a, T2 b) {
   return (T2)a - b;
}

//------------------------------------------------------------
int main() {

   cout << add<int, int>(1, 2)    << endl;
   cout << add<int, int>(1, 2.3)  << endl;
   cout << sub(1.2, 3)  << endl;;

   cout << add("HEIG"s, "-VD"s) << endl;
   cout << add<string, string>("HEIG", "-VD") << endl;
   return EXIT_SUCCESS;
}
