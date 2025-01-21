#include <iostream>
#include <cstdlib>
using namespace std;

//------------------------------------------------------------
struct S {
   int a;
   int b;
   S(int a, int b) : a(a), b(b) { cout << "S" << endl; }
};

//------------------------------------------------------------
struct C {
public:
   C(int a, int b) : a(a), b(b) { cout << "C" << endl; }
private:
   int a;
   int b;
};

//------------------------------------------------------------
int main() {

   S s1(1, 2);
   S s2{1, 2};

   C c1(1, 2);
   C c2{1, 2};

   return EXIT_SUCCESS;
}