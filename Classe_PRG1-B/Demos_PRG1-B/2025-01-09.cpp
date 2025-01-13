#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

//------------------------------------------------------------
class C {
public:
   C (int i) : i(i), CSTE(12) {  };
private:
   int i;
   const int CSTE;
};
//------------------------------------------------------------
int main() {

   C c0(2);
   C c1(c0);
//   c1 = c0;

   return EXIT_SUCCESS;
}