#include <iostream>
#include <cstdlib>
#include <vector>
#include <span>

using namespace std;

template <typename T>
bool estInt(T) {
   cout << "estInt(T) ";
   return false;
}

template <typename T>
bool estInt(T*) {
   cout << "estInt(T*) ";
   return false;
}

template<>
bool estInt<int>(int) {
   cout << "estInt<int>(int) ";
   return true;
}

bool estInt(int) {
   cout << "estInt(int) ";
   return true;
}


int main() {
   cout << boolalpha << estInt(1)            << endl   // true
                     << estInt<>(1)          << endl   // true
                     << estInt<int>(1.2)     << endl   // true
                     << estInt('a')          << endl   // false
                     << estInt(1.)           << endl;  // false
}

