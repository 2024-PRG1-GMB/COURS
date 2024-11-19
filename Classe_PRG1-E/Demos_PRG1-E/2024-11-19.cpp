#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

/*
//----------------------------------------
//T1    add (const string& a, const string& b)  {
template <typename T1, typename T2, typename T3>
T3    add (const T1&    a, const T2& b)  {
   cout << "fonction générique 1  : ";
   return a + (T1)b;
}

//----------------------------------------
template <typename T1, typename T2>
T1    add (const T1&    a, const T2& b)  {
   cout << "fonction générique 2  : ";
   return a + (T1)b;
}
*/
//----------------------------------------
template <typename T>
T    add (const T&    a, const T& b)  {
   cout << "fonction générique 3  : ";
   return a + b;
}

int main() {

   vector<int> v = {1, 2, 3, 4};
   int a=2;
   int b=3;

//   cout << add<int, int, float>(1, 2.3) << endl;
//   cout << add<int, int>(1.2, 3) << endl;
//   cout << add<int, int>(a, b) << endl;
   cout << add(int(2), int(3)) << endl;
   cout << add<int>(int(2), float(3)) << endl;
   cout << add<>(int(2), float(3)) << endl;
   cout << add  (int(2), float(3)) << endl;
// cout << add(&a, &b) << endl;
   cout << add("HEIG"s, "-VD"s) << endl;


   return EXIT_SUCCESS;
}


