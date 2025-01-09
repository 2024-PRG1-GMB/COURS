#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class C {
public:
//   C() = default;
   C(int param) : oui(param) { i = param; };
private:
   int i;
   const bool oui;
};

//------------------------------------------------------------
int main() {

//   C c0;
   C c1(1);
   C c2(c1);
//   c2 = c1;

   return EXIT_SUCCESS;
}